
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct mite_channel {int dummy; } ;
struct comedi_subdevice {TYPE_1__* device; struct comedi_async* async; } ;
struct comedi_cmd {unsigned int stop_arg; scalar_t__ stop_src; } ;
struct comedi_async {unsigned int buf_read_alloc_count; unsigned int buf_read_count; int events; int prealloc_bufsz; struct comedi_cmd cmd; } ;
struct TYPE_2__ {int class_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct comedi_subdevice*,int ) ;
 int FUNC_1 (struct comedi_subdevice*,int) ;
 unsigned int FUNC_2 (struct comedi_subdevice*) ;
 int FUNC_3 (int ,char*) ;
 unsigned int FUNC_4 (struct mite_channel*) ;
 unsigned int FUNC_5 (struct mite_channel*) ;

__attribute__((used)) static void FUNC_6(struct mite_channel *VAR_4,
     struct comedi_subdevice *VAR_5)
{
 struct comedi_async *VAR_6 = VAR_5->async;
 struct comedi_cmd *VAR_7 = &VAR_6->cmd;
 u32 VAR_8 = VAR_7->stop_arg * FUNC_2(VAR_5);
 unsigned int VAR_9 = VAR_6->buf_read_alloc_count;
 u32 VAR_10, VAR_11;
 int VAR_12;
 bool VAR_13 = (VAR_7->stop_src == VAR_3 && VAR_8 != 0);


 FUNC_0(VAR_5, VAR_6->prealloc_bufsz);
 VAR_11 = FUNC_4(VAR_4);
 if (VAR_7->stop_src == VAR_2 && (int)(VAR_11 - VAR_8) > 0)
  VAR_11 = VAR_8;
 VAR_10 = FUNC_5(VAR_4);
 if (VAR_7->stop_src == VAR_2 && (int)(VAR_10 - VAR_8) > 0)
  VAR_10 = VAR_8;

 if ((!VAR_13 || VAR_8 > VAR_9) &&
     ((int)(VAR_10 - VAR_9) > 0)) {
  FUNC_3(VAR_5->device->class_dev, "mite: DMA underrun\n");
  VAR_6->events |= VAR_1;
  return;
 }

 if (VAR_13) {






  return;
 }

 VAR_12 = VAR_11 - VAR_6->buf_read_count;
 if (VAR_12 > 0) {
  FUNC_1(VAR_5, VAR_12);
  VAR_6->events |= VAR_0;
 }
}
