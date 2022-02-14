
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pinctrl_pin_desc {int number; } ;
struct gpio_chip {int dummy; } ;
struct chv_pinctrl {struct chv_community* community; } ;
struct chv_community {int npins; int nirqs; struct pinctrl_pin_desc* pins; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct chv_pinctrl*,int ,int ) ;
 int FUNC_1 (int ,unsigned long*) ;
 struct chv_pinctrl* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_3,
        unsigned long *VAR_4,
        unsigned int VAR_5)
{
 struct chv_pinctrl *VAR_6 = FUNC_2(VAR_3);
 const struct chv_community *VAR_7 = VAR_6->community;
 int VAR_8;


 for (VAR_8 = 0; VAR_8 < VAR_7->npins; VAR_8++) {
  const struct pinctrl_pin_desc *VAR_9;
  u32 VAR_10;

  VAR_9 = &VAR_7->pins[VAR_8];

  VAR_10 = FUNC_3(FUNC_0(VAR_6, VAR_9->number, VAR_0));
  VAR_10 &= VAR_1;
  VAR_10 >>= VAR_2;

  if (VAR_10 >= VAR_7->nirqs)
   FUNC_1(VAR_9->number, VAR_4);
 }
}
