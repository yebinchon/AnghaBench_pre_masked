
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vsc73xx {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct vsc73xx* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct vsc73xx*,int ,int ,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_2, unsigned int VAR_3)
{
 struct vsc73xx *VAR_4 = FUNC_1(VAR_2);
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_4, VAR_0, 0,
      VAR_1, &VAR_5);
 if (VAR_6)
  return VAR_6;

 return !!(VAR_5 & FUNC_0(VAR_3));
}
