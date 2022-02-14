
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ asq_cmd_timeout; } ;
struct TYPE_3__ {scalar_t__ blank_nvm_mode; } ;
struct i40e_hw {TYPE_2__ aq; TYPE_1__ nvm; } ;
typedef scalar_t__ i40e_status ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct i40e_hw*,int ,int ,int *) ;
 int FUNC_1 (int,int) ;

void FUNC_2(struct i40e_hw *VAR_3)
{
 i40e_status VAR_4 = VAR_2;
 u32 VAR_5 = 0;

 if (VAR_3->nvm.blank_nvm_mode)
  return;

 VAR_4 = FUNC_0(VAR_3, VAR_1, 0, ((void*)0));




 while ((VAR_4 == VAR_0) &&
        (VAR_5 < VAR_3->aq.asq_cmd_timeout)) {
  FUNC_1(1000, 2000);
  VAR_4 = FUNC_0(VAR_3,
          VAR_1,
          0, ((void*)0));
  VAR_5++;
 }
}
