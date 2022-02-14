
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {unsigned char bus_width; int flags; } ;
struct TYPE_6__ {TYPE_2__ parallel; } ;
struct v4l2_fwnode_endpoint {int bus_type; TYPE_3__ bus; } ;
struct TYPE_4__ {scalar_t__ field; } ;
struct sun6i_csi {TYPE_1__ config; struct v4l2_fwnode_endpoint v4l2_ep; } ;
struct sun6i_csi_dev {int regmap; int dev; struct sun6i_csi csi; } ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;

 int VAR_26 ;
 int VAR_27 ;

 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (int ,char*,unsigned char) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct sun6i_csi_dev *VAR_31)
{
 struct v4l2_fwnode_endpoint *VAR_32 = &VAR_31->csi.v4l2_ep;
 struct sun6i_csi *VAR_33 = &VAR_31->csi;
 unsigned char VAR_34;
 u32 VAR_35;
 u32 VAR_36;
 bool VAR_37 = 0;

 if (VAR_33->config.field == VAR_23
     || VAR_33->config.field == VAR_25
     || VAR_33->config.field == VAR_24)
  VAR_37 = 1;

 VAR_34 = VAR_32->bus.parallel.bus_width;

 FUNC_1(VAR_31->regmap, VAR_17, &VAR_36);

 VAR_36 &= ~(VAR_4 | VAR_16 |
   VAR_14 |
   VAR_1 | VAR_21 |
   VAR_9 | VAR_7 |
   VAR_19);

 if (VAR_37)
  VAR_36 |= VAR_18;
 else
  VAR_36 |= VAR_20;

 switch (VAR_32->bus_type) {
 case 128:
  VAR_36 |= VAR_15;

  VAR_35 = VAR_32->bus.parallel.flags;

  VAR_36 |= (VAR_34 == 16) ? VAR_5 :
        VAR_6;

  if (VAR_35 & VAR_26)
   VAR_36 |= VAR_8;

  if (VAR_35 & VAR_30)
   VAR_36 |= VAR_22;
  if (VAR_35 & VAR_27)
   VAR_36 |= VAR_10;

  if (VAR_35 & VAR_29)
   VAR_36 |= VAR_0;
  break;
 case 129:
  VAR_36 |= VAR_15;

  VAR_35 = VAR_32->bus.parallel.flags;

  VAR_36 |= (VAR_34 == 16) ? VAR_2 :
        VAR_3;

  if (VAR_35 & VAR_26)
   VAR_36 |= VAR_8;

  if (VAR_35 & VAR_28)
   VAR_36 |= VAR_0;
  break;
 default:
  FUNC_0(VAR_31->dev, "Unsupported bus type: %d\n",
    VAR_32->bus_type);
  break;
 }

 switch (VAR_34) {
 case 8:
  VAR_36 |= VAR_13;
  break;
 case 10:
  VAR_36 |= VAR_11;
  break;
 case 12:
  VAR_36 |= VAR_12;
  break;
 case 16:
  break;
 default:
  FUNC_0(VAR_31->dev, "Unsupported bus width: %u\n", VAR_34);
  break;
 }

 FUNC_2(VAR_31->regmap, VAR_17, VAR_36);
}
