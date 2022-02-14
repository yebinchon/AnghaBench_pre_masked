
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct kvaser_usb_dev_cfg {int timestamp_freq; } ;
struct TYPE_4__ {int timestamp; } ;
struct kvaser_cmd_ext {TYPE_1__ rx_can; } ;
struct TYPE_5__ {int * timestamp; } ;
struct TYPE_6__ {scalar_t__ cmd_no; } ;
struct kvaser_cmd {TYPE_2__ rx_can; TYPE_3__ header; } ;
typedef int ktime_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static ktime_t
FUNC_4(const struct kvaser_usb_dev_cfg *VAR_1,
       const struct kvaser_cmd *VAR_2)
{
 u64 VAR_3;

 if (VAR_2->header.cmd_no == VAR_0) {
  struct kvaser_cmd_ext *VAR_4 = (struct kvaser_cmd_ext *)VAR_2;

  VAR_3 = FUNC_2(VAR_4->rx_can.timestamp);
 } else {
  VAR_3 = FUNC_1(VAR_2->rx_can.timestamp[0]);
  VAR_3 += (u64)(FUNC_1(VAR_2->rx_can.timestamp[1])) << 16;
  VAR_3 += (u64)(FUNC_1(VAR_2->rx_can.timestamp[2])) << 32;
 }

 return FUNC_3(FUNC_0(VAR_3 * 1000, VAR_1->timestamp_freq));
}
