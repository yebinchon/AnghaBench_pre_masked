
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_async {unsigned int buf_read_alloc_count; unsigned int buf_read_count; } ;



__attribute__((used)) static unsigned int FUNC_0(struct comedi_async *VAR_0)
{
 return VAR_0->buf_read_alloc_count - VAR_0->buf_read_count;
}
