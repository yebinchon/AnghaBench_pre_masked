
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tps80031_regulator_platform_data {int ext_ctrl_flag; } ;
struct tps80031_regulator {TYPE_1__* rinfo; int dev; int ext_ctrl_flag; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ preq_bit; int trans_reg; int state_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (struct device*,int ,scalar_t__,int ,int ) ;
 int FUNC_2 (struct device*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_4,
  struct tps80031_regulator *VAR_5,
  struct tps80031_regulator_platform_data *VAR_6)
{
 int VAR_7 = 0;

 if (VAR_5->rinfo->preq_bit < 0)
  goto skip_pwr_req_config;

 VAR_7 = FUNC_1(VAR_4, VAR_5->ext_ctrl_flag,
   VAR_5->rinfo->preq_bit, VAR_5->rinfo->state_reg,
   VAR_5->rinfo->trans_reg);
 if (VAR_7 < 0) {
  FUNC_0(VAR_5->dev, "ext powerreq config failed, err = %d\n", VAR_7);
  return VAR_7;
 }

skip_pwr_req_config:
 if (VAR_6->ext_ctrl_flag & VAR_0) {
  VAR_7 = FUNC_2(VAR_4, VAR_1,
    VAR_5->rinfo->trans_reg, VAR_3,
    VAR_2);
  if (VAR_7 < 0) {
   FUNC_0(VAR_5->dev, "Reg 0x%02x update failed, e %d\n",
     VAR_5->rinfo->trans_reg, VAR_7);
   return VAR_7;
  }
 }
 return VAR_7;
}
