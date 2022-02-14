
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int caps; int parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct mmc_host *VAR_1)
{

 FUNC_0(VAR_1->parent);

 VAR_1->caps |= VAR_0;
}
