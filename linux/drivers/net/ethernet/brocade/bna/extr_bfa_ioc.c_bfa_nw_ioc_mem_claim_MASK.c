
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct bfi_ioc_attr {int dummy; } ;
struct TYPE_2__ {int pa; int * kva; } ;
struct bfa_ioc {struct bfi_ioc_attr* attr; TYPE_1__ attr_dma; } ;



void
FUNC_0(struct bfa_ioc *VAR_0, u8 *VAR_1, u64 VAR_2)
{



 VAR_0->attr_dma.kva = VAR_1;
 VAR_0->attr_dma.pa = VAR_2;
 VAR_0->attr = (struct bfi_ioc_attr *) VAR_1;
}
