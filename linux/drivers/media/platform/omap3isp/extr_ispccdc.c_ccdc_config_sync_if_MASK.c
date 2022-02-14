
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_mbus_framefmt {scalar_t__ code; } ;
struct isp_parallel_cfg {scalar_t__ fld_pol; scalar_t__ vs_pol; scalar_t__ hs_pol; scalar_t__ data_pol; } ;
struct isp_device {int dummy; } ;
struct isp_ccdc_device {scalar_t__ bt656; struct v4l2_mbus_framefmt* formats; } ;


 size_t VAR_0 ;
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
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct isp_device*,int ,int ,int) ;
 int FUNC_1 (struct isp_device*,int ,int ,int) ;
 int FUNC_2 (struct isp_device*,int ,int ,int ) ;
 struct isp_device* FUNC_3 (struct isp_ccdc_device*) ;

__attribute__((used)) static void FUNC_4(struct isp_ccdc_device *VAR_21,
    struct isp_parallel_cfg *VAR_22,
    unsigned int VAR_23)
{
 struct isp_device *VAR_24 = FUNC_3(VAR_21);
 const struct v4l2_mbus_framefmt *VAR_25;
 u32 VAR_26 = VAR_16;

 VAR_25 = &VAR_21->formats[VAR_0];

 if (VAR_25->code == VAR_19 ||
     VAR_25->code == VAR_18) {






  if (VAR_21->bt656)
   VAR_26 |= VAR_15;
  else
   VAR_26 |= VAR_14;
 }

 switch (VAR_23) {
 case 8:
  VAR_26 |= VAR_11;
  break;
 case 10:
  VAR_26 |= VAR_8;
  break;
 case 11:
  VAR_26 |= VAR_9;
  break;
 case 12:
  VAR_26 |= VAR_10;
  break;
 }

 if (VAR_22 && VAR_22->data_pol)
  VAR_26 |= VAR_7;

 if (VAR_22 && VAR_22->hs_pol)
  VAR_26 |= VAR_13;




 if ((VAR_22 && VAR_22->vs_pol) || VAR_21->bt656)
  VAR_26 |= VAR_17;

 if (VAR_22 && VAR_22->fld_pol)
  VAR_26 |= VAR_12;

 FUNC_2(VAR_24, VAR_26, VAR_20, VAR_6);




 if (VAR_25->code == VAR_18)
  FUNC_1(VAR_24, VAR_20, VAR_1,
       VAR_2);
 else
  FUNC_0(VAR_24, VAR_20, VAR_1,
       VAR_2);




 if (VAR_21->bt656)
  FUNC_1(VAR_24, VAR_20, VAR_3,
       VAR_5 | VAR_4);
 else
  FUNC_0(VAR_24, VAR_20, VAR_3,
       VAR_5 | VAR_4);

}
