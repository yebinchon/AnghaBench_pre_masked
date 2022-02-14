
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct regmap {int dummy; } ;
struct isc_subdev_entity {int pfe_cfg0; } ;
struct TYPE_6__ {int rlp_cfg_mode; int bits_pipeline; int dcfg_imode; TYPE_2__* sd_format; } ;
struct TYPE_4__ {scalar_t__ awb; } ;
struct isc_device {TYPE_3__ config; TYPE_1__ ctrls; struct isc_subdev_entity* current_subdev; struct regmap* regmap; } ;
struct TYPE_5__ {int pfe_cfg0_bps; int mbus_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
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
 int FUNC_1 (struct isc_device*,int) ;
 int FUNC_2 (struct isc_device*,int) ;
 int FUNC_3 (struct isc_device*) ;
 int FUNC_4 (struct regmap*,int ,int,int) ;
 int FUNC_5 (struct regmap*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct isc_device *VAR_14)
{
 struct regmap *VAR_15 = VAR_14->regmap;
 u32 VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 struct isc_subdev_entity *VAR_21 = VAR_14->current_subdev;

 VAR_16 = VAR_14->config.sd_format->pfe_cfg0_bps;
 VAR_17 = VAR_14->config.rlp_cfg_mode;
 VAR_20 = VAR_14->config.bits_pipeline;

 VAR_18 = VAR_14->config.dcfg_imode |
         VAR_2 | VAR_1;

 VAR_16 |= VAR_21->pfe_cfg0 | VAR_9;
 VAR_19 = VAR_4 | VAR_7 |
        VAR_11 | VAR_10 |
        VAR_8 | VAR_6 |
     VAR_5;

 FUNC_4(VAR_15, VAR_3, VAR_19, VAR_16);

 FUNC_4(VAR_15, VAR_12, VAR_13,
      VAR_17);

 FUNC_5(VAR_15, VAR_0, VAR_18);


 FUNC_2(VAR_14, VAR_20);





 if (VAR_14->ctrls.awb &&
     FUNC_0(VAR_14->config.sd_format->mbus_code))
  FUNC_1(VAR_14, 1);
 else
  FUNC_1(VAR_14, 0);


 return FUNC_3(VAR_14);
}
