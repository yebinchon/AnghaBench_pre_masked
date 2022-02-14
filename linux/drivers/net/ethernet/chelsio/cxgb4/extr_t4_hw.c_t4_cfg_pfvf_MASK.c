
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_pfvf_cmd {void* r_caps_to_nethctrl; void* tc_to_nexactf; void* type_to_neq; void* niqflint_niq; void* retval_len16; void* op_to_vfn; } ;
struct adapter {int dummy; } ;
typedef int c ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct fw_pfvf_cmd) ;
 int VAR_2 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (unsigned int) ;
 int FUNC_12 (unsigned int) ;
 int FUNC_13 (unsigned int) ;
 int FUNC_14 (unsigned int) ;
 void* FUNC_15 (int) ;
 int FUNC_16 (struct fw_pfvf_cmd*,int ,int) ;
 int FUNC_17 (struct adapter*,unsigned int,struct fw_pfvf_cmd*,int,int *) ;

int FUNC_18(struct adapter *VAR_3, unsigned int VAR_4, unsigned int VAR_5,
  unsigned int VAR_6, unsigned int VAR_7, unsigned int VAR_8,
  unsigned int VAR_9, unsigned int VAR_10, unsigned int VAR_11,
  unsigned int VAR_12, unsigned int VAR_13, unsigned int VAR_14,
  unsigned int VAR_15, unsigned int VAR_16, unsigned int VAR_17)
{
 struct fw_pfvf_cmd VAR_18;

 FUNC_16(&VAR_18, 0, sizeof(VAR_18));
 VAR_18.op_to_vfn = FUNC_15(FUNC_0(VAR_2) | VAR_0 |
      VAR_1 | FUNC_9(VAR_5) |
      FUNC_13(VAR_6));
 VAR_18.retval_len16 = FUNC_15(FUNC_1(VAR_18));
 VAR_18.niqflint_niq = FUNC_15(FUNC_6(VAR_9) |
         FUNC_7(VAR_10));
 VAR_18.type_to_neq = FUNC_15(FUNC_2(VAR_13) |
        FUNC_10(VAR_14) |
        FUNC_3(VAR_7));
 VAR_18.tc_to_nexactf = FUNC_15(FUNC_12(VAR_11) |
          FUNC_8(VAR_12) |
          FUNC_5(VAR_15));
 VAR_18.r_caps_to_nethctrl = FUNC_15(FUNC_11(VAR_16) |
     FUNC_14(VAR_17) |
     FUNC_4(VAR_8));
 return FUNC_17(VAR_3, VAR_4, &VAR_18, sizeof(VAR_18), ((void*)0));
}
