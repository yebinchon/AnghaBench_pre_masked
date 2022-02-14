
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_nor {int bouncebuf_size; void* bouncebuf; int spimem; } ;
struct TYPE_3__ {void* in; void* out; } ;
struct TYPE_4__ {scalar_t__ dir; int nbytes; TYPE_1__ buf; } ;
struct spi_mem_op {TYPE_2__ data; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*,void const*,int) ;
 scalar_t__ FUNC_1 (void const*) ;
 int FUNC_2 (int ,struct spi_mem_op*) ;
 int FUNC_3 (int ,struct spi_mem_op*) ;
 int FUNC_4 (void const*) ;

__attribute__((used)) static ssize_t FUNC_5(struct spi_nor *VAR_1,
     struct spi_mem_op *VAR_2)
{
 bool VAR_3 = 0;
 void *VAR_4 = ((void*)0);
 const void *VAR_5;
 int VAR_6;

 if (VAR_2->data.dir == VAR_0)
  VAR_5 = VAR_2->data.buf.in;
 else
  VAR_5 = VAR_2->data.buf.out;

 if (FUNC_1(VAR_5) || !FUNC_4(VAR_5))
  VAR_3 = 1;

 if (VAR_3) {
  if (VAR_2->data.nbytes > VAR_1->bouncebuf_size)
   VAR_2->data.nbytes = VAR_1->bouncebuf_size;

  if (VAR_2->data.dir == VAR_0) {
   VAR_4 = VAR_2->data.buf.in;
   VAR_2->data.buf.in = VAR_1->bouncebuf;
  } else {
   VAR_2->data.buf.out = VAR_1->bouncebuf;
   FUNC_0(VAR_1->bouncebuf, VAR_5,
          VAR_2->data.nbytes);
  }
 }

 VAR_6 = FUNC_2(VAR_1->spimem, VAR_2);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_1->spimem, VAR_2);
 if (VAR_6)
  return VAR_6;

 if (VAR_3 && VAR_2->data.dir == VAR_0)
  FUNC_0(VAR_4, VAR_1->bouncebuf, VAR_2->data.nbytes);

 return VAR_2->data.nbytes;
}
