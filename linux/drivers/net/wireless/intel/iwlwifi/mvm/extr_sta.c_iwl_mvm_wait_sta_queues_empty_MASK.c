
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct iwl_mvm_sta {int lock; TYPE_1__* tid_data; } ;
struct iwl_mvm {int trans; } ;
struct TYPE_2__ {scalar_t__ txq_id; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct iwl_mvm *VAR_1,
      struct iwl_mvm_sta *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->tid_data); VAR_3++) {
  u16 VAR_4;
  int VAR_5;

  FUNC_2(&VAR_2->lock);
  VAR_4 = VAR_2->tid_data[VAR_3].txq_id;
  FUNC_3(&VAR_2->lock);

  if (VAR_4 == VAR_0)
   continue;

  VAR_5 = FUNC_1(VAR_1->trans, VAR_4);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
