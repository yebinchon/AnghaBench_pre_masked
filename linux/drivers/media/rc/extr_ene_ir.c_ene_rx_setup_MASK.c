
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ene_device {scalar_t__ pll_freq; scalar_t__ hw_revision; int hw_use_gpio_0a; int rx_fan_input_inuse; TYPE_1__* rdev; scalar_t__ hw_learning_and_tx_capable; scalar_t__ hw_fan_input; scalar_t__ carrier_detect_enabled; scalar_t__ learning_mode_enabled; } ;
struct TYPE_2__ {scalar_t__ min_timeout; scalar_t__ max_timeout; scalar_t__ timeout; void* tx_resolution; void* rx_resolution; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (struct ene_device*,int ,int ) ;
 int FUNC_4 (struct ene_device*,int) ;
 int FUNC_5 (struct ene_device*,int ,int ,int) ;
 int FUNC_6 (struct ene_device*,int ,int ) ;
 int FUNC_7 (struct ene_device*,int ,int) ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_8(struct ene_device *VAR_14)
{
 bool VAR_15 = VAR_14->learning_mode_enabled ||
     VAR_14->carrier_detect_enabled;
 int VAR_16 = 0;

 FUNC_2("RX: setup receiver, learning mode = %d", VAR_15);



 FUNC_7(VAR_14, VAR_2, 0x00);


 if (VAR_13 == VAR_8)
  VAR_16 =
   VAR_14->pll_freq == VAR_7 ? 1 : 2;

 FUNC_7(VAR_14, VAR_5,
   (VAR_13 + VAR_16) |
      VAR_6);

 if (VAR_14->hw_revision < VAR_11)
  goto select_timeout;

 if (VAR_15) {

  FUNC_1(!VAR_14->hw_learning_and_tx_capable);






  FUNC_4(VAR_14, !VAR_14->hw_use_gpio_0a);
  VAR_14->rx_fan_input_inuse = 0;


  FUNC_6(VAR_14, VAR_1, VAR_4);


  FUNC_7(VAR_14, VAR_0, 0x63);
  FUNC_5(VAR_14, VAR_2, VAR_3,
   VAR_14->carrier_detect_enabled || VAR_12);
 } else {
  if (VAR_14->hw_fan_input)
   VAR_14->rx_fan_input_inuse = 1;
  else
   FUNC_4(VAR_14, VAR_14->hw_use_gpio_0a);


  FUNC_3(VAR_14, VAR_1, VAR_4);
  FUNC_3(VAR_14, VAR_2, VAR_3);
 }

select_timeout:
 if (VAR_14->rx_fan_input_inuse) {
  VAR_14->rdev->rx_resolution = FUNC_0(VAR_9);



  VAR_14->rdev->min_timeout = VAR_14->rdev->max_timeout =
   FUNC_0(VAR_10 *
    VAR_9);
 } else {
  VAR_14->rdev->rx_resolution = FUNC_0(VAR_13);






  VAR_14->rdev->min_timeout = FUNC_0(127 * VAR_13);
  VAR_14->rdev->max_timeout = FUNC_0(200000);
 }

 if (VAR_14->hw_learning_and_tx_capable)
  VAR_14->rdev->tx_resolution = FUNC_0(VAR_13);

 if (VAR_14->rdev->timeout > VAR_14->rdev->max_timeout)
  VAR_14->rdev->timeout = VAR_14->rdev->max_timeout;
 if (VAR_14->rdev->timeout < VAR_14->rdev->min_timeout)
  VAR_14->rdev->timeout = VAR_14->rdev->min_timeout;
}
