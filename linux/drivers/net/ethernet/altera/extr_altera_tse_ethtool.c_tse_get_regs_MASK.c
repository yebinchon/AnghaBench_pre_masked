
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_regs {int version; } ;
struct altera_tse_private {int mac_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 struct altera_tse_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1, struct ethtool_regs *VAR_2,
    void *VAR_3)
{
 int VAR_4;
 struct altera_tse_private *VAR_5 = FUNC_1(VAR_1);
 u32 *VAR_6 = VAR_3;
 VAR_2->version = 1;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_6[VAR_4] = FUNC_0(VAR_5->mac_dev, VAR_4 * 4);
}
