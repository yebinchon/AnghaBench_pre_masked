
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int dummy; } ;
struct cb710_slot {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cb710_slot* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct cb710_slot*,int ) ;

__attribute__((used)) static int FUNC_2(struct mmc_host *VAR_2)
{
 struct cb710_slot *VAR_3 = FUNC_0(VAR_2);

 return FUNC_1(VAR_3, VAR_1)
  & VAR_0;
}
