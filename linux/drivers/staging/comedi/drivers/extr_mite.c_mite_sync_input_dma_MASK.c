
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mite_channel {int dummy; } ;
struct comedi_subdevice {TYPE_1__* device; struct comedi_async* async; } ;
struct comedi_async {unsigned int buf_write_alloc_count; unsigned int buf_write_count; int events; int prealloc_bufsz; } ;
struct TYPE_2__ {int class_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_subdevice*,int ) ;
 int FUNC_1 (struct comedi_subdevice*,int) ;
 int FUNC_2 (struct comedi_subdevice*,int) ;
 int FUNC_3 (int ,char*) ;
 unsigned int FUNC_4 (struct mite_channel*) ;
 unsigned int FUNC_5 (struct mite_channel*) ;

__attribute__((used)) static void FUNC_6(struct mite_channel *VAR_2,
    struct comedi_subdevice *VAR_3)
{
 struct comedi_async *VAR_4 = VAR_3->async;
 int VAR_5;
 unsigned int VAR_6, VAR_7;

 VAR_7 = VAR_4->buf_write_alloc_count;

 FUNC_0(VAR_3, VAR_4->prealloc_bufsz);

 VAR_6 = FUNC_4(VAR_2);
 if ((int)(FUNC_5(VAR_2) -
    VAR_7) > 0) {
  FUNC_3(VAR_3->device->class_dev,
    "mite: DMA overwrite of free area\n");
  VAR_4->events |= VAR_1;
  return;
 }

 VAR_5 = VAR_6 - VAR_4->buf_write_count;




 if (VAR_5 > 0) {
  FUNC_1(VAR_3, VAR_5);
  FUNC_2(VAR_3, VAR_5);
  VAR_4->events |= VAR_0;
 }
}
