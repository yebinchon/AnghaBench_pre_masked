
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct lan743x_adapter {int flags; } ;
struct ethtool_eeprom {scalar_t__ magic; int len; int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct lan743x_adapter*,int ,int ,int *) ;
 int FUNC_1 (struct lan743x_adapter*,int ,int ,int *) ;
 struct lan743x_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4,
          struct ethtool_eeprom *VAR_5, u8 *VAR_6)
{
 struct lan743x_adapter *VAR_7 = FUNC_2(VAR_4);
 int VAR_8 = -VAR_0;

 if (VAR_7->flags & VAR_1) {

  if (VAR_5->magic == VAR_3) {
   VAR_8 = FUNC_1(VAR_7, VAR_5->offset,
      VAR_5->len, VAR_6);
  }
 } else {
  if (VAR_5->magic == VAR_2) {
   VAR_8 = FUNC_0(VAR_7, VAR_5->offset,
         VAR_5->len, VAR_6);
  }
 }

 return VAR_8;
}
