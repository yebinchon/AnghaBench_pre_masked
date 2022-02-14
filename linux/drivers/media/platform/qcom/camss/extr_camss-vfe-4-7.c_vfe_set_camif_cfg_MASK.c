
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
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ) ;
 int VAR_15 ;
 int FUNC_1 (struct vfe_device*,int ,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct vfe_device *VAR_16, struct vfe_line *VAR_17)
{
 u32 VAR_18;

 switch (VAR_17->fmt[VAR_0].code) {
 case 129:
  VAR_18 = VAR_13;
  break;
 case 128:
  VAR_18 = VAR_14;
  break;
 case 131:
 default:
  VAR_18 = VAR_11;
  break;
 case 130:
  VAR_18 = VAR_12;
  break;
 }

 VAR_18 |= VAR_10;
 FUNC_2(VAR_18, VAR_16->base + VAR_9);

 VAR_18 = VAR_17->fmt[VAR_0].width * 2 - 1;
 VAR_18 |= (VAR_17->fmt[VAR_0].height - 1) << 16;
 FUNC_2(VAR_18, VAR_16->base + VAR_3);

 VAR_18 = VAR_17->fmt[VAR_0].width * 2 - 1;
 FUNC_2(VAR_18, VAR_16->base + VAR_8);

 VAR_18 = VAR_17->fmt[VAR_0].height - 1;
 FUNC_2(VAR_18, VAR_16->base + VAR_7);

 VAR_18 = 0xffffffff;
 FUNC_2(VAR_18, VAR_16->base + VAR_6);

 VAR_18 = 0xffffffff;
 FUNC_2(VAR_18, VAR_16->base + VAR_4);

 VAR_18 = 0xffffffff;
 FUNC_2(VAR_18, VAR_16->base + VAR_5);

 VAR_18 = VAR_15;
 FUNC_1(VAR_16, FUNC_0(0), VAR_18);

 VAR_18 = VAR_2;
 FUNC_2(VAR_18, VAR_16->base + VAR_1);
}
