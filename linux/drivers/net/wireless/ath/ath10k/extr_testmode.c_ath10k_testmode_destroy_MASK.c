
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k {scalar_t__ state; int conf_mutex; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ath10k*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ath10k *VAR_1)
{
 FUNC_1(&VAR_1->conf_mutex);

 if (VAR_1->state != VAR_0) {

  goto out;
 }

 FUNC_0(VAR_1);

out:
 FUNC_2(&VAR_1->conf_mutex);
}
