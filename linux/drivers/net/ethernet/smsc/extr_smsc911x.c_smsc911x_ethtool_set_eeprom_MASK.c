
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smsc911x_data {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int len; int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct smsc911x_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct smsc911x_data*) ;
 int FUNC_2 (struct smsc911x_data*,int ) ;
 int FUNC_3 (struct smsc911x_data*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
           struct ethtool_eeprom *VAR_3, u8 *VAR_4)
{
 int VAR_5;
 struct smsc911x_data *VAR_6 = FUNC_0(VAR_2);

 FUNC_1(VAR_6);
 FUNC_2(VAR_6, VAR_1);
 VAR_5 = FUNC_3(VAR_6, VAR_3->offset, *VAR_4);
 FUNC_2(VAR_6, VAR_0);


 VAR_3->len = 1;

 return VAR_5;
}
