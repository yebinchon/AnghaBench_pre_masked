
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_async {unsigned int buf_write_alloc_count; } ;


 unsigned int FUNC_0 (struct comedi_subdevice*) ;
 int FUNC_1 () ;

unsigned int FUNC_2(struct comedi_subdevice *VAR_0,
        unsigned int VAR_1)
{
 struct comedi_async *VAR_2 = VAR_0->async;
 unsigned int VAR_3 = FUNC_0(VAR_0);

 if (VAR_1 > VAR_3)
  VAR_1 = VAR_3;

 VAR_2->buf_write_alloc_count += VAR_1;





 FUNC_1();

 return VAR_1;
}
