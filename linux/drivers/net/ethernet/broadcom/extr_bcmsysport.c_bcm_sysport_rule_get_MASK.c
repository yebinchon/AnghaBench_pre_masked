
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ring_cookie; int location; } ;
struct ethtool_rxnfc {TYPE_1__ fs; } ;
struct bcm_sysport_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcm_sysport_priv*,int ) ;

__attribute__((used)) static int FUNC_1(struct bcm_sysport_priv *VAR_2,
    struct ethtool_rxnfc *VAR_3)
{
 int VAR_4;


 VAR_4 = FUNC_0(VAR_2, VAR_3->fs.location);
 if (VAR_4 < 0)
  return -VAR_0;

 VAR_3->fs.ring_cookie = VAR_1;

 return 0;
}
