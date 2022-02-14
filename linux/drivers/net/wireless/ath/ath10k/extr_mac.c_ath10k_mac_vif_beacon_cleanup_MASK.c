
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_vif {int * beacon_buf; int beacon_paddr; struct ath10k* ar; } ;
struct ath10k {int dev; int data_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k_vif*) ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ath10k_vif *VAR_1)
{
 struct ath10k *VAR_2 = VAR_1->ar;

 FUNC_2(&VAR_2->data_lock);

 FUNC_0(VAR_1);

 if (VAR_1->beacon_buf) {
  FUNC_1(VAR_2->dev, VAR_0,
      VAR_1->beacon_buf, VAR_1->beacon_paddr);
  VAR_1->beacon_buf = ((void*)0);
 }
}
