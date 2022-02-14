
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct v4l2_mbus_framefmt {unsigned int width; int height; int code; } ;
struct isp_pipeline {unsigned long l3_ick; int external_rate; int max_rate; scalar_t__ input; } ;
struct isp_format_info {int width; } ;
struct isp_device {scalar_t__ revision; } ;
struct TYPE_2__ {int entity; } ;
struct isp_ccdc_device {struct v4l2_mbus_framefmt* formats; TYPE_1__ subdev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned int FUNC_0 (unsigned long,int ) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 unsigned int FUNC_1 (unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (struct isp_device*,unsigned int,int ,int ) ;
 struct isp_format_info* FUNC_3 (int ) ;
 struct isp_device* FUNC_4 (struct isp_ccdc_device*) ;
 struct isp_pipeline* FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct isp_ccdc_device *VAR_20)
{
 struct isp_pipeline *VAR_21 = FUNC_5(&VAR_20->subdev.entity);
 struct isp_device *VAR_22 = FUNC_4(VAR_20);
 const struct isp_format_info *VAR_23;
 struct v4l2_mbus_framefmt *VAR_24;
 unsigned long VAR_25 = VAR_21->l3_ick;
 unsigned int VAR_26 = VAR_22->revision == VAR_18 ? 64 : 8;
 unsigned int VAR_27 = 0;
 u32 VAR_28 = VAR_3;

 VAR_24 = &VAR_20->formats[VAR_1];

 if (!VAR_24->code) {



  FUNC_2(VAR_22, 0, VAR_19, VAR_2);
  return;
 }

 FUNC_2(VAR_22, (0 << VAR_11) |
         (VAR_24->width << VAR_10),
         VAR_19, VAR_9);
 FUNC_2(VAR_22, (0 << VAR_14) |
         ((VAR_24->height + 1) << VAR_13),
         VAR_19, VAR_12);

 FUNC_2(VAR_22, (VAR_24->width << VAR_16) |
         (VAR_24->height << VAR_17),
         VAR_19, VAR_15);

 VAR_23 = FUNC_3(VAR_20->formats[VAR_0].code);

 switch (VAR_23->width) {
 case 8:
 case 10:
  VAR_28 |= VAR_8;
  break;
 case 11:
  VAR_28 |= VAR_5;
  break;
 case 12:
  VAR_28 |= VAR_6;
  break;
 case 13:
  VAR_28 |= VAR_7;
  break;
 }

 if (VAR_21->input)
  VAR_27 = FUNC_0(VAR_25, VAR_21->max_rate);
 else if (VAR_21->external_rate)
  VAR_27 = VAR_25 / VAR_21->external_rate;

 VAR_27 = FUNC_1(VAR_27, 2U, VAR_26);
 VAR_28 |= (VAR_27 - 2) << VAR_4;

 FUNC_2(VAR_22, VAR_28, VAR_19, VAR_2);
}
