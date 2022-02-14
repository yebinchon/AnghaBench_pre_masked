
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {void* q_depth; int addr; } ;
struct TYPE_12__ {void* q_depth; int addr; } ;
struct TYPE_10__ {scalar_t__ i2htok; } ;
struct TYPE_17__ {TYPE_1__ mtag; } ;
struct bfi_msgq_cfg_req {TYPE_6__ rspq; TYPE_3__ cmdq; TYPE_8__ mh; } ;
struct TYPE_18__ {int * msg; } ;
struct TYPE_14__ {int pa; } ;
struct TYPE_16__ {int depth; TYPE_5__ addr; } ;
struct TYPE_11__ {int pa; } ;
struct TYPE_13__ {int depth; TYPE_2__ addr; } ;
struct bfa_msgq {TYPE_9__ init_mb; int ioc; TYPE_7__ rspq; TYPE_4__ cmdq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,TYPE_9__*,int *,int *) ;
 int FUNC_2 (TYPE_8__,int ,int ,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct bfi_msgq_cfg_req*,int ,int) ;

__attribute__((used)) static void
FUNC_5(void *VAR_2)
{
 struct bfa_msgq *VAR_3 = (struct bfa_msgq *)VAR_2;
 struct bfi_msgq_cfg_req *VAR_4 =
  (struct bfi_msgq_cfg_req *)&VAR_3->init_mb.msg[0];

 FUNC_4(VAR_4, 0, sizeof(struct bfi_msgq_cfg_req));
 FUNC_2(VAR_4->mh, VAR_0, VAR_1, 0);
 VAR_4->mh.mtag.i2htok = 0;

 FUNC_0(VAR_4->cmdq.addr, VAR_3->cmdq.addr.pa);
 VAR_4->cmdq.q_depth = FUNC_3(VAR_3->cmdq.depth);
 FUNC_0(VAR_4->rspq.addr, VAR_3->rspq.addr.pa);
 VAR_4->rspq.q_depth = FUNC_3(VAR_3->rspq.depth);

 FUNC_1(VAR_3->ioc, &VAR_3->init_mb, ((void*)0), ((void*)0));
}
