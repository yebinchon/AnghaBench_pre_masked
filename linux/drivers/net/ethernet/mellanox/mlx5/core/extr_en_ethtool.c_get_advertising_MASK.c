
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {unsigned long* advertising; } ;
struct ethtool_link_ksettings {TYPE_1__ link_modes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ethtool_link_ksettings*,unsigned long*,int ) ;
 int FUNC_1 (unsigned long*,int ,int) ;

__attribute__((used)) static void FUNC_2(u32 VAR_2, u8 VAR_3, u8 VAR_4,
       struct ethtool_link_ksettings *VAR_5,
       bool VAR_6)
{
 unsigned long *VAR_7 = VAR_5->link_modes.advertising;
 FUNC_1(VAR_7, VAR_2, VAR_6);

 if (VAR_4)
  FUNC_0(VAR_5, VAR_7, VAR_1);
 if (VAR_3 ^ VAR_4)
  FUNC_0(VAR_5, VAR_7, VAR_0);
}
