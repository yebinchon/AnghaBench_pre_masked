
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ushc_data {int flags; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct ushc_data* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct mmc_host *VAR_1, int VAR_2)
{
 struct ushc_data *VAR_3 = FUNC_1(VAR_1);

 if (VAR_2)
  FUNC_2(VAR_0, &VAR_3->flags);
 else
  FUNC_0(VAR_0, &VAR_3->flags);
}
