
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ blank_nvm_mode; } ;
struct ice_hw {TYPE_1__ nvm; } ;


 int VAR_0 ;
 int FUNC_0 (struct ice_hw*,int ) ;

__attribute__((used)) static void FUNC_1(struct ice_hw *VAR_1)
{
 if (VAR_1->nvm.blank_nvm_mode)
  return;

 FUNC_0(VAR_1, VAR_0);
}
