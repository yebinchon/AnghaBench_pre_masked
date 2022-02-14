
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; int rx_errors; } ;
struct net_device {struct net_device_stats stats; } ;
struct can_frame {int can_id; scalar_t__ can_dlc; int * data; } ;
struct TYPE_3__ {int bus_error; } ;
struct TYPE_4__ {int ctrlmode; TYPE_1__ can_stats; } ;
struct c_can_priv {TYPE_2__ can; } ;
typedef enum c_can_lec_type { ____Placeholder_c_can_lec_type } c_can_lec_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;





 int VAR_9 ;

 int VAR_10 ;
 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct c_can_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_11,
    enum c_can_lec_type VAR_12)
{
 struct c_can_priv *VAR_13 = FUNC_2(VAR_11);
 struct net_device_stats *VAR_14 = &VAR_11->stats;
 struct can_frame *VAR_15;
 struct sk_buff *VAR_16;






 if (VAR_12 == VAR_10 || VAR_12 == VAR_9)
  return 0;

 if (!(VAR_13->can.ctrlmode & VAR_0))
  return 0;


 VAR_13->can.can_stats.bus_error++;
 VAR_14->rx_errors++;


 VAR_16 = FUNC_0(VAR_11, &VAR_15);
 if (FUNC_4(!VAR_16))
  return 0;





 VAR_15->can_id |= VAR_2 | VAR_1;

 switch (VAR_12) {
 case 128:
  FUNC_1(VAR_11, "stuff error\n");
  VAR_15->data[2] |= VAR_8;
  break;
 case 129:
  FUNC_1(VAR_11, "form error\n");
  VAR_15->data[2] |= VAR_5;
  break;
 case 133:
  FUNC_1(VAR_11, "ack error\n");
  VAR_15->data[3] = VAR_6;
  break;
 case 131:
  FUNC_1(VAR_11, "bit1 error\n");
  VAR_15->data[2] |= VAR_4;
  break;
 case 132:
  FUNC_1(VAR_11, "bit0 error\n");
  VAR_15->data[2] |= VAR_3;
  break;
 case 130:
  FUNC_1(VAR_11, "CRC error\n");
  VAR_15->data[3] = VAR_7;
  break;
 default:
  break;
 }

 VAR_14->rx_packets++;
 VAR_14->rx_bytes += VAR_15->can_dlc;
 FUNC_3(VAR_16);
 return 1;
}
