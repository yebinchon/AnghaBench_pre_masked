
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int dummy; } ;
struct ath6kl_sdio {int irq_wq; int irq_handling; int func; int ar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;
 struct ath6kl_sdio* FUNC_5 (struct sdio_func*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct sdio_func *VAR_2)
{
 int VAR_3;
 struct ath6kl_sdio *VAR_4;

 FUNC_1(VAR_0, "irq\n");

 VAR_4 = FUNC_5(VAR_2);
 FUNC_3(&VAR_4->irq_handling, 1);




 FUNC_6(VAR_4->func);

 VAR_3 = FUNC_2(VAR_4->ar);
 FUNC_4(VAR_4->func);

 FUNC_3(&VAR_4->irq_handling, 0);
 FUNC_7(&VAR_4->irq_wq);

 FUNC_0(VAR_3 && VAR_3 != -VAR_1);
}
