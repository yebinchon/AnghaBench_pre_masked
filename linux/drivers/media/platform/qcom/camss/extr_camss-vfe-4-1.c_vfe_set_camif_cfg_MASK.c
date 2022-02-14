
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vfe_line {TYPE_1__* fmt; } ;
struct vfe_device {scalar_t__ base; } ;
struct TYPE_2__ {int code; int width; int height; } ;






 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 int VAR_13 ;
 int FUNC_1 (struct vfe_device*,int ,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct vfe_device *VAR_14, struct vfe_line *VAR_15)
{
 u32 VAR_16;

 switch (VAR_15->fmt[VAR_0].code) {
 case 129:
  VAR_16 = VAR_11;
  break;
 case 128:
  VAR_16 = VAR_12;
  break;
 case 131:
 default:
  VAR_16 = VAR_9;
  break;
 case 130:
  VAR_16 = VAR_10;
  break;
 }

 FUNC_2(VAR_16, VAR_14->base + VAR_8);

 VAR_16 = VAR_15->fmt[VAR_0].width * 2;
 VAR_16 |= VAR_15->fmt[VAR_0].height << 16;
 FUNC_2(VAR_16, VAR_14->base + VAR_3);

 VAR_16 = VAR_15->fmt[VAR_0].width * 2 - 1;
 FUNC_2(VAR_16, VAR_14->base + VAR_7);

 VAR_16 = VAR_15->fmt[VAR_0].height - 1;
 FUNC_2(VAR_16, VAR_14->base + VAR_6);

 VAR_16 = 0xffffffff;
 FUNC_2(VAR_16, VAR_14->base + VAR_5);

 VAR_16 = 0xffffffff;
 FUNC_2(VAR_16, VAR_14->base + VAR_4);

 VAR_16 = VAR_13;
 FUNC_1(VAR_14, FUNC_0(0), VAR_16);

 VAR_16 = VAR_2;
 FUNC_2(VAR_16, VAR_14->base + VAR_1);
}
