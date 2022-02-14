
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ath10k_vif {scalar_t__ beacon_state; TYPE_1__* beacon; int beacon_buf; struct ath10k* ar; } ;
struct ath10k {int dev; int data_lock; } ;
struct TYPE_5__ {int paddr; } ;
struct TYPE_4__ {int len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct ath10k_vif *VAR_3)
{
 struct ath10k *VAR_4 = VAR_3->ar;

 FUNC_4(&VAR_4->data_lock);

 if (!VAR_3->beacon)
  return;

 if (!VAR_3->beacon_buf)
  FUNC_3(VAR_4->dev, FUNC_0(VAR_3->beacon)->paddr,
     VAR_3->beacon->len, VAR_2);

 if (FUNC_1(VAR_3->beacon_state != VAR_0 &&
      VAR_3->beacon_state != VAR_1))
  return;

 FUNC_2(VAR_3->beacon);

 VAR_3->beacon = ((void*)0);
 VAR_3->beacon_state = VAR_0;
}
