
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int rate_policy; int ack_policy; int tx_complete; int qos; scalar_t__ packet_type; } ;
struct tx_double_buffer_desc {TYPE_1__ control; } ;
struct ieee80211_tx_info {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct tx_double_buffer_desc *VAR_5,
         struct ieee80211_tx_info *VAR_6, u16 VAR_7)
{
 *(u16 *)&VAR_5->control = 0;

 VAR_5->control.rate_policy = 0;


 VAR_5->control.packet_type = 0;


 if ((VAR_6->flags & VAR_4) ||
     (VAR_6->flags & VAR_3)) {
  VAR_5->control.rate_policy = 1;
  VAR_5->control.ack_policy = 1;
 }

 VAR_5->control.tx_complete = 1;

 if ((VAR_7 & VAR_0) &&
     ((VAR_7 & VAR_1) ||
      (VAR_7 & VAR_2)))
  VAR_5->control.qos = 1;
}
