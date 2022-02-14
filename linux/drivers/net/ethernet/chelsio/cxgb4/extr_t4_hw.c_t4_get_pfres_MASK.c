
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pf_resources {int nethctrl; int wx_caps; int r_caps; int nexactf; int nvi; int tc; int pmask; int neq; int niq; int niqflint; } ;
struct fw_pfvf_cmd {int r_caps_to_nethctrl; int tc_to_nexactf; int type_to_neq; int niqflint_niq; void* retval_len16; void* op_to_vfn; } ;
struct TYPE_2__ {struct pf_resources pfres; } ;
struct adapter {int mbox; int pf; TYPE_1__ params; } ;
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
 int FUNC_13 (int ) ;
 int VAR_3 ;
 int FUNC_14 (int ) ;
 void* FUNC_15 (int) ;
 int FUNC_16 (struct fw_pfvf_cmd*,int ,int) ;
 int FUNC_17 (struct adapter*,int ,struct fw_pfvf_cmd*,int,struct fw_pfvf_cmd*) ;

int FUNC_18(struct adapter *VAR_4)
{
 struct pf_resources *VAR_5 = &VAR_4->params.pfres;
 struct fw_pfvf_cmd VAR_6, VAR_7;
 int VAR_8;
 u32 VAR_9;




 FUNC_16(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.op_to_vfn = FUNC_15(FUNC_0(VAR_2) |
        VAR_1 |
        VAR_0 |
        FUNC_8(VAR_4->pf) |
        FUNC_12(0));
 VAR_6.retval_len16 = FUNC_15(FUNC_1(VAR_6));
 VAR_8 = FUNC_17(VAR_4, VAR_4->mbox, &VAR_6, sizeof(VAR_6), &VAR_7);
 if (VAR_8 != VAR_3)
  return VAR_8;



 VAR_9 = FUNC_14(VAR_7.niqflint_niq);
 VAR_5->niqflint = FUNC_5(VAR_9);
 VAR_5->niq = FUNC_6(VAR_9);

 VAR_9 = FUNC_14(VAR_7.type_to_neq);
 VAR_5->neq = FUNC_2(VAR_9);
 VAR_5->pmask = FUNC_9(VAR_9);

 VAR_9 = FUNC_14(VAR_7.tc_to_nexactf);
 VAR_5->tc = FUNC_11(VAR_9);
 VAR_5->nvi = FUNC_7(VAR_9);
 VAR_5->nexactf = FUNC_4(VAR_9);

 VAR_9 = FUNC_14(VAR_7.r_caps_to_nethctrl);
 VAR_5->r_caps = FUNC_10(VAR_9);
 VAR_5->wx_caps = FUNC_13(VAR_9);
 VAR_5->nethctrl = FUNC_3(VAR_9);

 return 0;
}
