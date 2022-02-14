
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device_stats {int rx_errors; } ;
struct kvaser_usb_net_priv {TYPE_3__* netdev; } ;
struct TYPE_6__ {int flag; } ;
struct TYPE_5__ {TYPE_2__ rx_can_header; } ;
struct kvaser_cmd {TYPE_1__ u; } ;
struct TYPE_7__ {struct net_device_stats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,char*,int) ;

__attribute__((used)) static void FUNC_2(const struct kvaser_usb_net_priv *VAR_3,
           const struct kvaser_cmd *VAR_4)
{
 if (VAR_4->u.rx_can_header.flag & (VAR_0 |
      VAR_1)) {
  struct net_device_stats *VAR_5 = &VAR_3->netdev->stats;

  FUNC_1(VAR_3->netdev, "Unknown error (flags: 0x%02x)\n",
      VAR_4->u.rx_can_header.flag);

  VAR_5->rx_errors++;
  return;
 }

 if (VAR_4->u.rx_can_header.flag & VAR_2)
  FUNC_0(VAR_3->netdev);
}
