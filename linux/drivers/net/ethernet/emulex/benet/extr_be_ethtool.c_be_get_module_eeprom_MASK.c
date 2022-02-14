
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {scalar_t__ offset; scalar_t__ len; } ;
struct be_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct be_adapter*,int ,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct be_adapter*,int ) ;
 int FUNC_3 (int *,int *,scalar_t__) ;
 struct be_adapter* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_5,
    struct ethtool_eeprom *VAR_6, u8 *VAR_7)
{
 struct be_adapter *VAR_8 = FUNC_4(VAR_5);
 int VAR_9;

 if (!FUNC_2(VAR_8, VAR_1))
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_8, VAR_3,
         VAR_7);
 if (VAR_9)
  goto err;

 if (VAR_6->offset + VAR_6->len > VAR_2) {
  VAR_9 = FUNC_0(VAR_8,
          VAR_4,
          VAR_7 +
          VAR_2);
  if (VAR_9)
   goto err;
 }
 if (VAR_6->offset)
  FUNC_3(VAR_7, VAR_7 + VAR_6->offset, VAR_6->len);
err:
 return FUNC_1(VAR_9);
}
