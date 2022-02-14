
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct realtek_smi {int num_ports; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_mc_index ) (struct realtek_smi*,int,int*) ;} ;


 int FUNC_0 (struct realtek_smi*,int,int*) ;

int FUNC_1(struct realtek_smi *VAR_0, int VAR_1, int *VAR_2)
{
 int VAR_3;
 int VAR_4;

 *VAR_2 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_0->num_ports; VAR_4++) {
  int VAR_5 = 0;

  VAR_3 = VAR_0->ops->get_mc_index(VAR_0, VAR_4, &VAR_5);
  if (VAR_3)
   return VAR_3;

  if (VAR_1 == VAR_5) {
   *VAR_2 = 1;
   break;
  }
 }

 return 0;
}
