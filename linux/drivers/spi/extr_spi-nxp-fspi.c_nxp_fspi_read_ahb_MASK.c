
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ val; } ;
struct TYPE_4__ {int in; } ;
struct TYPE_5__ {TYPE_1__ buf; int nbytes; } ;
struct spi_mem_op {TYPE_3__ addr; TYPE_2__ data; } ;
struct nxp_fspi {scalar_t__ ahb_addr; } ;


 int FUNC_0 (int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct nxp_fspi *VAR_0, const struct spi_mem_op *VAR_1)
{
 u32 VAR_2 = VAR_1->data.nbytes;


 FUNC_0(VAR_1->data.buf.in, (VAR_0->ahb_addr + VAR_1->addr.val), VAR_2);
}
