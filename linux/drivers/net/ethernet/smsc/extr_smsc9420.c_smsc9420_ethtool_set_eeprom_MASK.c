
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smsc9420_pdata {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {scalar_t__ magic; int len; int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct smsc9420_pdata* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct smsc9420_pdata*) ;
 int FUNC_2 (struct smsc9420_pdata*,int ) ;
 int FUNC_3 (struct smsc9420_pdata*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4,
           struct ethtool_eeprom *VAR_5, u8 *VAR_6)
{
 struct smsc9420_pdata *VAR_7 = FUNC_0(VAR_4);
 int VAR_8;

 if (VAR_5->magic != VAR_3)
  return -VAR_2;

 FUNC_1(VAR_7);
 FUNC_2(VAR_7, VAR_1);
 VAR_8 = FUNC_3(VAR_7, VAR_5->offset, *VAR_6);
 FUNC_2(VAR_7, VAR_0);


 VAR_5->len = 1;

 return VAR_8;
}
