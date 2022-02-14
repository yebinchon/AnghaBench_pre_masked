
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rockchip_thermal_data {int tshut_mode; int tshut_polarity; int grf; TYPE_1__* chip; scalar_t__ tshut_temp; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ tshut_mode; scalar_t__ tshut_polarity; scalar_t__ tshut_temp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct device*,char*,scalar_t__) ;
 int FUNC_2 (struct device*,char*,...) ;
 scalar_t__ FUNC_3 (struct device_node*,char*,scalar_t__*) ;
 int FUNC_4 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_5,
          struct device_node *VAR_6,
          struct rockchip_thermal_data *VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10;

 if (FUNC_3(VAR_6, "rockchip,hw-tshut-temp", &VAR_8)) {
  FUNC_2(VAR_5,
    "Missing tshut temp property, using default %d\n",
    VAR_7->chip->tshut_temp);
  VAR_7->tshut_temp = VAR_7->chip->tshut_temp;
 } else {
  if (VAR_8 > VAR_2) {
   FUNC_1(VAR_5, "Invalid tshut temperature specified: %d\n",
    VAR_8);
   return -VAR_1;
  }
  VAR_7->tshut_temp = VAR_8;
 }

 if (FUNC_3(VAR_6, "rockchip,hw-tshut-mode", &VAR_9)) {
  FUNC_2(VAR_5,
    "Missing tshut mode property, using default (%s)\n",
    VAR_7->chip->tshut_mode == VAR_4 ?
    "gpio" : "cru");
  VAR_7->tshut_mode = VAR_7->chip->tshut_mode;
 } else {
  VAR_7->tshut_mode = VAR_9;
 }

 if (VAR_7->tshut_mode > 1) {
  FUNC_1(VAR_5, "Invalid tshut mode specified: %d\n",
   VAR_7->tshut_mode);
  return -VAR_0;
 }

 if (FUNC_3(VAR_6, "rockchip,hw-tshut-polarity",
     &VAR_10)) {
  FUNC_2(VAR_5,
    "Missing tshut-polarity property, using default (%s)\n",
    VAR_7->chip->tshut_polarity == VAR_3 ?
    "low" : "high");
  VAR_7->tshut_polarity = VAR_7->chip->tshut_polarity;
 } else {
  VAR_7->tshut_polarity = VAR_10;
 }

 if (VAR_7->tshut_polarity > 1) {
  FUNC_1(VAR_5, "Invalid tshut-polarity specified: %d\n",
   VAR_7->tshut_polarity);
  return -VAR_0;
 }




 VAR_7->grf = FUNC_4(VAR_6, "rockchip,grf");
 if (FUNC_0(VAR_7->grf))
  FUNC_2(VAR_5, "Missing rockchip,grf property\n");

 return 0;
}
