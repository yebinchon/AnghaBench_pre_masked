
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct myri10ge_priv {char* product_code_string; } ;
struct TYPE_2__ {int port; int duplex; int speed; int autoneg; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ethtool_link_ksettings*,int ,int ) ;
 int FUNC_1 (struct net_device*,char*,...) ;
 struct myri10ge_priv* FUNC_2 (struct net_device*) ;
 char* FUNC_3 (char*,char) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_8,
       struct ethtool_link_ksettings *VAR_9)
{
 struct myri10ge_priv *VAR_10 = FUNC_2(VAR_8);
 char *VAR_11;
 int VAR_12;

 VAR_9->base.autoneg = VAR_0;
 VAR_9->base.speed = VAR_5;
 VAR_9->base.duplex = VAR_1;







 VAR_11 = VAR_10->product_code_string;
 if (VAR_11 == ((void*)0)) {
  FUNC_1(VAR_8, "Missing product code\n");
  return 0;
 }
 for (VAR_12 = 0; VAR_12 < 3; VAR_12++, VAR_11++) {
  VAR_11 = FUNC_3(VAR_11, '-');
  if (VAR_11 == ((void*)0)) {
   FUNC_1(VAR_8, "Invalid product code %s\n",
       VAR_10->product_code_string);
   return 0;
  }
 }
 if (*VAR_11 == '2')
  VAR_11++;
 if (*VAR_11 == 'R' || *VAR_11 == 'Q' || *VAR_11 == 'S') {

  VAR_9->base.port = VAR_3;
  FUNC_0(VAR_9, VAR_7, VAR_2);
  FUNC_0(VAR_9, VAR_6, VAR_2);
 } else {
  VAR_9->base.port = VAR_4;
 }

 return 0;
}
