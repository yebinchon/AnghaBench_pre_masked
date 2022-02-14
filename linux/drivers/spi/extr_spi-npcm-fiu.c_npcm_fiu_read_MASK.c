
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ val; } ;
struct TYPE_5__ {int * in; } ;
struct TYPE_6__ {int nbytes; TYPE_2__ buf; } ;
struct spi_mem_op {TYPE_1__ addr; TYPE_3__ data; } ;
struct spi_mem {int dummy; } ;


 int FUNC_0 (struct spi_mem*,struct spi_mem_op const*,scalar_t__,int,int *,int) ;

__attribute__((used)) static int FUNC_1(struct spi_mem *VAR_0, const struct spi_mem_op *VAR_1)
{
 u8 *VAR_2 = VAR_1->data.buf.in;
 int VAR_3, VAR_4, VAR_5;
 u8 *VAR_6;
 u32 VAR_7;
 int VAR_8;

 VAR_3 = 0;
 VAR_5 = VAR_1->data.nbytes;

 do {
  VAR_7 = ((u32)VAR_1->addr.val + VAR_3);
  if (VAR_5 < 16)
   VAR_4 = VAR_5;
  else
   VAR_4 = 16;

  VAR_6 = VAR_2 + VAR_3;
  VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_7, 1, VAR_6,
     VAR_4);
  if (VAR_8)
   return VAR_8;

  VAR_3 += VAR_4;
  VAR_5 -= 16;
 } while (VAR_5 > 0);

 return 0;
}
