
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_async {unsigned int munge_count; unsigned int buf_read_count; } ;


 int FUNC_0 () ;

unsigned int FUNC_1(struct comedi_subdevice *VAR_0)
{
 struct comedi_async *VAR_1 = VAR_0->async;
 unsigned int VAR_2;

 if (!VAR_1)
  return 0;

 VAR_2 = VAR_1->munge_count - VAR_1->buf_read_count;





 FUNC_0();

 return VAR_2;
}
