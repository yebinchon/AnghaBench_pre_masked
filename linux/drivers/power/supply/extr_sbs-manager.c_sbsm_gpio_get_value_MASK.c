
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbsm_data {int client; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 struct sbsm_data* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1, unsigned int VAR_2)
{
 struct sbsm_data *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3->client, VAR_0);
 if (VAR_4 < 0)
  return VAR_4;

 return VAR_4 & FUNC_0(VAR_2);
}
