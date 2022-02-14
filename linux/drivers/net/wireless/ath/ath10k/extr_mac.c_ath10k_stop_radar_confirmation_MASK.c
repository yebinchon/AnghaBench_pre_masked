
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k {int radar_confirmation_work; int data_lock; int radar_conf_state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ath10k *VAR_1)
{
 FUNC_1(&VAR_1->data_lock);
 VAR_1->radar_conf_state = VAR_0;
 FUNC_2(&VAR_1->data_lock);

 FUNC_0(&VAR_1->radar_confirmation_work);
}
