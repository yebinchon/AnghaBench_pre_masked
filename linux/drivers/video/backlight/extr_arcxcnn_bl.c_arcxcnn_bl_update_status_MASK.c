
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int state; scalar_t__ power; scalar_t__ brightness; } ;
struct backlight_device {TYPE_1__ props; } ;
struct arcxcnn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct arcxcnn*,scalar_t__) ;
 int FUNC_1 (struct arcxcnn*,int ,int ,int ) ;
 struct arcxcnn* FUNC_2 (struct backlight_device*) ;

__attribute__((used)) static int FUNC_3(struct backlight_device *VAR_4)
{
 struct arcxcnn *VAR_5 = FUNC_2(VAR_4);
 u32 VAR_6 = VAR_4->props.brightness;
 int VAR_7;

 if (VAR_4->props.state & (VAR_3 | VAR_2))
  VAR_6 = 0;

 VAR_7 = FUNC_0(VAR_5, VAR_6);
 if (VAR_7)
  return VAR_7;


 return FUNC_1(VAR_5, VAR_0, VAR_1,
  (VAR_4->props.power == 0) ? 0 : VAR_1);
}
