
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_aux_drv {int addr; int get_preferred_mode; int cleanup; int name; struct via_aux_bus* bus; } ;
struct via_aux_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct via_aux_drv*) ;
 int FUNC_1 (struct via_aux_drv*) ;

void FUNC_2(struct via_aux_bus *VAR_3)
{
 struct via_aux_drv VAR_4 = {
  .bus = VAR_3,
  .addr = 0x50,
  .name = VAR_2,
  .cleanup = VAR_0,
  .get_preferred_mode = VAR_1};

 FUNC_0(&VAR_4);


 FUNC_1(&VAR_4);
}
