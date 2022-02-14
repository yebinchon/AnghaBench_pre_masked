
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pl022_config_chip {scalar_t__ iface; scalar_t__ hierarchy; scalar_t__ com_mode; int rx_lev_trig; int tx_lev_trig; scalar_t__ ctrl_len; scalar_t__ wait_state; scalar_t__ duplex; } ;
struct pl022 {TYPE_2__* adev; TYPE_1__* vendor; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int fifodepth; scalar_t__ extended_cr; int unidir; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;





 scalar_t__ VAR_14 ;





 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1(struct pl022 *VAR_15,
    struct pl022_config_chip const *VAR_16)
{
 if ((VAR_16->iface < VAR_6)
     || (VAR_16->iface > VAR_8)) {
  FUNC_0(&VAR_15->adev->dev,
   "interface is configured incorrectly\n");
  return -VAR_1;
 }
 if ((VAR_16->iface == VAR_8) &&
     (!VAR_15->vendor->unidir)) {
  FUNC_0(&VAR_15->adev->dev,
   "unidirectional mode not supported in this "
   "hardware version\n");
  return -VAR_1;
 }
 if ((VAR_16->hierarchy != VAR_9)
     && (VAR_16->hierarchy != VAR_14)) {
  FUNC_0(&VAR_15->adev->dev,
   "hierarchy is configured incorrectly\n");
  return -VAR_1;
 }
 if ((VAR_16->com_mode != VAR_2)
     && (VAR_16->com_mode != VAR_0)
     && (VAR_16->com_mode != VAR_3)) {
  FUNC_0(&VAR_15->adev->dev,
   "Communication mode is configured incorrectly\n");
  return -VAR_1;
 }
 switch (VAR_16->rx_lev_trig) {
 case 136:
 case 134:
 case 133:

  break;
 case 137:
  if (VAR_15->vendor->fifodepth < 16) {
   FUNC_0(&VAR_15->adev->dev,
   "RX FIFO Trigger Level is configured incorrectly\n");
   return -VAR_1;
  }
  break;
 case 135:
  if (VAR_15->vendor->fifodepth < 32) {
   FUNC_0(&VAR_15->adev->dev,
   "RX FIFO Trigger Level is configured incorrectly\n");
   return -VAR_1;
  }
  break;
 default:
  FUNC_0(&VAR_15->adev->dev,
   "RX FIFO Trigger Level is configured incorrectly\n");
  return -VAR_1;
 }
 switch (VAR_16->tx_lev_trig) {
 case 131:
 case 129:
 case 128:

  break;
 case 132:
  if (VAR_15->vendor->fifodepth < 16) {
   FUNC_0(&VAR_15->adev->dev,
   "TX FIFO Trigger Level is configured incorrectly\n");
   return -VAR_1;
  }
  break;
 case 130:
  if (VAR_15->vendor->fifodepth < 32) {
   FUNC_0(&VAR_15->adev->dev,
   "TX FIFO Trigger Level is configured incorrectly\n");
   return -VAR_1;
  }
  break;
 default:
  FUNC_0(&VAR_15->adev->dev,
   "TX FIFO Trigger Level is configured incorrectly\n");
  return -VAR_1;
 }
 if (VAR_16->iface == VAR_7) {
  if ((VAR_16->ctrl_len < VAR_5)
      || (VAR_16->ctrl_len > VAR_4)) {
   FUNC_0(&VAR_15->adev->dev,
    "CTRL LEN is configured incorrectly\n");
   return -VAR_1;
  }
  if ((VAR_16->wait_state != VAR_13)
      && (VAR_16->wait_state != VAR_12)) {
   FUNC_0(&VAR_15->adev->dev,
    "Wait State is configured incorrectly\n");
   return -VAR_1;
  }

  if (VAR_15->vendor->extended_cr) {
   if ((VAR_16->duplex !=
        VAR_10)
       && (VAR_16->duplex !=
    VAR_11)) {
    FUNC_0(&VAR_15->adev->dev,
     "Microwire duplex mode is configured incorrectly\n");
    return -VAR_1;
   }
  } else {
   if (VAR_16->duplex != VAR_10)
    FUNC_0(&VAR_15->adev->dev,
     "Microwire half duplex mode requested,"
     " but this is only available in the"
     " ST version of PL022\n");
   return -VAR_1;
  }
 }
 return 0;
}
