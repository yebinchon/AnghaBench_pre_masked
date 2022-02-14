
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_regs {scalar_t__ version; } ;
struct ethoc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ethoc*,unsigned int) ;
 struct ethoc* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1, struct ethtool_regs *VAR_2,
      void *VAR_3)
{
 struct ethoc *VAR_4 = FUNC_1(VAR_1);
 u32 *VAR_5 = VAR_3;
 unsigned VAR_6;

 VAR_2->version = 0;
 for (VAR_6 = 0; VAR_6 < VAR_0 / sizeof(u32); ++VAR_6)
  VAR_5[VAR_6] = FUNC_0(VAR_4, VAR_6 * sizeof(u32));
}
