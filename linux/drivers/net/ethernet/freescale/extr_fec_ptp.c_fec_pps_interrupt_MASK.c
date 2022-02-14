
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ptp_clock_event {int type; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int mask; } ;
struct fec_enet_private {int next_counter; int reload_period; int ptp_clock; TYPE_1__ cc; scalar_t__ hwp; int pps_channel; } ;
typedef int irqreturn_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct fec_enet_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,struct ptp_clock_event*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_4, void *VAR_5)
{
 struct net_device *VAR_6 = VAR_5;
 struct fec_enet_private *VAR_7 = FUNC_2(VAR_6);
 u32 VAR_8;
 u8 VAR_9 = VAR_7->pps_channel;
 struct ptp_clock_event VAR_10;

 VAR_8 = FUNC_4(VAR_7->hwp + FUNC_1(VAR_9));
 if (VAR_8 & VAR_0) {



  FUNC_5(VAR_7->next_counter, VAR_7->hwp + FUNC_0(VAR_9));
  do {
   FUNC_5(VAR_8, VAR_7->hwp + FUNC_1(VAR_9));
  } while (FUNC_4(VAR_7->hwp + FUNC_1(VAR_9)) & VAR_0);


  VAR_7->next_counter = (VAR_7->next_counter + VAR_7->reload_period) &
    VAR_7->cc.mask;

  VAR_10.type = VAR_3;
  FUNC_3(VAR_7->ptp_clock, &VAR_10);
  return VAR_1;
 }

 return VAR_2;
}
