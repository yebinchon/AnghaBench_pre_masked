
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct nsim_trap_item {int dummy; } ;
struct nsim_trap_data {struct nsim_trap_item* trap_items_arr; } ;
struct nsim_dev {struct nsim_trap_data* trap_data; } ;
struct TYPE_3__ {scalar_t__ id; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static struct nsim_trap_item *
FUNC_1(struct nsim_dev *VAR_1, u16 VAR_2)
{
 struct nsim_trap_data *VAR_3 = VAR_1->trap_data;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  if (VAR_0[VAR_4].id == VAR_2)
   return &VAR_3->trap_items_arr[VAR_4];
 }

 return ((void*)0);
}
