
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_local {int * datacs; } ;
struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct smc_local* FUNC_1 (struct net_device*) ;
 struct resource* FUNC_2 (struct platform_device*,int ,char*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct platform_device *VAR_3, struct net_device *VAR_4)
{
 if (VAR_1) {
  struct smc_local *VAR_5 = FUNC_1(VAR_4);
  struct resource * VAR_6 = FUNC_2(VAR_3, VAR_0, "smc91x-data32");

  if (VAR_5->datacs)
   FUNC_0(VAR_5->datacs);

  VAR_5->datacs = ((void*)0);

  if (VAR_6)
   FUNC_3(VAR_6->start, VAR_2);
 }
}
