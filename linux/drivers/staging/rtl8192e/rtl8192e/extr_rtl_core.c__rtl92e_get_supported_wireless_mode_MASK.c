
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r8192_priv {int rf_chip; } ;
struct net_device {int dummy; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u8 FUNC_1(struct net_device *VAR_5)
{
 struct r8192_priv *VAR_6 = FUNC_0(VAR_5);
 u8 VAR_7 = 0;

 switch (VAR_6->rf_chip) {
 case 131:
 case 130:
 case 132:
 case 128:
  VAR_7 = (VAR_3 | VAR_2 | VAR_1);
  break;
 case 129:
  VAR_7 = (VAR_0 | VAR_4);
  break;
 default:
  VAR_7 = VAR_1;
  break;
 }
 return VAR_7;
}
