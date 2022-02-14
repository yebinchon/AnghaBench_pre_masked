
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otg_fsm {int b_srp_done; int b_se0_srp; int b_ase0_brst_tmout; int a_aidl_bdis_tmout; int a_wait_bcon_tmout; int a_wait_vrise_tmout; } ;


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
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 void* VAR_23 ;
 void* FUNC_0 (int *,int,unsigned long) ;
 int VAR_24 ;

int FUNC_1(struct otg_fsm *VAR_25)
{

 VAR_14 = FUNC_0(&VAR_24, VAR_3,
    (unsigned long)&VAR_25->a_wait_vrise_tmout);
 if (!VAR_14)
  return -VAR_0;

 VAR_11 = FUNC_0(&VAR_24, VAR_2,
    (unsigned long)&VAR_25->a_wait_bcon_tmout);
 if (!VAR_11)
  return -VAR_0;

 VAR_10 = FUNC_0(&VAR_24, VAR_1,
    (unsigned long)&VAR_25->a_aidl_bdis_tmout);
 if (!VAR_10)
  return -VAR_0;

 VAR_15 = FUNC_0(&VAR_24, VAR_4,
    (unsigned long)&VAR_25->b_ase0_brst_tmout);
 if (!VAR_15)
  return -VAR_0;

 VAR_18 = FUNC_0(&VAR_24, VAR_6,
    (unsigned long)&VAR_25->b_se0_srp);
 if (!VAR_18)
  return -VAR_0;

 VAR_20 = FUNC_0(&VAR_24, VAR_7,
    (unsigned long)&VAR_25->b_srp_done);
 if (!VAR_20)
  return -VAR_0;

 VAR_13 = FUNC_0(&VAR_12, 10,
    (unsigned long)&VAR_25);
 if (!VAR_13)
  return -VAR_0;


 VAR_21 = FUNC_0(&VAR_19, VAR_8, 0);
 if (!VAR_21)
  return -VAR_0;

 VAR_17 = FUNC_0(&VAR_16,
    VAR_5, 0);
 if (!VAR_17)
  return -VAR_0;

 VAR_23 = FUNC_0(&VAR_22,
    VAR_9, 0);
 if (!VAR_23)
  return -VAR_0;

 return 0;
}
