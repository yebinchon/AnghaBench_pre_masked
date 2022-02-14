
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_async {unsigned int buf_write_alloc_count; unsigned int buf_write_count; } ;



unsigned int FUNC_0(struct comedi_subdevice *VAR_0)
{
 struct comedi_async *VAR_1 = VAR_0->async;

 return VAR_1->buf_write_alloc_count - VAR_1->buf_write_count;
}
