
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u64 ;
typedef int u16 ;
struct t10_reservation {int aptpl_reg_list; } ;
struct t10_pr_registration {int pr_reg_all_tg_pt; int pr_reg_aptpl; int isid_present_at_reg; int pr_res_holder; int pr_reg_aptpl_list; int pr_reg_tpgt; int pr_tport; int pr_iport; int pr_reg_isid; int pr_reg_bin_isid; int pr_res_type; scalar_t__ pr_res_scope; void* pr_res_key; void* pr_aptpl_target_lun; void* pr_res_mapped_lun; int * pr_reg_deve; int * pr_reg_nacl; int pr_res_holders; int pr_reg_atp_mem_list; int pr_reg_atp_list; int pr_reg_abort_list; int pr_reg_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (unsigned char*) ;
 struct t10_pr_registration* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ,char*,unsigned char*) ;
 int VAR_6 ;

int FUNC_8(
 struct t10_reservation *VAR_7,
 u64 VAR_8,
 unsigned char *VAR_9,
 unsigned char *VAR_10,
 u64 VAR_11,
 unsigned char *VAR_12,
 u16 VAR_13,
 u64 VAR_14,
 int VAR_15,
 int VAR_16,
 u8 VAR_17)
{
 struct t10_pr_registration *VAR_18;

 if (!VAR_9 || !VAR_12 || !VAR_8) {
  FUNC_6("Illegal parameters for APTPL registration\n");
  return -VAR_0;
 }

 VAR_18 = FUNC_3(VAR_6, VAR_2);
 if (!VAR_18) {
  FUNC_6("Unable to allocate struct t10_pr_registration\n");
  return -VAR_1;
 }

 FUNC_0(&VAR_18->pr_reg_list);
 FUNC_0(&VAR_18->pr_reg_abort_list);
 FUNC_0(&VAR_18->pr_reg_aptpl_list);
 FUNC_0(&VAR_18->pr_reg_atp_list);
 FUNC_0(&VAR_18->pr_reg_atp_mem_list);
 FUNC_1(&VAR_18->pr_res_holders, 0);
 VAR_18->pr_reg_nacl = ((void*)0);
 VAR_18->pr_reg_deve = ((void*)0);
 VAR_18->pr_res_mapped_lun = VAR_11;
 VAR_18->pr_aptpl_target_lun = VAR_14;
 VAR_18->pr_res_key = VAR_8;
 VAR_18->pr_reg_all_tg_pt = VAR_16;
 VAR_18->pr_reg_aptpl = 1;
 VAR_18->pr_res_scope = 0;
 VAR_18->pr_res_type = VAR_17;




 if (VAR_10 != ((void*)0)) {
  VAR_18->pr_reg_bin_isid = FUNC_2(VAR_10);
  FUNC_7(VAR_18->pr_reg_isid, VAR_5, "%s", VAR_10);
  VAR_18->isid_present_at_reg = 1;
 }



 FUNC_7(VAR_18->pr_iport, VAR_3, "%s", VAR_9);
 FUNC_7(VAR_18->pr_tport, VAR_4, "%s", VAR_12);
 VAR_18->pr_reg_tpgt = VAR_13;






 VAR_18->pr_res_holder = VAR_15;

 FUNC_4(&VAR_18->pr_reg_aptpl_list, &VAR_7->aptpl_reg_list);
 FUNC_5("SPC-3 PR APTPL Successfully added registration%s from"
   " metadata\n", (VAR_15) ? "+reservation" : "");
 return 0;
}
