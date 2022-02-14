
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pinctrl_dev {int dummy; } ;
struct bm1880_pinctrl {TYPE_1__* pinconf; scalar_t__ base; } ;
struct TYPE_2__ {int drv_bits; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;






 int FUNC_7 (int ,int) ;
 unsigned long FUNC_8 (unsigned int,unsigned int) ;
 unsigned int FUNC_9 (unsigned long) ;
 struct bm1880_pinctrl* FUNC_10 (struct pinctrl_dev*) ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct pinctrl_dev *VAR_2,
      unsigned int VAR_3,
      unsigned long *VAR_4)
{
 struct bm1880_pinctrl *VAR_5 = FUNC_10(VAR_2);
 unsigned int VAR_6 = FUNC_9(*VAR_4);
 unsigned int VAR_7 = 0;
 u32 VAR_8, VAR_9, VAR_10;
 int VAR_11;

 VAR_9 = (VAR_3 >> 1) << 2;
 VAR_8 = FUNC_11(VAR_5->base + VAR_0 + VAR_9);

 switch (VAR_6) {
 case 131:
  VAR_10 = FUNC_4(VAR_3);
  VAR_7 = !!(VAR_8 & FUNC_0(VAR_10));
  break;
 case 132:
  VAR_10 = FUNC_3(VAR_3);
  VAR_7 = !!(VAR_8 & FUNC_0(VAR_10));
  break;
 case 133:
  VAR_10 = FUNC_2(VAR_3);
  VAR_7 = !!(VAR_8 & FUNC_0(VAR_10));
  break;
 case 129:
  VAR_10 = FUNC_5(VAR_3);
  VAR_7 = !!(VAR_8 & FUNC_0(VAR_10));
  break;
 case 128:
  VAR_10 = FUNC_6(VAR_3);
  VAR_7 = !!(VAR_8 & FUNC_0(VAR_10));
  break;
 case 130:
  VAR_10 = FUNC_1(VAR_3);
  VAR_11 = FUNC_7(VAR_5->pinconf[VAR_3].drv_bits,
          !!(VAR_8 & FUNC_0(VAR_10)));
  if (VAR_11 < 0)
   return VAR_11;

  VAR_7 = VAR_11;
  break;
 default:
  return -VAR_1;
 }

 *VAR_4 = FUNC_8(VAR_6, VAR_7);

 return 0;
}
