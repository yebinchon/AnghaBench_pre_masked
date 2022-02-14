
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ravb_ptp_perout {int target; scalar_t__ period; } ;
struct TYPE_2__ {struct ravb_ptp_perout* perout; int clock; } ;
struct ravb_private {TYPE_1__ ptp; } ;
struct ptp_clock_event {int timestamp; scalar_t__ index; int type; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ravb_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct ptp_clock_event*) ;
 int FUNC_2 (struct ravb_private*,int ) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,int,int ) ;

void FUNC_5(struct net_device *VAR_7)
{
 struct ravb_private *VAR_8 = FUNC_0(VAR_7);
 u32 VAR_9 = FUNC_3(VAR_7, VAR_2);

 VAR_9 &= FUNC_3(VAR_7, VAR_1);
 if (VAR_9 & VAR_3) {
  struct ptp_clock_event VAR_10;

  VAR_10.type = VAR_6;
  VAR_10.index = 0;
  VAR_10.timestamp = FUNC_3(VAR_7, VAR_0);
  FUNC_1(VAR_8->ptp.clock, &VAR_10);
 }
 if (VAR_9 & VAR_4) {
  struct ravb_ptp_perout *VAR_11 = VAR_8->ptp.perout;

  if (VAR_11->period) {
   VAR_11->target += VAR_11->period;
   FUNC_2(VAR_8, VAR_11->target);
  }
 }

 FUNC_4(VAR_7, ~(VAR_9 | VAR_5), VAR_2);
}
