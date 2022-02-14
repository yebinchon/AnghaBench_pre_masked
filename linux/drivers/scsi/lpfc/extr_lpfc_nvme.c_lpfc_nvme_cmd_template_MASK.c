
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int wqe_com; } ;
struct TYPE_5__ {int wqe_com; } ;
struct TYPE_4__ {int wqe_com; } ;
union lpfc_wqe128 {TYPE_3__ fcp_icmd; TYPE_2__ fcp_iwrite; TYPE_1__ fcp_iread; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int *,int) ;
 union lpfc_wqe128 VAR_15 ;
 union lpfc_wqe128 VAR_16 ;
 union lpfc_wqe128 VAR_17 ;
 int FUNC_1 (union lpfc_wqe128*,int ,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;

void
FUNC_2(void)
{
 union lpfc_wqe128 *VAR_31;


 VAR_31 = &VAR_16;
 FUNC_1(VAR_31, 0, sizeof(union lpfc_wqe128));
 FUNC_0(VAR_20, &VAR_31->fcp_iread.wqe_com, VAR_2);
 FUNC_0(VAR_28, &VAR_31->fcp_iread.wqe_com, VAR_13);
 FUNC_0(VAR_18, &VAR_31->fcp_iread.wqe_com, VAR_0);
 FUNC_0(VAR_22, &VAR_31->fcp_iread.wqe_com, VAR_14);






 FUNC_0(VAR_29, &VAR_31->fcp_iread.wqe_com, 0);
 FUNC_0(VAR_26, &VAR_31->fcp_iread.wqe_com, 1);
 FUNC_0(VAR_24, &VAR_31->fcp_iread.wqe_com, VAR_7);
 FUNC_0(VAR_25, &VAR_31->fcp_iread.wqe_com, VAR_10);
 FUNC_0(VAR_23, &VAR_31->fcp_iread.wqe_com, 0);
 FUNC_0(VAR_30, &VAR_31->fcp_iread.wqe_com, 1);


 FUNC_0(VAR_19, &VAR_31->fcp_iread.wqe_com, VAR_11);
 FUNC_0(VAR_21, &VAR_31->fcp_iread.wqe_com, VAR_5);
 FUNC_0(VAR_27, &VAR_31->fcp_iread.wqe_com, 1);






 VAR_31 = &VAR_17;
 FUNC_1(VAR_31, 0, sizeof(union lpfc_wqe128));
 FUNC_0(VAR_20, &VAR_31->fcp_iwrite.wqe_com, VAR_3);
 FUNC_0(VAR_28, &VAR_31->fcp_iwrite.wqe_com, VAR_13);
 FUNC_0(VAR_18, &VAR_31->fcp_iwrite.wqe_com, VAR_0);
 FUNC_0(VAR_22, &VAR_31->fcp_iwrite.wqe_com, VAR_14);






 FUNC_0(VAR_29, &VAR_31->fcp_iwrite.wqe_com, 0);
 FUNC_0(VAR_26, &VAR_31->fcp_iwrite.wqe_com, 1);
 FUNC_0(VAR_24, &VAR_31->fcp_iwrite.wqe_com, VAR_8);
 FUNC_0(VAR_25, &VAR_31->fcp_iwrite.wqe_com, VAR_10);
 FUNC_0(VAR_23, &VAR_31->fcp_iwrite.wqe_com, 0);
 FUNC_0(VAR_30, &VAR_31->fcp_iwrite.wqe_com, 1);


 FUNC_0(VAR_19, &VAR_31->fcp_iwrite.wqe_com, VAR_12);
 FUNC_0(VAR_21, &VAR_31->fcp_iwrite.wqe_com, VAR_5);
 FUNC_0(VAR_27, &VAR_31->fcp_iwrite.wqe_com, 1);






 VAR_31 = &VAR_15;
 FUNC_1(VAR_31, 0, sizeof(union lpfc_wqe128));
 FUNC_0(VAR_20, &VAR_31->fcp_icmd.wqe_com, VAR_1);
 FUNC_0(VAR_28, &VAR_31->fcp_icmd.wqe_com, 0);
 FUNC_0(VAR_18, &VAR_31->fcp_icmd.wqe_com, VAR_0);
 FUNC_0(VAR_22, &VAR_31->fcp_icmd.wqe_com, VAR_14);






 FUNC_0(VAR_29, &VAR_31->fcp_icmd.wqe_com, 1);
 FUNC_0(VAR_26, &VAR_31->fcp_icmd.wqe_com, 1);
 FUNC_0(VAR_24, &VAR_31->fcp_icmd.wqe_com, VAR_6);
 FUNC_0(VAR_25, &VAR_31->fcp_icmd.wqe_com, VAR_9);
 FUNC_0(VAR_23, &VAR_31->fcp_icmd.wqe_com, 0);
 FUNC_0(VAR_30, &VAR_31->fcp_icmd.wqe_com, 1);


 FUNC_0(VAR_19, &VAR_31->fcp_icmd.wqe_com, VAR_4);
 FUNC_0(VAR_21, &VAR_31->fcp_icmd.wqe_com, VAR_5);
 FUNC_0(VAR_27, &VAR_31->fcp_icmd.wqe_com, 0);


}
