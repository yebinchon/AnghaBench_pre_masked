
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ath10k_peer {TYPE_1__** keys; } ;
struct ath10k {int data_lock; } ;
struct TYPE_2__ {scalar_t__ keyidx; } ;


 int FUNC_0 (TYPE_1__**) ;
 struct ath10k_peer* FUNC_1 (struct ath10k*,int ,scalar_t__ const*) ;
 int FUNC_2 (int *) ;

bool FUNC_3(struct ath10k *VAR_0, const u8 *VAR_1,
        u8 VAR_2)
{
 struct ath10k_peer *VAR_3;
 int VAR_4;

 FUNC_2(&VAR_0->data_lock);






 VAR_3 = FUNC_1(VAR_0, 0, VAR_1);
 if (!VAR_3)
  return 0;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3->keys); VAR_4++) {
  if (VAR_3->keys[VAR_4] && VAR_3->keys[VAR_4]->keyidx == VAR_2)
   return 1;
 }

 return 0;
}
