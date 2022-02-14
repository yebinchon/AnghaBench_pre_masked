
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct lbs_private {struct net_device* dev; } ;


 int FUNC_0 (struct lbs_private*) ;
 int FUNC_1 (struct lbs_private*,struct net_device*) ;
 int VAR_0 ;
 int FUNC_2 (struct lbs_private*) ;
 scalar_t__ FUNC_3 (struct lbs_private*) ;
 int FUNC_4 (struct lbs_private*) ;
 int FUNC_5 (struct lbs_private*) ;
 int FUNC_6 (struct net_device*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int ) ;

int FUNC_9(struct lbs_private *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->dev;
 int VAR_3;


 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3)
  goto done;

 if (!VAR_0)
  FUNC_2(VAR_1);
 else
  FUNC_8("%s: mesh disabled\n", VAR_2->name);

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3) {
  FUNC_7("cannot register device\n");
  goto done;
 }

 if (FUNC_3(VAR_1))
  FUNC_5(VAR_1);

 FUNC_1(VAR_1, VAR_2);

 FUNC_6(VAR_2, "Marvell WLAN 802.11 adapter\n");

 VAR_3 = 0;

done:
 return VAR_3;
}
