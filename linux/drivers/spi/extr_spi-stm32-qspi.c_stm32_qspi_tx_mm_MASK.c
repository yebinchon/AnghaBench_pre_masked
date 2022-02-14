
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stm32_qspi {scalar_t__ mm_base; } ;
struct TYPE_4__ {int in; } ;
struct TYPE_6__ {int nbytes; TYPE_1__ buf; } ;
struct TYPE_5__ {scalar_t__ val; } ;
struct spi_mem_op {TYPE_3__ data; TYPE_2__ addr; } ;


 int FUNC_0 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct stm32_qspi *VAR_0,
       const struct spi_mem_op *VAR_1)
{
 FUNC_0(VAR_1->data.buf.in, VAR_0->mm_base + VAR_1->addr.val,
        VAR_1->data.nbytes);
 return 0;
}
