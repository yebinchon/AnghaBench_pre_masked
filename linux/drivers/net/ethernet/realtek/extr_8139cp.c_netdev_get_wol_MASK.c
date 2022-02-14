
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ethtool_wolinfo {int wolopts; int supported; } ;
struct cp_private {int wol_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1 (struct cp_private *VAR_12,
              struct ethtool_wolinfo *VAR_13)
{
 u8 VAR_14;

 VAR_13->wolopts = 0;
 VAR_13->supported = VAR_10 | VAR_7 | VAR_8 |
           VAR_9 | VAR_11;

 if (!VAR_12->wol_enabled) return;

 VAR_14 = FUNC_0 (VAR_1);
 if (VAR_14 & VAR_3) VAR_13->wolopts |= VAR_10;
 if (VAR_14 & VAR_5) VAR_13->wolopts |= VAR_8;

 VAR_14 = 0;
 VAR_14 = FUNC_0 (VAR_2);
 if (VAR_14 & VAR_6) VAR_13->wolopts |= VAR_11;
 if (VAR_14 & VAR_0) VAR_13->wolopts |= VAR_7;
 if (VAR_14 & VAR_4) VAR_13->wolopts |= VAR_9;
}
