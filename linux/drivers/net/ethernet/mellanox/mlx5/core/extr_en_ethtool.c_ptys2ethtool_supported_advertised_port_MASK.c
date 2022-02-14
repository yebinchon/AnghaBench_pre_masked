
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ethtool_link_ksettings {int dummy; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (struct ethtool_link_ksettings*,int ,int ) ;
 int VAR_19 ;

__attribute__((used)) static void FUNC_2(struct ethtool_link_ksettings *VAR_20,
         u32 VAR_21,
         u8 VAR_22)
{
 if (!VAR_22 || VAR_22 >= VAR_16) {
  if (VAR_21 & (FUNC_0(VAR_9)
       | FUNC_0(VAR_12)
       | FUNC_0(VAR_13)
       | FUNC_0(VAR_15)
       | FUNC_0(VAR_8)
       | FUNC_0(VAR_5))) {
   FUNC_1(VAR_20,
            VAR_19,
            VAR_3);
   FUNC_1(VAR_20,
            VAR_18,
            VAR_3);
  }

  if (VAR_21 & (FUNC_0(VAR_7)
       | FUNC_0(VAR_14)
       | FUNC_0(VAR_10)
       | FUNC_0(VAR_11)
       | FUNC_0(VAR_6))) {
   FUNC_1(VAR_20,
            VAR_19,
            VAR_2);
   FUNC_1(VAR_20,
            VAR_18,
            VAR_2);
  }
  return;
 }

 switch (VAR_22) {
 case 128:
  FUNC_1(VAR_20,
           VAR_19, VAR_17);
  FUNC_1(VAR_20,
           VAR_18, VAR_17);
  break;
 case 135:
  FUNC_1(VAR_20,
           VAR_19, VAR_0);
  FUNC_1(VAR_20,
           VAR_18, VAR_0);
  break;
 case 134:
  FUNC_1(VAR_20,
           VAR_19, VAR_1);
  FUNC_1(VAR_20,
           VAR_18, VAR_1);
  break;
 case 131:
  FUNC_1(VAR_20,
           VAR_19, VAR_4);
  FUNC_1(VAR_20,
           VAR_18, VAR_4);
  break;
 case 132:
  FUNC_1(VAR_20,
           VAR_19, VAR_3);
  FUNC_1(VAR_20,
           VAR_18, VAR_3);
  break;
 case 133:
  FUNC_1(VAR_20,
           VAR_19, VAR_2);
  FUNC_1(VAR_20,
           VAR_18, VAR_2);
  break;
 case 130:
 case 129:
 default:
  break;
 }
}
