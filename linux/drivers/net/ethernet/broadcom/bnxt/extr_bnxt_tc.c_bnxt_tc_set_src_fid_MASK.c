
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int flags; } ;
struct bnxt_tc_flow {int src_fid; TYPE_1__ actions; } ;
struct TYPE_4__ {int fw_fid; } ;
struct bnxt {TYPE_2__ pf; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct bnxt *VAR_1, struct bnxt_tc_flow *VAR_2,
    u16 VAR_3)
{
 if (VAR_2->actions.flags & VAR_0)
  VAR_2->src_fid = VAR_1->pf.fw_fid;
 else
  VAR_2->src_fid = VAR_3;
}
