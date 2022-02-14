
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct apci3120_private* private; } ;
struct comedi_cmd {int scan_end_arg; scalar_t__ stop_src; unsigned int stop_arg; int flags; } ;
struct apci3120_private {struct apci3120_dmabuf* dmabuf; } ;
struct apci3120_dmabuf {unsigned int size; unsigned int use_size; } ;
struct TYPE_2__ {unsigned int prealloc_bufsz; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct comedi_device*,struct apci3120_dmabuf*) ;
 unsigned int FUNC_1 (struct comedi_subdevice*,int) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_2,
          struct comedi_subdevice *VAR_3)
{
 struct apci3120_private *VAR_4 = VAR_2->private;
 struct comedi_cmd *VAR_5 = &VAR_3->async->cmd;
 struct apci3120_dmabuf *VAR_6 = &VAR_4->dmabuf[0];
 struct apci3120_dmabuf *VAR_7 = &VAR_4->dmabuf[1];
 unsigned int VAR_8 = VAR_6->size;
 unsigned int VAR_9 = VAR_7->size;
 unsigned int VAR_10;

 VAR_10 = FUNC_1(VAR_3, VAR_5->scan_end_arg);

 if (VAR_5->stop_src == VAR_1) {




  if (VAR_8 > (VAR_5->stop_arg * VAR_10))
   VAR_8 = VAR_5->stop_arg * VAR_10;
  else if (VAR_9 > (VAR_5->stop_arg * VAR_10 - VAR_8))
   VAR_9 = VAR_5->stop_arg * VAR_10 - VAR_8;
 }

 if (VAR_5->flags & VAR_0) {

  if (VAR_8 > VAR_10) {
   VAR_8 = VAR_10;
   if (VAR_5->scan_end_arg & 1)
    VAR_8 += 2;
  }
  if (VAR_9 > VAR_10) {
   VAR_9 = VAR_10;
   if (VAR_5->scan_end_arg & 1)
    VAR_9 -= 2;
   if (VAR_9 < 4)
    VAR_9 = 4;
  }
 } else {

  if (VAR_8 > VAR_3->async->prealloc_bufsz)
   VAR_8 = VAR_3->async->prealloc_bufsz;
  if (VAR_9 > VAR_3->async->prealloc_bufsz)
   VAR_9 = VAR_3->async->prealloc_bufsz;
 }
 VAR_6->use_size = VAR_8;
 VAR_7->use_size = VAR_9;

 FUNC_0(VAR_2, VAR_6);
}
