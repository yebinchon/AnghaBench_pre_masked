
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vf_resources {int nethctrl; int wx_caps; int r_caps; int nexactf; int nvi; int tc; int pmask; int neq; int niq; int niqflint; } ;
struct fw_pfvf_cmd {int r_caps_to_nethctrl; int tc_to_nexactf; int type_to_neq; int niqflint_niq; void* retval_len16; void* op_to_vfn; } ;
struct TYPE_2__ {struct vf_resources vfres; } ;
struct adapter {TYPE_1__ params; } ;
typedef int cmd ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct fw_pfvf_cmd) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 void* FUNC_13 (int) ;
 int FUNC_14 (struct fw_pfvf_cmd*,int ,int) ;
 int FUNC_15 (struct adapter*,struct fw_pfvf_cmd*,int,struct fw_pfvf_cmd*) ;

int FUNC_16(struct adapter *VAR_3)
{
 struct vf_resources *VAR_4 = &VAR_3->params.vfres;
 struct fw_pfvf_cmd VAR_5, VAR_6;
 int VAR_7;
 u32 VAR_8;





 FUNC_14(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.op_to_vfn = FUNC_13(FUNC_0(VAR_2) |
        VAR_1 |
        VAR_0);
 VAR_5.retval_len16 = FUNC_13(FUNC_1(VAR_5));
 VAR_7 = FUNC_15(VAR_3, &VAR_5, sizeof(VAR_5), &VAR_6);
 if (VAR_7)
  return VAR_7;




 VAR_8 = FUNC_12(VAR_6.niqflint_niq);
 VAR_4->niqflint = FUNC_5(VAR_8);
 VAR_4->niq = FUNC_6(VAR_8);

 VAR_8 = FUNC_12(VAR_6.type_to_neq);
 VAR_4->neq = FUNC_2(VAR_8);
 VAR_4->pmask = FUNC_8(VAR_8);

 VAR_8 = FUNC_12(VAR_6.tc_to_nexactf);
 VAR_4->tc = FUNC_10(VAR_8);
 VAR_4->nvi = FUNC_7(VAR_8);
 VAR_4->nexactf = FUNC_4(VAR_8);

 VAR_8 = FUNC_12(VAR_6.r_caps_to_nethctrl);
 VAR_4->r_caps = FUNC_9(VAR_8);
 VAR_4->wx_caps = FUNC_11(VAR_8);
 VAR_4->nethctrl = FUNC_3(VAR_8);

 return 0;
}
