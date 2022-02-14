
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mmc_host {int dummy; } ;
struct cb710_slot {int dummy; } ;


 struct cb710_slot* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct mmc_host*) ;
 struct platform_device* FUNC_2 (int ) ;

__attribute__((used)) static inline struct cb710_slot *FUNC_3(struct mmc_host *VAR_0)
{
 struct platform_device *VAR_1 = FUNC_2(FUNC_1(VAR_0));
 return FUNC_0(VAR_1);
}
