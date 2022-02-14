
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,int,int ,int,int ,void*) ;
 int VAR_2 ;
 int FUNC_3 (struct gpio_desc*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3, void *VAR_4,
    struct gpio_desc *VAR_5)
{
 int VAR_6, VAR_7 = FUNC_3(VAR_5);

 if (VAR_7 > 0) {
  VAR_6 = FUNC_2(VAR_3, VAR_7, VAR_2,
         VAR_1 |
         VAR_0,
         FUNC_0(VAR_3),
         VAR_4);
  if (VAR_6 < 0) {
   FUNC_1(VAR_3, "Failed to request irq: %d\n", VAR_6);
   VAR_7 = 0;
  }
 }

 return VAR_7;
}
