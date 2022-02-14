
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {int dir; } ;
struct bnxt_tc_flow {TYPE_1__ l2_key; } ;
struct TYPE_4__ {scalar_t__ fw_fid; } ;
struct bnxt {TYPE_2__ pf; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct bnxt *VAR_2, struct bnxt_tc_flow *VAR_3,
     u16 VAR_4)
{
 VAR_3->l2_key.dir = (VAR_2->pf.fw_fid == VAR_4) ? VAR_0 : VAR_1;
}
