
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; int rx_errors; } ;
struct net_device {struct net_device_stats stats; } ;
struct TYPE_3__ {int bus_error; } ;
struct TYPE_4__ {TYPE_1__ can_stats; } ;
struct m_can_classdev {TYPE_2__ can; } ;
struct can_frame {int can_id; scalar_t__ can_dlc; int * data; } ;
typedef enum m_can_lec_type { ____Placeholder_m_can_lec_type } m_can_lec_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;






 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct m_can_classdev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_8,
    enum m_can_lec_type VAR_9)
{
 struct m_can_classdev *VAR_10 = FUNC_2(VAR_8);
 struct net_device_stats *VAR_11 = &VAR_8->stats;
 struct can_frame *VAR_12;
 struct sk_buff *VAR_13;

 VAR_10->can.can_stats.bus_error++;
 VAR_11->rx_errors++;


 VAR_13 = FUNC_0(VAR_8, &VAR_12);
 if (FUNC_4(!VAR_13))
  return 0;




 VAR_12->can_id |= VAR_1 | VAR_0;

 switch (VAR_9) {
 case 128:
  FUNC_1(VAR_8, "stuff error\n");
  VAR_12->data[2] |= VAR_7;
  break;
 case 129:
  FUNC_1(VAR_8, "form error\n");
  VAR_12->data[2] |= VAR_4;
  break;
 case 133:
  FUNC_1(VAR_8, "ack error\n");
  VAR_12->data[3] = VAR_5;
  break;
 case 131:
  FUNC_1(VAR_8, "bit1 error\n");
  VAR_12->data[2] |= VAR_3;
  break;
 case 132:
  FUNC_1(VAR_8, "bit0 error\n");
  VAR_12->data[2] |= VAR_2;
  break;
 case 130:
  FUNC_1(VAR_8, "CRC error\n");
  VAR_12->data[3] = VAR_6;
  break;
 default:
  break;
 }

 VAR_11->rx_packets++;
 VAR_11->rx_bytes += VAR_12->can_dlc;
 FUNC_3(VAR_13);

 return 1;
}
