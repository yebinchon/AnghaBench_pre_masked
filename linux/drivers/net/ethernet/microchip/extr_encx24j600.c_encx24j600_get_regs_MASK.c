
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef unsigned int u16 ;
struct net_device {int dummy; } ;
struct ethtool_regs {int version; } ;
struct TYPE_2__ {int regmap; } ;
struct encx24j600_priv {int lock; TYPE_1__ ctx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct encx24j600_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,scalar_t__,unsigned int*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1,
    struct ethtool_regs *VAR_2, void *VAR_3)
{
 struct encx24j600_priv *VAR_4 = FUNC_2(VAR_1);
 u16 *VAR_5 = VAR_3;
 u8 VAR_6;

 VAR_2->version = 1;
 FUNC_0(&VAR_4->lock);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6 += 2) {
  unsigned int VAR_7 = 0;

  FUNC_3(VAR_4->ctx.regmap, VAR_6, &VAR_7);
  VAR_5[VAR_6] = VAR_7 & 0xffff;
 }
 FUNC_1(&VAR_4->lock);
}
