
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_ahb {int irq; } ;
struct ath10k {int napi; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*) ;
 struct ath10k_ahb* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,int ,char*) ;
 int FUNC_3 (struct ath10k*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct ath10k *VAR_1)
{
 struct ath10k_ahb *VAR_2 = FUNC_1(VAR_1);

 FUNC_2(VAR_1, VAR_0, "boot ahb hif stop\n");

 FUNC_0(VAR_1);
 FUNC_6(VAR_2->irq);

 FUNC_5(&VAR_1->napi);
 FUNC_4(&VAR_1->napi);

 FUNC_3(VAR_1);
}
