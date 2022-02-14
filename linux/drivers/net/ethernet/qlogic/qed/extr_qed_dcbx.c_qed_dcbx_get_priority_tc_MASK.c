
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct qed_hwfn {TYPE_1__* p_dcbx_info; } ;
struct TYPE_5__ {size_t* ets_pri_tc_tbl; } ;
struct TYPE_6__ {TYPE_2__ params; int valid; } ;
struct qed_dcbx_get {TYPE_3__ operational; } ;
struct TYPE_4__ {struct qed_dcbx_get get; } ;


 int FUNC_0 (struct qed_hwfn*,char*,size_t) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;

u8 FUNC_2(struct qed_hwfn *VAR_3, u8 VAR_4)
{
 struct qed_dcbx_get *VAR_5 = &VAR_3->p_dcbx_info->get;

 if (VAR_4 >= VAR_1) {
  FUNC_0(VAR_3, "Invalid priority %d\n", VAR_4);
  return VAR_0;
 }

 if (!VAR_5->operational.valid) {
  FUNC_1(VAR_3, VAR_2,
      "Dcbx parameters not available\n");
  return VAR_0;
 }

 return VAR_5->operational.params.ets_pri_tc_tbl[VAR_4];
}
