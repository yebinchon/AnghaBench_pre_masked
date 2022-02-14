
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_async {unsigned int buf_write_ptr; unsigned int prealloc_bufsz; scalar_t__ munge_count; scalar_t__ buf_write_count; } ;


 int FUNC_0 (struct comedi_subdevice*,scalar_t__) ;
 unsigned int FUNC_1 (struct comedi_subdevice*) ;

unsigned int FUNC_2(struct comedi_subdevice *VAR_0,
       unsigned int VAR_1)
{
 struct comedi_async *VAR_2 = VAR_0->async;
 unsigned int VAR_3 = FUNC_1(VAR_0);

 if (VAR_1 > VAR_3)
  VAR_1 = VAR_3;

 VAR_2->buf_write_count += VAR_1;
 VAR_2->buf_write_ptr += VAR_1;
 FUNC_0(VAR_0, VAR_2->buf_write_count - VAR_2->munge_count);
 if (VAR_2->buf_write_ptr >= VAR_2->prealloc_bufsz)
  VAR_2->buf_write_ptr %= VAR_2->prealloc_bufsz;

 return VAR_1;
}
