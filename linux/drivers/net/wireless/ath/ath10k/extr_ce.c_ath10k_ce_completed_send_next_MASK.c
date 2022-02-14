
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_ce_pipe {struct ath10k* ar; } ;
struct ath10k_ce {int ce_lock; } ;
struct ath10k {int dummy; } ;


 int FUNC_0 (struct ath10k_ce_pipe*,void**) ;
 struct ath10k_ce* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ath10k_ce_pipe *VAR_0,
      void **VAR_1)
{
 struct ath10k *VAR_2 = VAR_0->ar;
 struct ath10k_ce *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 FUNC_2(&VAR_3->ce_lock);
 VAR_4 = FUNC_0(VAR_0,
         VAR_1);
 FUNC_3(&VAR_3->ce_lock);

 return VAR_4;
}
