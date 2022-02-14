
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc911x_data {scalar_t__ last_duplex; int last_carrier; int gpio_orig_setting; int gpio_setting; int using_extphy; int mac_lock; } ;
struct phy_device {scalar_t__ duplex; } ;
struct net_device {struct phy_device* phydev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct smsc911x_data*,int ,char*) ;
 int VAR_7 ;
 struct smsc911x_data* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 unsigned int FUNC_3 (struct smsc911x_data*,int ) ;
 int FUNC_4 (struct smsc911x_data*,int ,unsigned int) ;
 int FUNC_5 (struct smsc911x_data*) ;
 int FUNC_6 (struct smsc911x_data*,int ) ;
 int FUNC_7 (struct smsc911x_data*,int ,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_8)
{
 struct smsc911x_data *VAR_9 = FUNC_1(VAR_8);
 struct phy_device *VAR_10 = VAR_8->phydev;
 unsigned long VAR_11;
 int VAR_12;

 if (VAR_10->duplex != VAR_9->last_duplex) {
  unsigned int VAR_13;
  FUNC_0(VAR_9, VAR_7, "duplex state has changed");

  FUNC_8(&VAR_9->mac_lock, VAR_11);
  VAR_13 = FUNC_3(VAR_9, VAR_5);
  if (VAR_10->duplex) {
   FUNC_0(VAR_9, VAR_7,
       "configuring for full duplex mode");
   VAR_13 |= VAR_6;
  } else {
   FUNC_0(VAR_9, VAR_7,
       "configuring for half duplex mode");
   VAR_13 &= ~VAR_6;
  }
  FUNC_4(VAR_9, VAR_5, VAR_13);
  FUNC_9(&VAR_9->mac_lock, VAR_11);

  FUNC_5(VAR_9);
  VAR_9->last_duplex = VAR_10->duplex;
 }

 VAR_12 = FUNC_2(VAR_8);
 if (VAR_12 != VAR_9->last_carrier) {
  FUNC_0(VAR_9, VAR_7, "carrier state has changed");
  if (VAR_12) {
   FUNC_0(VAR_9, VAR_7, "configuring for carrier OK");
   if ((VAR_9->gpio_orig_setting & VAR_4) &&
       (!VAR_9->using_extphy)) {

    VAR_9->gpio_setting = VAR_9->gpio_orig_setting;
    FUNC_7(VAR_9, VAR_0,
     VAR_9->gpio_setting);
   }
  } else {
   FUNC_0(VAR_9, VAR_7, "configuring for no carrier");


   VAR_9->gpio_setting = FUNC_6(VAR_9,
    VAR_0);
   if ((VAR_9->gpio_setting & VAR_4) &&
       (!VAR_9->using_extphy)) {


    VAR_9->gpio_orig_setting = VAR_9->gpio_setting;

    VAR_9->gpio_setting &= ~VAR_4;
    VAR_9->gpio_setting |= (VAR_1
       | VAR_3
       | VAR_2);
    FUNC_7(VAR_9, VAR_0,
     VAR_9->gpio_setting);
   }
  }
  VAR_9->last_carrier = VAR_12;
 }
}
