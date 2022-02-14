
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; } ;
struct TYPE_4__ {TYPE_1__ asq; } ;
struct i40e_hw {TYPE_2__ aq; } ;


 int VAR_0 ;
 int FUNC_0 (struct i40e_hw*,scalar_t__) ;

bool FUNC_1(struct i40e_hw *VAR_1)
{
 if (VAR_1->aq.asq.len)
  return !!(FUNC_0(VAR_1, VAR_1->aq.asq.len) &
     VAR_0);
 else
  return 0;
}
