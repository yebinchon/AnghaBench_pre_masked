
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_async {unsigned int buf_write_ptr; unsigned int prealloc_bufsz; scalar_t__ prealloc_buf; } ;


 int FUNC_0 (scalar_t__,void const*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct comedi_subdevice *VAR_0,
     const void *VAR_1, unsigned int VAR_2)
{
 struct comedi_async *VAR_3 = VAR_0->async;
 unsigned int VAR_4 = VAR_3->buf_write_ptr;

 while (VAR_2) {
  unsigned int VAR_5;

  if (VAR_4 + VAR_2 > VAR_3->prealloc_bufsz)
   VAR_5 = VAR_3->prealloc_bufsz - VAR_4;
  else
   VAR_5 = VAR_2;

  FUNC_0(VAR_3->prealloc_buf + VAR_4, VAR_1, VAR_5);

  VAR_1 += VAR_5;
  VAR_2 -= VAR_5;

  VAR_4 = 0;
 }
}
