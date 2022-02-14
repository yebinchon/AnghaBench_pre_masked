
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sja1105_reset_cmd {scalar_t__ por_rst; scalar_t__ cold_rst; scalar_t__ warm_rst; scalar_t__ otp_rst; scalar_t__ car_rst; scalar_t__ cfg_rst; scalar_t__ switch_rst; } ;
struct sja1105_regs {int rgu; } ;
struct sja1105_private {TYPE_2__* ds; TYPE_1__* info; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device* dev; } ;
struct TYPE_3__ {struct sja1105_regs* regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct sja1105_private const*,int ,int ,int *,int) ;
 int FUNC_2 (int *,struct sja1105_reset_cmd const*) ;

__attribute__((used)) static int FUNC_3(const void *VAR_2, const void *VAR_3)
{
 const struct sja1105_private *VAR_4 = VAR_2;
 const struct sja1105_reset_cmd *VAR_5 = VAR_3;
 const struct sja1105_regs *VAR_6 = VAR_4->info->regs;
 struct device *VAR_7 = VAR_4->ds->dev;
 u8 VAR_8[VAR_0];

 if (VAR_5->switch_rst)
  FUNC_0(VAR_7, "Main reset for all functional modules requested\n");
 if (VAR_5->cfg_rst)
  FUNC_0(VAR_7, "Chip configuration reset requested\n");
 if (VAR_5->car_rst)
  FUNC_0(VAR_7, "Clock and reset control logic reset requested\n");
 if (VAR_5->otp_rst)
  FUNC_0(VAR_7, "OTP read cycle for reading product "
   "config settings requested\n");
 if (VAR_5->warm_rst)
  FUNC_0(VAR_7, "Warm reset requested\n");
 if (VAR_5->cold_rst)
  FUNC_0(VAR_7, "Cold reset requested\n");
 if (VAR_5->por_rst)
  FUNC_0(VAR_7, "Power-on reset requested\n");

 FUNC_2(VAR_8, VAR_5);

 return FUNC_1(VAR_4, VAR_1, VAR_6->rgu,
        VAR_8, VAR_0);
}
