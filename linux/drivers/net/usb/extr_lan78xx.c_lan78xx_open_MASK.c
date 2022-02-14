
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct lan78xx_net {int link_on; int intf; int flags; int net; scalar_t__ urb_intr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lan78xx_net*,int ) ;
 int FUNC_1 (struct lan78xx_net*) ;
 struct lan78xx_net* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct lan78xx_net*,int ,int ,char*) ;
 int FUNC_4 (struct lan78xx_net*,int ,int ,char*,int) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_4)
{
 struct lan78xx_net *VAR_5 = FUNC_2(VAR_4);
 int VAR_6;

 VAR_6 = FUNC_8(VAR_5->intf);
 if (VAR_6 < 0)
  goto out;

 FUNC_6(VAR_4->phydev);

 FUNC_3(VAR_5, VAR_3, VAR_5->net, "phy initialised successfully");


 if (VAR_5->urb_intr) {
  VAR_6 = FUNC_10(VAR_5->urb_intr, VAR_2);
  if (VAR_6 < 0) {
   FUNC_4(VAR_5, VAR_3, VAR_5->net,
      "intr submit %d\n", VAR_6);
   goto done;
  }
 }

 FUNC_1(VAR_5);

 FUNC_7(VAR_0, &VAR_5->flags);

 FUNC_5(VAR_4);

 VAR_5->link_on = 0;

 FUNC_0(VAR_5, VAR_1);
done:
 FUNC_9(VAR_5->intf);

out:
 return VAR_6;
}
