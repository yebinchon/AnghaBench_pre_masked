
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k {scalar_t__ state; int htt; int conf_mutex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ath10k*,int ) ;
 int FUNC_5 (struct ath10k*) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct ath10k *VAR_3)
{
 FUNC_6(&VAR_3->conf_mutex);
 FUNC_0(VAR_3);


 if (VAR_3->state != VAR_0 &&
     VAR_3->state != VAR_1)
  FUNC_4(VAR_3, VAR_2);

 FUNC_1(VAR_3);
 FUNC_3(&VAR_3->htt);
 FUNC_2(&VAR_3->htt);
 FUNC_5(VAR_3);
}
