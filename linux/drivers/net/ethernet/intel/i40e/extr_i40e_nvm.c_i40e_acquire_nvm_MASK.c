
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {int asq_last_status; } ;
struct TYPE_3__ {scalar_t__ hw_semaphore_timeout; scalar_t__ blank_nvm_mode; } ;
struct i40e_hw {TYPE_2__ aq; TYPE_1__ nvm; } ;
typedef scalar_t__ i40e_status ;
typedef enum i40e_aq_resource_access_type { ____Placeholder_i40e_aq_resource_access_type } i40e_aq_resource_access_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct i40e_hw*,int ,int,int ,scalar_t__*,int *) ;
 int FUNC_2 (struct i40e_hw*,int ,char*,scalar_t__,scalar_t__,int ,...) ;
 scalar_t__ FUNC_3 (struct i40e_hw*,int ) ;
 int FUNC_4 (int,int) ;

i40e_status FUNC_5(struct i40e_hw *VAR_4,
           enum i40e_aq_resource_access_type VAR_5)
{
 i40e_status VAR_6 = 0;
 u64 VAR_7, VAR_8;
 u64 VAR_9 = 0;

 if (VAR_4->nvm.blank_nvm_mode)
  goto i40e_i40e_acquire_nvm_exit;

 VAR_6 = FUNC_1(VAR_4, VAR_3, VAR_5,
         0, &VAR_9, ((void*)0));

 VAR_7 = FUNC_3(VAR_4, VAR_1);


 VAR_4->nvm.hw_semaphore_timeout = FUNC_0(VAR_9) + VAR_7;

 if (VAR_6)
  FUNC_2(VAR_4, VAR_0,
      "NVM acquire type %d failed time_left=%llu ret=%d aq_err=%d\n",
      VAR_5, VAR_9, VAR_6, VAR_4->aq.asq_last_status);

 if (VAR_6 && VAR_9) {

  VAR_8 = FUNC_0(VAR_2) + VAR_7;
  while ((VAR_7 < VAR_8) && VAR_9) {
   FUNC_4(10000, 20000);
   VAR_7 = FUNC_3(VAR_4, VAR_1);
   VAR_6 = FUNC_1(VAR_4,
       VAR_3,
       VAR_5, 0, &VAR_9,
       ((void*)0));
   if (!VAR_6) {
    VAR_4->nvm.hw_semaphore_timeout =
         FUNC_0(VAR_9) + VAR_7;
    break;
   }
  }
  if (VAR_6) {
   VAR_4->nvm.hw_semaphore_timeout = 0;
   FUNC_2(VAR_4, VAR_0,
       "NVM acquire timed out, wait %llu ms before trying again. status=%d aq_err=%d\n",
       VAR_9, VAR_6, VAR_4->aq.asq_last_status);
  }
 }

i40e_i40e_acquire_nvm_exit:
 return VAR_6;
}
