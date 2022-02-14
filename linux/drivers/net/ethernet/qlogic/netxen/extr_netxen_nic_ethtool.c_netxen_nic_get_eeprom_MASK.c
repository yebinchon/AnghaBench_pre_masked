
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct netxen_adapter {TYPE_1__* pdev; } ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int magic; int offset; int len; } ;
struct TYPE_2__ {int vendor; int device; } ;


 int VAR_0 ;
 struct netxen_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct netxen_adapter*,int,int *,int ) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_1, struct ethtool_eeprom *VAR_2,
        u8 *VAR_3)
{
 struct netxen_adapter *VAR_4 = FUNC_0(VAR_1);
 int VAR_5;
 int VAR_6;

 if (VAR_2->len == 0)
  return -VAR_0;

 VAR_2->magic = (VAR_4->pdev)->vendor |
   ((VAR_4->pdev)->device << 16);
 VAR_5 = VAR_2->offset;

 VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_3,
      VAR_2->len);
 if (VAR_6 < 0)
  return VAR_6;

 return 0;
}
