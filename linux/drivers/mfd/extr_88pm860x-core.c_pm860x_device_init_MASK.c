
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_platform_data {int dummy; } ;
struct pm860x_chip {int id; scalar_t__ companion; scalar_t__ client; scalar_t__ core_irq; } ;




 int FUNC_0 (struct pm860x_chip*,scalar_t__,struct pm860x_platform_data*) ;
 int FUNC_1 (struct pm860x_chip*,scalar_t__,struct pm860x_platform_data*) ;

__attribute__((used)) static int FUNC_2(struct pm860x_chip *VAR_0,
     struct pm860x_platform_data *VAR_1)
{
 VAR_0->core_irq = 0;

 switch (VAR_0->id) {
 case 129:
  FUNC_0(VAR_0, VAR_0->client, VAR_1);
  break;
 case 128:
  FUNC_1(VAR_0, VAR_0->client, VAR_1);
  break;
 }

 if (VAR_0->companion) {
  switch (VAR_0->id) {
  case 128:
   FUNC_0(VAR_0, VAR_0->companion, VAR_1);
   break;
  case 129:
   FUNC_1(VAR_0, VAR_0->companion, VAR_1);
   break;
  }
 }

 return 0;
}
