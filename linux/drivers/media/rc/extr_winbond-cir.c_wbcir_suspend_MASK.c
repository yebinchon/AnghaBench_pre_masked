
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbcir_data {int led; } ;
struct pnp_dev {int dummy; } ;
typedef int pm_message_t ;


 int FUNC_0 (int *) ;
 struct wbcir_data* FUNC_1 (struct pnp_dev*) ;
 int FUNC_2 (struct pnp_dev*) ;

__attribute__((used)) static int
FUNC_3(struct pnp_dev *VAR_0, pm_message_t VAR_1)
{
 struct wbcir_data *VAR_2 = FUNC_1(VAR_0);
 FUNC_0(&VAR_2->led);
 FUNC_2(VAR_0);
 return 0;
}
