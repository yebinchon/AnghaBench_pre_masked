
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msdc_host {int dev; int lock; } ;
struct mmc_host {int dummy; } ;


 int FUNC_0 (struct msdc_host*,int) ;
 struct msdc_host* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct mmc_host *VAR_0, int VAR_1)
{
 unsigned long VAR_2;
 struct msdc_host *VAR_3 = FUNC_1(VAR_0);

 FUNC_4(&VAR_3->lock, VAR_2);
 FUNC_0(VAR_3, VAR_1);
 FUNC_5(&VAR_3->lock, VAR_2);

 if (VAR_1)
  FUNC_2(VAR_3->dev);
 else
  FUNC_3(VAR_3->dev);
}
