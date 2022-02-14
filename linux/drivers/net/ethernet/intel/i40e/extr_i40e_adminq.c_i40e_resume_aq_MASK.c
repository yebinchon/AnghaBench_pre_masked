
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ next_to_clean; scalar_t__ next_to_use; } ;
struct TYPE_4__ {scalar_t__ next_to_clean; scalar_t__ next_to_use; } ;
struct TYPE_6__ {TYPE_2__ arq; TYPE_1__ asq; } ;
struct i40e_hw {TYPE_3__ aq; } ;


 int FUNC_0 (struct i40e_hw*) ;
 int FUNC_1 (struct i40e_hw*) ;

__attribute__((used)) static void FUNC_2(struct i40e_hw *VAR_0)
{

 VAR_0->aq.asq.next_to_use = 0;
 VAR_0->aq.asq.next_to_clean = 0;

 FUNC_1(VAR_0);

 VAR_0->aq.arq.next_to_use = 0;
 VAR_0->aq.arq.next_to_clean = 0;

 FUNC_0(VAR_0);
}
