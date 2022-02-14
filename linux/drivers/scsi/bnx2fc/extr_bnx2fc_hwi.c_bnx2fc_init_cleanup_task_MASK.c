
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_15__ {int rx_flags; } ;
struct TYPE_14__ {int init_flags; } ;
struct TYPE_16__ {TYPE_7__ var_ctx; TYPE_6__ const_ctx; } ;
struct TYPE_12__ {int init_flags; int tx_flags; } ;
struct TYPE_9__ {int cleaned_task_id; } ;
struct TYPE_10__ {TYPE_1__ ctx; } ;
struct TYPE_11__ {TYPE_2__ cleanup; } ;
struct TYPE_13__ {TYPE_4__ const_ctx; TYPE_3__ union_ctx; } ;
struct fcoe_task_ctx_entry {TYPE_8__ rxwr_txrd; TYPE_5__ txwr_rxrd; } ;
struct bnx2fc_rport {int context_id; scalar_t__ dev_type; } ;
struct bnx2fc_cmd {struct bnx2fc_rport* tgt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct fcoe_task_ctx_entry*,int ,int) ;

void FUNC_1(struct bnx2fc_cmd *VAR_12,
         struct fcoe_task_ctx_entry *VAR_13,
         u16 VAR_14)
{
 u8 VAR_15 = VAR_4;
 struct bnx2fc_rport *VAR_16 = VAR_12->tgt;
 u32 VAR_17 = VAR_16->context_id;

 FUNC_0(VAR_13, 0, sizeof(struct fcoe_task_ctx_entry));



 VAR_13->txwr_rxrd.const_ctx.init_flags = VAR_15 <<
    VAR_9;
 VAR_13->txwr_rxrd.const_ctx.init_flags |= VAR_0 <<
    VAR_7;
 if (VAR_16->dev_type == VAR_11)
  VAR_13->txwr_rxrd.const_ctx.init_flags |=
    VAR_2 <<
    VAR_8;
 else
  VAR_13->txwr_rxrd.const_ctx.init_flags |=
    VAR_1 <<
    VAR_8;
 VAR_13->txwr_rxrd.union_ctx.cleanup.ctx.cleaned_task_id = VAR_14;


 VAR_13->txwr_rxrd.const_ctx.tx_flags =
    VAR_3 <<
    VAR_10;


 VAR_13->rxwr_txrd.const_ctx.init_flags = VAR_17 <<
    VAR_5;
 VAR_13->rxwr_txrd.var_ctx.rx_flags |= 1 <<
    VAR_6;
}
