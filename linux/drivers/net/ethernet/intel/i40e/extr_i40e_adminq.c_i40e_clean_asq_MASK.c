
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct i40e_adminq_ring {scalar_t__ next_to_clean; scalar_t__ count; int head; } ;
struct TYPE_2__ {struct i40e_adminq_ring asq; } ;
struct i40e_hw {TYPE_1__ aq; } ;
struct i40e_asq_cmd_details {scalar_t__ callback; } ;
struct i40e_aq_desc {scalar_t__ callback; } ;
typedef int (* I40E_ADMINQ_CALLBACK ) (struct i40e_hw*,struct i40e_asq_cmd_details*) ;


 struct i40e_asq_cmd_details* FUNC_0 (struct i40e_adminq_ring,scalar_t__) ;
 struct i40e_asq_cmd_details* FUNC_1 (struct i40e_adminq_ring,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct i40e_adminq_ring*) ;
 int FUNC_3 (struct i40e_hw*,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct i40e_asq_cmd_details*,int ,int) ;
 scalar_t__ FUNC_5 (struct i40e_hw*,int ) ;

__attribute__((used)) static u16 FUNC_6(struct i40e_hw *VAR_1)
{
 struct i40e_adminq_ring *VAR_2 = &(VAR_1->aq.asq);
 struct i40e_asq_cmd_details *VAR_3;
 u16 VAR_4 = VAR_2->next_to_clean;
 struct i40e_aq_desc VAR_5;
 struct i40e_aq_desc *VAR_6;

 VAR_6 = FUNC_0(*VAR_2, VAR_4);
 VAR_3 = FUNC_1(*VAR_2, VAR_4);
 while (FUNC_5(VAR_1, VAR_1->aq.asq.head) != VAR_4) {
  FUNC_3(VAR_1, VAR_0,
      "ntc %d head %d.\n", VAR_4, FUNC_5(VAR_1, VAR_1->aq.asq.head));

  if (VAR_3->callback) {
   I40E_ADMINQ_CALLBACK VAR_7 =
     (I40E_ADMINQ_CALLBACK)VAR_3->callback;
   VAR_5 = *VAR_6;
   VAR_7(VAR_1, &VAR_5);
  }
  FUNC_4(VAR_6, 0, sizeof(*VAR_6));
  FUNC_4(VAR_3, 0, sizeof(*VAR_3));
  VAR_4++;
  if (VAR_4 == VAR_2->count)
   VAR_4 = 0;
  VAR_6 = FUNC_0(*VAR_2, VAR_4);
  VAR_3 = FUNC_1(*VAR_2, VAR_4);
 }

 VAR_2->next_to_clean = VAR_4;

 return FUNC_2(VAR_2);
}
