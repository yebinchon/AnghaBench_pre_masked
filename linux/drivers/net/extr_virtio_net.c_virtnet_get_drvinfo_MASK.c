
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtnet_info {struct virtio_device* vdev; } ;
struct virtio_device {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int version; int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct virtnet_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct virtio_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2,
    struct ethtool_drvinfo *VAR_3)
{
 struct virtnet_info *VAR_4 = FUNC_0(VAR_2);
 struct virtio_device *VAR_5 = VAR_4->vdev;

 FUNC_1(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_1(VAR_3->version, VAR_1, sizeof(VAR_3->version));
 FUNC_1(VAR_3->bus_info, FUNC_2(VAR_5), sizeof(VAR_3->bus_info));

}
