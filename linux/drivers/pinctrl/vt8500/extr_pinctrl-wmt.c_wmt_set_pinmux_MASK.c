
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct wmt_pinctrl_data {int dev; TYPE_1__* banks; } ;
struct TYPE_2__ {size_t reg_en; size_t reg_dir; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_1 (unsigned int) ;
 size_t FUNC_2 (unsigned int) ;



 int FUNC_3 (int ,char*,unsigned int) ;
 int FUNC_4 (struct wmt_pinctrl_data*,size_t,int ) ;
 int FUNC_5 (struct wmt_pinctrl_data*,size_t,int ) ;

__attribute__((used)) static int FUNC_6(struct wmt_pinctrl_data *VAR_2, unsigned VAR_3,
     unsigned VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_4);
 u32 VAR_6 = FUNC_2(VAR_4);
 u32 VAR_7 = VAR_2->banks[VAR_5].reg_en;
 u32 VAR_8 = VAR_2->banks[VAR_5].reg_dir;

 if (VAR_8 == VAR_1) {
  FUNC_3(VAR_2->dev, "pin:%d no direction register defined\n",
   VAR_4);
  return -VAR_0;
 }





 switch (VAR_3) {
 case 129:
  if (VAR_7 != VAR_1)
   FUNC_5(VAR_2, VAR_7, FUNC_0(VAR_6));
  FUNC_4(VAR_2, VAR_8, FUNC_0(VAR_6));
  break;
 case 128:
  if (VAR_7 != VAR_1)
   FUNC_5(VAR_2, VAR_7, FUNC_0(VAR_6));
  FUNC_5(VAR_2, VAR_8, FUNC_0(VAR_6));
  break;
 case 130:
  if (VAR_7 == VAR_1) {
   FUNC_3(VAR_2->dev, "pin:%d no alt function available\n",
    VAR_4);
   return -VAR_0;
  }
  FUNC_4(VAR_2, VAR_7, FUNC_0(VAR_6));
 }

 return 0;
}
