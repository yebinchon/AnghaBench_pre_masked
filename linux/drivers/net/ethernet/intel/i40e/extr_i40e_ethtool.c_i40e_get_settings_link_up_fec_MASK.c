
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ethtool_link_ksettings {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ethtool_link_ksettings*,int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_1(u8 VAR_8,
       struct ethtool_link_ksettings *VAR_9)
{
 FUNC_0(VAR_9, VAR_7, VAR_1);
 FUNC_0(VAR_9, VAR_7, VAR_2);
 FUNC_0(VAR_9, VAR_7, VAR_0);

 if (VAR_5 & VAR_8) {
  FUNC_0(VAR_9, VAR_6, VAR_2);
 } else if (VAR_4 & VAR_8) {
  FUNC_0(VAR_9, VAR_6,
           VAR_0);
 } else {
  FUNC_0(VAR_9, VAR_6,
           VAR_1);
  if (VAR_3 & VAR_8) {
   FUNC_0(VAR_9, VAR_6,
            VAR_2);
   FUNC_0(VAR_9, VAR_6,
            VAR_0);
  }
 }
}
