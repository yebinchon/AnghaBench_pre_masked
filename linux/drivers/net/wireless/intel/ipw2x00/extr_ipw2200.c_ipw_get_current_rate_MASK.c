
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipw_priv {int status; scalar_t__ tx_packets; } ;
typedef int rate ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ipw_priv*) ;
 int FUNC_2 (struct ipw_priv*,int ,int*,int*) ;

__attribute__((used)) static u32 FUNC_3(struct ipw_priv *VAR_3)
{
 u32 VAR_4, VAR_5 = sizeof(VAR_4);
 int VAR_6;

 if (!(VAR_3->status & VAR_2))
  return 0;

 if (VAR_3->tx_packets > VAR_1) {
  VAR_6 = FUNC_2(VAR_3, VAR_0, &VAR_4,
          &VAR_5);
  if (VAR_6) {
   FUNC_0("failed querying ordinals.\n");
   return 0;
  }
 } else
  return FUNC_1(VAR_3);

 switch (VAR_4) {
 case 136:
  return 1000000;
 case 134:
  return 2000000;
 case 130:
  return 5500000;
 case 129:
  return 6000000;
 case 128:
  return 9000000;
 case 139:
  return 11000000;
 case 138:
  return 12000000;
 case 137:
  return 18000000;
 case 135:
  return 24000000;
 case 133:
  return 36000000;
 case 132:
  return 48000000;
 case 131:
  return 54000000;
 }

 return 0;
}
