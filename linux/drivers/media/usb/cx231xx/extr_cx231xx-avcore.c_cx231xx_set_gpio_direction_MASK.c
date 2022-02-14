
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx231xx {int gpio_dir; int gpio_val; } ;


 int VAR_0 ;
 int FUNC_0 (struct cx231xx*,int,int ) ;

int FUNC_1(struct cx231xx *VAR_1,
          int VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 u32 VAR_5 = 0;


 if (VAR_2 >= 32)
  return -VAR_0;


 if (VAR_3 == 0)
  VAR_5 = VAR_1->gpio_dir & (~(1 << VAR_2));
 else
  VAR_5 = VAR_1->gpio_dir | (1 << VAR_2);

 VAR_4 = FUNC_0(VAR_1, VAR_5, VAR_1->gpio_val);


 VAR_1->gpio_dir = VAR_5;

 return VAR_4;
}
