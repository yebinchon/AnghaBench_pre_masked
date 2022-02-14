
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smsc911x_data {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int len; size_t offset; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int,int) ;
 struct smsc911x_data* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct smsc911x_data*) ;
 int FUNC_4 (struct smsc911x_data*,int,int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1,
           struct ethtool_eeprom *VAR_2, u8 *VAR_3)
{
 struct smsc911x_data *VAR_4 = FUNC_2(VAR_1);
 u8 VAR_5[VAR_0];
 int VAR_6;
 int VAR_7;

 FUNC_3(VAR_4);

 VAR_6 = FUNC_1(VAR_2->len, VAR_0);
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  int VAR_8 = FUNC_4(VAR_4, VAR_7, VAR_5);
  if (VAR_8 < 0) {
   VAR_2->len = 0;
   return VAR_8;
  }
 }

 FUNC_0(VAR_3, &VAR_5[VAR_2->offset], VAR_6);
 VAR_2->len = VAR_6;
 return 0;
}
