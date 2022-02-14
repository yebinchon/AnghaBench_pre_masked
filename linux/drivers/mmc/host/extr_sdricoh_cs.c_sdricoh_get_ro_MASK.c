
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdricoh_host {int dummy; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct sdricoh_host* FUNC_0 (struct mmc_host*) ;
 unsigned int FUNC_1 (struct sdricoh_host*,int ) ;
 int FUNC_2 (struct sdricoh_host*,int ,unsigned int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_3(struct mmc_host *VAR_4)
{
 struct sdricoh_host *VAR_5 = FUNC_0(VAR_4);
 unsigned int VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_0);
 FUNC_2(VAR_5, VAR_1, VAR_6);


 if (VAR_3)
  return !(VAR_6 & VAR_2);

 return (VAR_6 & VAR_2);
}
