
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef void* u64 ;
struct TYPE_8__ {void* pa; int * kva; } ;
struct TYPE_7__ {TYPE_4__ addr; } ;
struct TYPE_5__ {void* pa; int * kva; } ;
struct TYPE_6__ {TYPE_1__ addr; } ;
struct bfa_msgq {TYPE_3__ rspq; TYPE_2__ cmdq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

void
FUNC_1(struct bfa_msgq *VAR_2, u8 *VAR_3, u64 VAR_4)
{
 VAR_2->cmdq.addr.kva = VAR_3;
 VAR_2->cmdq.addr.pa = VAR_4;

 VAR_3 += FUNC_0(VAR_1, VAR_0);
 VAR_4 += FUNC_0(VAR_1, VAR_0);

 VAR_2->rspq.addr.kva = VAR_3;
 VAR_2->rspq.addr.pa = VAR_4;
}
