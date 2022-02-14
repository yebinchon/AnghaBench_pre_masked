
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sunxi_pinctrl {int membase; int lock; } ;
struct pinctrl_dev {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 struct sunxi_pinctrl* FUNC_3 (struct pinctrl_dev*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int) ;
 int FUNC_7 (unsigned int,int,int*,int*,int*) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct pinctrl_dev *VAR_2, unsigned VAR_3,
      unsigned long *VAR_4, unsigned VAR_5)
{
 struct sunxi_pinctrl *VAR_6 = FUNC_3(VAR_2);
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  enum pin_config_param VAR_8;
  unsigned long VAR_9;
  u32 VAR_10, VAR_11, VAR_12, VAR_13;
  u32 VAR_14, VAR_15;
  int VAR_16;

  VAR_8 = FUNC_2(VAR_4[VAR_7]);
  VAR_14 = FUNC_1(VAR_4[VAR_7]);

  VAR_16 = FUNC_7(VAR_3, VAR_8, &VAR_10, &VAR_11, &VAR_12);
  if (VAR_16 < 0)
   return VAR_16;

  switch (VAR_8) {
  case 128:
   if (VAR_14 < 10 || VAR_14 > 40)
    return -VAR_0;







   VAR_15 = VAR_14 / 10 - 1;
   break;
  case 131:
   VAR_15 = 0;
   break;
  case 129:
   if (VAR_14 == 0)
    return -VAR_0;
   VAR_15 = 1;
   break;
  case 130:
   if (VAR_14 == 0)
    return -VAR_0;
   VAR_15 = 2;
   break;
  default:

   FUNC_0(1);
   return -VAR_1;
  }

  FUNC_4(&VAR_6->lock, VAR_9);
  VAR_13 = FUNC_6(VAR_6->membase + VAR_10);
  VAR_13 &= ~(VAR_12 << VAR_11);
  FUNC_8(VAR_13 | VAR_15 << VAR_11, VAR_6->membase + VAR_10);
  FUNC_5(&VAR_6->lock, VAR_9);
 }

 return 0;
}
