
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int version; int driver; } ;
struct TYPE_3__ {int usb; } ;
typedef TYPE_1__ pegasus_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2,
    struct ethtool_drvinfo *VAR_3)
{
 pegasus_t *VAR_4 = FUNC_0(VAR_2);

 FUNC_1(VAR_3->driver, VAR_1, sizeof(VAR_3->driver));
 FUNC_1(VAR_3->version, VAR_0, sizeof(VAR_3->version));
 FUNC_2(VAR_4->usb, VAR_3->bus_info, sizeof(VAR_3->bus_info));
}
