
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_errors; int rx_over_errors; } ;
struct net_device {struct net_device_stats stats; } ;
struct ican3_msg {scalar_t__ spec; int * data; } ;
struct ican3_dev {struct net_device* ndev; } ;
struct can_frame {int * data; int can_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 int FUNC_1 (struct net_device*,char*,int ) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct ican3_dev *VAR_3, struct ican3_msg *VAR_4)
{
 struct net_device *VAR_5 = VAR_3->ndev;
 struct net_device_stats *VAR_6 = &VAR_5->stats;
 struct can_frame *VAR_7;
 struct sk_buff *VAR_8;






 if (VAR_4->spec == VAR_2) {
  FUNC_1(VAR_3->ndev, "lost %d control messages\n", VAR_4->data[0]);
  return;
 }
 VAR_8 = FUNC_0(VAR_5, &VAR_7);
 if (VAR_8) {
  VAR_7->can_id |= VAR_0;
  VAR_7->data[1] = VAR_1;
  VAR_6->rx_over_errors++;
  VAR_6->rx_errors++;
  FUNC_2(VAR_8);
 }
}
