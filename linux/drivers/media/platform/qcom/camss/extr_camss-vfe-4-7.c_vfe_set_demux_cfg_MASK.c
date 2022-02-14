
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vfe_line {TYPE_1__* fmt; } ;
struct vfe_device {scalar_t__ base; } ;
struct TYPE_2__ {int code; } ;






 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct vfe_device *VAR_19, struct vfe_line *VAR_20)
{
 u32 VAR_21, VAR_22, VAR_23;

 FUNC_0(VAR_2, VAR_19->base + VAR_1);

 VAR_21 = VAR_9 | VAR_10;
 FUNC_0(VAR_21, VAR_19->base + VAR_8);

 VAR_21 = VAR_12 | VAR_13;
 FUNC_0(VAR_21, VAR_19->base + VAR_11);

 switch (VAR_20->fmt[VAR_0].code) {
 case 129:
  VAR_22 = VAR_6;
  VAR_23 = VAR_17;
  break;
 case 128:
  VAR_22 = VAR_7;
  VAR_23 = VAR_18;
  break;
 case 131:
 default:
  VAR_22 = VAR_4;
  VAR_23 = VAR_15;
  break;
 case 130:
  VAR_22 = VAR_5;
  VAR_23 = VAR_16;
  break;
 }

 FUNC_0(VAR_22, VAR_19->base + VAR_3);
 FUNC_0(VAR_23, VAR_19->base + VAR_14);
}
