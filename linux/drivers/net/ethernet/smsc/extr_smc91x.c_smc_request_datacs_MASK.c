
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_local {int datacs; } ;
struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct net_device*,char*,int ) ;
 struct smc_local* FUNC_2 (struct net_device*) ;
 struct resource* FUNC_3 (struct platform_device*,int ,char*) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_5(struct platform_device *VAR_4, struct net_device *VAR_5)
{
 if (VAR_2) {
  struct resource * VAR_6 = FUNC_3(VAR_4, VAR_1, "smc91x-data32");
  struct smc_local *VAR_7 = FUNC_2(VAR_5);

  if (!VAR_6)
   return;

  if(!FUNC_4(VAR_6->start, VAR_3, VAR_0)) {
   FUNC_1(VAR_5, "%s: failed to request datacs memory region.\n",
        VAR_0);
   return;
  }

  VAR_7->datacs = FUNC_0(VAR_6->start, VAR_3);
 }
}
