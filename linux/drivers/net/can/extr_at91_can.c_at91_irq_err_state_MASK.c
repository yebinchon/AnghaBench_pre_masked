
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct can_frame {int can_id; int * data; } ;
struct can_berr_counter {int rxerr; int txerr; } ;
struct TYPE_3__ {int bus_off; int restarts; int error_passive; int error_warning; } ;
struct TYPE_4__ {int state; int restart_ms; TYPE_1__ can_stats; } ;
struct at91_priv {TYPE_2__ can; } ;
typedef enum can_state { ____Placeholder_can_state } can_state ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;




 int FUNC_0 (struct net_device*,int const) ;
 int FUNC_1 (struct net_device*,struct can_berr_counter*) ;
 int FUNC_2 (struct at91_priv*,int ,int) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct at91_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_15,
  struct can_frame *VAR_16, enum can_state VAR_17)
{
 struct at91_priv *VAR_18 = FUNC_4(VAR_15);
 u32 VAR_19 = 0, VAR_20 = 0;
 struct can_berr_counter VAR_21;

 FUNC_1(VAR_15, &VAR_21);

 switch (VAR_18->can.state) {
 case 130:





  if (VAR_17 >= 128 &&
      VAR_17 <= 131) {
   FUNC_3(VAR_15, "Error Warning IRQ\n");
   VAR_18->can.can_stats.error_warning++;

   VAR_16->can_id |= VAR_7;
   VAR_16->data[1] = (VAR_21.txerr > VAR_21.rxerr) ?
    VAR_11 :
    VAR_9;
  }

 case 128:





  if (VAR_17 >= 129 &&
      VAR_17 <= 131) {
   FUNC_3(VAR_15, "Error Passive IRQ\n");
   VAR_18->can.can_stats.error_passive++;

   VAR_16->can_id |= VAR_7;
   VAR_16->data[1] = (VAR_21.txerr > VAR_21.rxerr) ?
    VAR_10 :
    VAR_8;
  }
  break;
 case 131:




  if (VAR_17 <= 129) {
   VAR_16->can_id |= VAR_14;

   FUNC_3(VAR_15, "restarted\n");
   VAR_18->can.can_stats.restarts++;

   FUNC_6(VAR_15);
   FUNC_7(VAR_15);
  }
  break;
 default:
  break;
 }



 switch (VAR_17) {
 case 130:






  FUNC_3(VAR_15, "Error Active\n");
  VAR_16->can_id |= VAR_12;
  VAR_16->data[2] = VAR_13;

 case 128:
  VAR_19 = VAR_3 | VAR_5 | VAR_2;
  VAR_20 = VAR_4;
  break;
 case 129:
  VAR_19 = VAR_3 | VAR_5 | VAR_4;
  VAR_20 = VAR_2;
  break;
 case 131:
  VAR_19 = VAR_3 | VAR_4 |
   VAR_5 | VAR_2;
  VAR_20 = 0;

  VAR_16->can_id |= VAR_6;

  FUNC_3(VAR_15, "bus-off\n");
  FUNC_5(VAR_15);
  VAR_18->can.can_stats.bus_off++;


  if (!VAR_18->can.restart_ms) {
   FUNC_0(VAR_15, 131);
   return;
  }
  break;
 default:
  break;
 }

 FUNC_2(VAR_18, VAR_0, VAR_19);
 FUNC_2(VAR_18, VAR_1, VAR_20);
}
