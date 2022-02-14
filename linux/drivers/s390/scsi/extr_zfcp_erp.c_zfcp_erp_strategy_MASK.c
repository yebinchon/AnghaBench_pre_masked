
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_erp_action {int status; struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int ref; int erp_lock; int erp_low_mem_count; int erp_total_count; } ;
typedef enum zfcp_erp_act_result { ____Placeholder_zfcp_erp_act_result } zfcp_erp_act_result ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct zfcp_adapter*,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_3 ;
 int FUNC_5 (struct zfcp_erp_action*,int) ;
 int FUNC_6 (struct zfcp_erp_action*) ;
 int FUNC_7 (struct zfcp_erp_action*) ;
 int FUNC_8 (struct zfcp_erp_action*) ;
 int FUNC_9 (struct zfcp_erp_action*,int) ;
 int FUNC_10 (struct zfcp_erp_action*) ;
 int FUNC_11 (struct zfcp_erp_action*) ;
 int FUNC_12 (struct zfcp_erp_action*) ;
 int FUNC_13 (struct zfcp_erp_action*) ;
 int FUNC_14 (struct zfcp_erp_action*,int) ;

__attribute__((used)) static enum zfcp_erp_act_result FUNC_15(
 struct zfcp_erp_action *VAR_4)
{
 enum zfcp_erp_act_result VAR_5;
 unsigned long VAR_6;
 struct zfcp_adapter *VAR_7 = VAR_4->adapter;

 FUNC_1(&VAR_7->ref);

 FUNC_3(&VAR_7->erp_lock, VAR_6);
 FUNC_8(VAR_4);

 if (VAR_4->status & VAR_0) {
  FUNC_6(VAR_4);
  VAR_5 = 132;
  goto unlock;
 }

 if (VAR_4->status & VAR_2) {
  VAR_5 = 130;
  goto check_target;
 }

 FUNC_7(VAR_4);


 FUNC_4(&VAR_7->erp_lock, VAR_6);
 VAR_5 = FUNC_10(VAR_4);
 FUNC_3(&VAR_7->erp_lock, VAR_6);

 if (VAR_4->status & VAR_0)
  VAR_5 = 133;

 switch (VAR_5) {
 case 129:
  if (!(VAR_4->status & VAR_1)) {
   ++VAR_7->erp_low_mem_count;
   VAR_4->status |= VAR_1;
  }
  if (VAR_7->erp_total_count == VAR_7->erp_low_mem_count)
   FUNC_0(VAR_7, 0, "erstgy1");
  else {
   FUNC_13(VAR_4);
   VAR_5 = 133;
  }
  goto unlock;

 case 133:
  if (VAR_4->status & VAR_1) {
   --VAR_7->erp_low_mem_count;
   VAR_4->status &= ~VAR_1;
  }
  goto unlock;
 case 128:
 case 130:
 case 131:
 case 132:

  break;
 }

check_target:
 VAR_5 = FUNC_9(VAR_4, VAR_5);
 FUNC_6(VAR_4);
 VAR_5 = FUNC_14(VAR_4, VAR_5);
 if (VAR_5 == 131)
  goto unlock;
 if (VAR_5 == 128)
  FUNC_12(VAR_4);
 if (VAR_5 == 130)
  FUNC_11(VAR_4);

 unlock:
 FUNC_4(&VAR_7->erp_lock, VAR_6);

 if (VAR_5 != 133)
  FUNC_5(VAR_4, VAR_5);

 FUNC_2(&VAR_7->ref, VAR_3);
 return VAR_5;
}
