
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k {int napi; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct ath10k *VAR_4 = VAR_3;

 if (!FUNC_2(VAR_4))
  return VAR_1;

 FUNC_0(VAR_4);
 FUNC_1(VAR_4);
 FUNC_3(&VAR_4->napi);

 return VAR_0;
}
