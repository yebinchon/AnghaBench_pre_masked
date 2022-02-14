
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sja1105_reset_cmd {scalar_t__ cold_rst; scalar_t__ warm_rst; scalar_t__ por_rst; scalar_t__ otp_rst; scalar_t__ car_rst; scalar_t__ cfg_rst; scalar_t__ switch_rst; } ;
struct sja1105_regs {int rgu; } ;
struct sja1105_private {TYPE_2__* ds; TYPE_1__* info; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device* dev; } ;
struct TYPE_3__ {struct sja1105_regs* regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct sja1105_private const*,int ,int ,int *,int) ;
 int FUNC_3 (int *,struct sja1105_reset_cmd const*) ;

__attribute__((used)) static int FUNC_4(const void *VAR_3, const void *VAR_4)
{
 const struct sja1105_private *VAR_5 = VAR_3;
 const struct sja1105_reset_cmd *VAR_6 = VAR_4;
 const struct sja1105_regs *VAR_7 = VAR_5->info->regs;
 struct device *VAR_8 = VAR_5->ds->dev;
 u8 VAR_9[VAR_1];

 if (VAR_6->switch_rst ||
     VAR_6->cfg_rst ||
     VAR_6->car_rst ||
     VAR_6->otp_rst ||
     VAR_6->por_rst) {
  FUNC_1(VAR_8, "Only warm and cold reset is supported "
   "for SJA1105 E/T!\n");
  return -VAR_0;
 }

 if (VAR_6->warm_rst)
  FUNC_0(VAR_8, "Warm reset requested\n");
 if (VAR_6->cold_rst)
  FUNC_0(VAR_8, "Cold reset requested\n");

 FUNC_3(VAR_9, VAR_6);

 return FUNC_2(VAR_5, VAR_2, VAR_7->rgu,
        VAR_9, VAR_1);
}
