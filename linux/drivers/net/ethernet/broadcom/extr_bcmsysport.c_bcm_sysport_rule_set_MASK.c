
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int location; scalar_t__ ring_cookie; } ;
struct ethtool_rxnfc {TYPE_1__ fs; } ;
struct bcm_sysport_priv {int* filters_loc; int filters; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (unsigned int) ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int FUNC_2 (int ,unsigned int) ;
 unsigned int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (struct bcm_sysport_priv*,int ) ;
 int FUNC_5 (struct bcm_sysport_priv*,int,int ) ;
 int FUNC_6 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_7(struct bcm_sysport_priv *VAR_7,
    struct ethtool_rxnfc *VAR_8)
{
 unsigned int VAR_9;
 u32 VAR_10;




 if (VAR_8->fs.location > VAR_3)
  return -VAR_0;


 if (VAR_8->fs.ring_cookie != VAR_6)
  return -VAR_2;


 if (FUNC_2(VAR_7->filters, VAR_5) ==
     VAR_5)
  return -VAR_1;

 VAR_9 = FUNC_3(VAR_7->filters, VAR_5);
 if (VAR_9 > VAR_5)
  return -VAR_1;




 VAR_10 = FUNC_4(VAR_7, FUNC_0(VAR_9));
 VAR_10 &= ~(VAR_3 << VAR_4);
 VAR_10 |= VAR_8->fs.location << VAR_4;
 FUNC_5(VAR_7, VAR_10, FUNC_0(VAR_9));
 FUNC_5(VAR_7, 0xff00ffff, FUNC_1(VAR_9));

 VAR_7->filters_loc[VAR_9] = VAR_8->fs.location;
 FUNC_6(VAR_9, VAR_7->filters);

 return 0;
}
