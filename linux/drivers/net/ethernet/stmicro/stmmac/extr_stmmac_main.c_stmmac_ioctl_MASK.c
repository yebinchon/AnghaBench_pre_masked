
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_priv {int phylink; } ;
struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;





 struct stmmac_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,struct ifreq*,int) ;
 int FUNC_3 (struct net_device*,struct ifreq*) ;
 int FUNC_4 (struct net_device*,struct ifreq*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2, struct ifreq *VAR_3, int VAR_4)
{
 struct stmmac_priv *VAR_5 = FUNC_0 (VAR_2);
 int VAR_6 = -VAR_1;

 if (!FUNC_1(VAR_2))
  return -VAR_0;

 switch (VAR_4) {
 case 131:
 case 130:
 case 128:
  VAR_6 = FUNC_2(VAR_5->phylink, VAR_3, VAR_4);
  break;
 case 129:
  VAR_6 = FUNC_4(VAR_2, VAR_3);
  break;
 case 132:
  VAR_6 = FUNC_3(VAR_2, VAR_3);
  break;
 default:
  break;
 }

 return VAR_6;
}
