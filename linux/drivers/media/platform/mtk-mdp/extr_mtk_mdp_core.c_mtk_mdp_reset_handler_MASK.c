
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_mdp_dev {int wdt_work; int wdt_wq; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct mtk_mdp_dev *VAR_1 = VAR_0;

 FUNC_0(VAR_1->wdt_wq, &VAR_1->wdt_work);
}
