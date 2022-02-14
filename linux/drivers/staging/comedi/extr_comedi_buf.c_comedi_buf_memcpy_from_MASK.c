
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_async {unsigned int buf_read_ptr; unsigned int prealloc_bufsz; void* prealloc_buf; } ;


 int FUNC_0 (void*,void*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct comedi_subdevice *VAR_0,
       void *VAR_1, unsigned int VAR_2)
{
 void *VAR_3;
 struct comedi_async *VAR_4 = VAR_0->async;
 unsigned int VAR_5 = VAR_4->buf_read_ptr;

 while (VAR_2) {
  unsigned int VAR_6;

  VAR_3 = VAR_4->prealloc_buf + VAR_5;

  if (VAR_2 >= VAR_4->prealloc_bufsz - VAR_5)
   VAR_6 = VAR_4->prealloc_bufsz - VAR_5;
  else
   VAR_6 = VAR_2;

  FUNC_0(VAR_1, VAR_3, VAR_6);
  VAR_2 -= VAR_6;
  VAR_1 += VAR_6;
  VAR_5 = 0;
 }
}
