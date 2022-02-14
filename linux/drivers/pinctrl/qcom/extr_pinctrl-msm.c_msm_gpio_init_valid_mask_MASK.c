
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct msm_pinctrl {int dev; TYPE_1__* soc; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int* reserved_gpios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long*,unsigned int) ;
 int FUNC_1 (unsigned long*,unsigned int) ;
 int FUNC_2 (int const,unsigned long*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,int *,unsigned int) ;
 struct msm_pinctrl* FUNC_6 (struct gpio_chip*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (unsigned int,int,int ) ;
 int FUNC_9 (int ,unsigned long*) ;

__attribute__((used)) static int FUNC_10(struct gpio_chip *VAR_3,
        unsigned long *VAR_4,
        unsigned int VAR_5)
{
 struct msm_pinctrl *VAR_6 = FUNC_6(VAR_3);
 int VAR_7;
 unsigned int VAR_8, VAR_9;
 const int *VAR_10 = VAR_6->soc->reserved_gpios;
 u16 *VAR_11;


 if (VAR_10) {
  FUNC_0(VAR_4, VAR_5);
  for (VAR_9 = 0; VAR_10[VAR_9] >= 0; VAR_9++) {
   if (VAR_9 >= VAR_5 || VAR_10[VAR_9] >= VAR_5) {
    FUNC_3(VAR_6->dev, "invalid list of reserved GPIOs\n");
    return -VAR_0;
   }
   FUNC_2(VAR_10[VAR_9], VAR_4);
  }

  return 0;
 }


 VAR_8 = VAR_7 = FUNC_4(VAR_6->dev, "gpios");
 if (VAR_7 < 0)
  return 0;

 if (VAR_7 > VAR_5)
  return -VAR_0;

 VAR_11 = FUNC_8(VAR_8, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_7 = FUNC_5(VAR_6->dev, "gpios", VAR_11, VAR_8);
 if (VAR_7 < 0) {
  FUNC_3(VAR_6->dev, "could not read list of GPIOs\n");
  goto out;
 }

 FUNC_1(VAR_4, VAR_5);
 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
  FUNC_9(VAR_11[VAR_9], VAR_4);

out:
 FUNC_7(VAR_11);
 return VAR_7;
}
