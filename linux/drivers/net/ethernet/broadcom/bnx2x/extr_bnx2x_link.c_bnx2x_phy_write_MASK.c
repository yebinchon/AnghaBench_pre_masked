
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct link_params {size_t num_phys; TYPE_1__* phy; int bp; } ;
struct TYPE_2__ {size_t addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,size_t,int ,int ) ;

int FUNC_1(struct link_params *VAR_1, u8 VAR_2,
      u8 VAR_3, u16 VAR_4, u16 VAR_5)
{
 u8 VAR_6;



 for (VAR_6 = 0; VAR_6 < VAR_1->num_phys; VAR_6++) {
  if (VAR_1->phy[VAR_6].addr == VAR_2) {
   return FUNC_0(VAR_1->bp,
      &VAR_1->phy[VAR_6], VAR_3,
      VAR_4, VAR_5);
  }
 }
 return -VAR_0;
}
