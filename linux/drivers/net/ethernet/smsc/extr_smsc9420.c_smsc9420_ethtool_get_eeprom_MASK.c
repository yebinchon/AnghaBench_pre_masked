
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smsc9420_pdata {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int len; size_t offset; int magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int,int) ;
 struct smsc9420_pdata* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct smsc9420_pdata*) ;
 int FUNC_4 (struct smsc9420_pdata*,int,int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2,
           struct ethtool_eeprom *VAR_3, u8 *VAR_4)
{
 struct smsc9420_pdata *VAR_5 = FUNC_2(VAR_2);
 u8 VAR_6[VAR_1];
 int VAR_7, VAR_8;

 FUNC_3(VAR_5);

 VAR_7 = FUNC_1(VAR_3->len, VAR_1);
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  int VAR_9 = FUNC_4(VAR_5, VAR_8, VAR_6);
  if (VAR_9 < 0) {
   VAR_3->len = 0;
   return VAR_9;
  }
 }

 FUNC_0(VAR_4, &VAR_6[VAR_3->offset], VAR_7);
 VAR_3->magic = VAR_0;
 VAR_3->len = VAR_7;
 return 0;
}
