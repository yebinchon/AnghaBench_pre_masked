
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nmk_gpio_chip {int rwimsc; int fwimsc; scalar_t__ addr; int (* set_ioforce ) (int) ;} ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct nmk_gpio_chip*,unsigned int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct nmk_gpio_chip *VAR_2,
         unsigned VAR_3, int VAR_4,
         bool VAR_5)
{
 u32 VAR_6 = VAR_2->rwimsc;
 u32 VAR_7 = VAR_2->fwimsc;

 if (VAR_5 && VAR_2->set_ioforce) {
  u32 VAR_8 = FUNC_0(VAR_3);


  FUNC_4(VAR_6 & ~VAR_8, VAR_2->addr + VAR_1);
  FUNC_4(VAR_7 & ~VAR_8, VAR_2->addr + VAR_0);

  VAR_2->set_ioforce(1);
 }

 FUNC_1(VAR_2, VAR_3, VAR_4);

 if (VAR_5 && VAR_2->set_ioforce) {
  VAR_2->set_ioforce(0);

  FUNC_4(VAR_6, VAR_2->addr + VAR_1);
  FUNC_4(VAR_7, VAR_2->addr + VAR_0);
 }
}
