
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmk_gpio_chip {scalar_t__ sleepmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nmk_gpio_chip*,int,int ,int) ;
 int FUNC_1 (struct nmk_gpio_chip*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct nmk_gpio_chip *VAR_2,
    int VAR_3, bool VAR_4)
{





 if (VAR_2->sleepmode && VAR_4) {
  FUNC_1(VAR_2, VAR_3,
        VAR_0);
 }

 FUNC_0(VAR_2, VAR_3, VAR_1, VAR_4);
}
