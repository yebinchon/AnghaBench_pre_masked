
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int index; } ;
struct device {int dummy; } ;


 struct mmc_host* FUNC_0 (struct device*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct mmc_host*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct device *VAR_1)
{
 struct mmc_host *VAR_2 = FUNC_0(VAR_1);
 FUNC_1(&VAR_0, VAR_2->index);
 FUNC_2(VAR_2);
}
