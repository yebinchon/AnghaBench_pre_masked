
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct u300_gpio {int dummy; } ;
struct gpio_chip {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int,int ) ;
 struct u300_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int VAR_2 ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (struct gpio_chip*,unsigned int,int) ;
 int FUNC_6 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_7(struct gpio_chip *VAR_3, unsigned VAR_4,
          int VAR_5)
{
 struct u300_gpio *VAR_6 = FUNC_1(VAR_3);
 unsigned long VAR_7;
 u32 VAR_8;
 u32 VAR_9;

 FUNC_3(VAR_7);
 VAR_9 = FUNC_4(FUNC_0(VAR_4, VAR_2));




 VAR_8 = VAR_9 & (VAR_0 <<
    ((VAR_4 & 0x07) << 1));

 if (VAR_8 == 0) {
  VAR_9 &= ~(VAR_0 <<
    ((VAR_4 & 0x07) << 1));
  VAR_9 |= (VAR_1
   << ((VAR_4 & 0x07) << 1));
  FUNC_6(VAR_9, FUNC_0(VAR_4, VAR_2));
 }
 FUNC_5(VAR_3, VAR_4, VAR_5);
 FUNC_2(VAR_7);
 return 0;
}
