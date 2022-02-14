
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ethtool_link_ksettings {int dummy; } ;
struct bnxt_link_info {scalar_t__ support_auto_speeds; int support_speeds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct ethtool_link_ksettings*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct ethtool_link_ksettings*,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct bnxt_link_info *VAR_4,
    struct ethtool_link_ksettings *VAR_5)
{
 u16 VAR_6 = VAR_4->support_speeds;

 FUNC_0(VAR_6, 0, VAR_5, VAR_3);

 FUNC_1(VAR_5, VAR_3, VAR_2);
 FUNC_1(VAR_5, VAR_3,
          VAR_0);

 if (VAR_4->support_auto_speeds)
  FUNC_1(VAR_5, VAR_3,
           VAR_1);
}
