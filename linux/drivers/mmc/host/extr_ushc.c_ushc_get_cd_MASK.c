
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ushc_data {int last_status; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 struct ushc_data* FUNC_0 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_1(struct mmc_host *VAR_1)
{
 struct ushc_data *VAR_2 = FUNC_0(VAR_1);

 return !!(VAR_2->last_status & VAR_0);
}
