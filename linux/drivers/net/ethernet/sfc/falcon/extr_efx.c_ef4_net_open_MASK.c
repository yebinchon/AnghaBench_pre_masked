
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ef4_nic {int phy_mode; int net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ef4_nic*) ;
 int FUNC_1 (struct ef4_nic*) ;
 int FUNC_2 (struct ef4_nic*) ;
 int FUNC_3 (struct ef4_nic*) ;
 int VAR_2 ;
 struct ef4_nic* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct ef4_nic*,int ,int ,char*,int ) ;
 int FUNC_6 () ;

int FUNC_7(struct net_device *VAR_3)
{
 struct ef4_nic *VAR_4 = FUNC_4(VAR_3);
 int VAR_5;

 FUNC_5(VAR_4, VAR_2, VAR_4->net_dev, "opening device on CPU %d\n",
    FUNC_6());

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5)
  return VAR_5;
 if (VAR_4->phy_mode & VAR_1)
  return -VAR_0;



 FUNC_1(VAR_4);

 FUNC_3(VAR_4);
 FUNC_2(VAR_4);
 return 0;
}
