
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct pucan_msg {int dummy; } ;
struct peak_usb_device {struct net_device* netdev; } ;
struct pcan_usb_fd_if {int time_ref; struct peak_usb_device** dev; } ;
struct pcan_ufd_ovr_msg {int ts_low; } ;
struct TYPE_2__ {int rx_errors; int rx_over_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct can_frame {int * data; int can_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int *,int ) ;
 size_t FUNC_3 (struct pcan_ufd_ovr_msg*) ;

__attribute__((used)) static int FUNC_4(struct pcan_usb_fd_if *VAR_3,
          struct pucan_msg *VAR_4)
{
 struct pcan_ufd_ovr_msg *VAR_5 = (struct pcan_ufd_ovr_msg *)VAR_4;
 struct peak_usb_device *VAR_6 = VAR_3->dev[FUNC_3(VAR_5)];
 struct net_device *VAR_7 = VAR_6->netdev;
 struct can_frame *VAR_8;
 struct sk_buff *VAR_9;


 VAR_9 = FUNC_0(VAR_7, &VAR_8);
 if (!VAR_9)
  return -VAR_2;

 VAR_8->can_id |= VAR_0;
 VAR_8->data[1] |= VAR_1;

 FUNC_2(VAR_9, &VAR_3->time_ref, FUNC_1(VAR_5->ts_low));

 VAR_7->stats.rx_over_errors++;
 VAR_7->stats.rx_errors++;

 return 0;
}
