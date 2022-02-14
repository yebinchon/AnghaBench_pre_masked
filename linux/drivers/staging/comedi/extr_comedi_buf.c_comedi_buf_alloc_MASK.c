
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int mutex; } ;
struct comedi_async {unsigned long prealloc_bufsz; scalar_t__ prealloc_buf; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,unsigned int) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct comedi_device *VAR_4, struct comedi_subdevice *VAR_5,
       unsigned long VAR_6)
{
 struct comedi_async *VAR_7 = VAR_5->async;

 FUNC_2(&VAR_4->mutex);


 VAR_6 = (VAR_6 + VAR_3 - 1) & VAR_1;


 if (VAR_7->prealloc_buf && VAR_7->prealloc_bufsz == VAR_6)
  return 0;


 FUNC_1(VAR_4, VAR_5);


 if (VAR_6) {
  unsigned int VAR_8 = VAR_6 >> VAR_2;

  FUNC_0(VAR_4, VAR_5, VAR_8);

  if (!VAR_7->prealloc_buf) {

   FUNC_1(VAR_4, VAR_5);
   return -VAR_0;
  }
 }
 VAR_7->prealloc_bufsz = VAR_6;

 return 0;
}
