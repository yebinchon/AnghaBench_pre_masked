
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int ll2_ooo_queue_id; } ;
struct TYPE_4__ {TYPE_1__ iscsi_pf_params; } ;
struct qed_hwfn {TYPE_2__ pf_params; } ;


 int FUNC_0 (struct qed_hwfn*,int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct qed_hwfn*,int ) ;
 int FUNC_2 (struct qed_hwfn*,int ) ;

__attribute__((used)) static void FUNC_3(struct qed_hwfn *VAR_3)
{
 u8 *VAR_4 = &VAR_3->pf_params.iscsi_pf_params.ll2_ooo_queue_id;

 FUNC_0(VAR_3, (VAR_2 | VAR_1),
     "Stopping LL2 OOO queue [%02x]\n", *VAR_4);

 FUNC_2(VAR_3, *VAR_4);
 FUNC_1(VAR_3, *VAR_4);
 *VAR_4 = VAR_0;
}
