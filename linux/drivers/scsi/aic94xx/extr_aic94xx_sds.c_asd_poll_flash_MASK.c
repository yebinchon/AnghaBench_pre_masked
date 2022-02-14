
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int bar; } ;
struct TYPE_4__ {TYPE_1__ flash; } ;
struct asd_ha_struct {TYPE_2__ hw_prof; } ;


 int VAR_0 ;
 int FUNC_0 (struct asd_ha_struct*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct asd_ha_struct *VAR_1)
{
 int VAR_2;
 u8 VAR_3;

 for (VAR_2 = 5000; VAR_2 > 0; VAR_2--) {
  VAR_3 = FUNC_0(VAR_1, VAR_1->hw_prof.flash.bar);
  VAR_3 ^= FUNC_0(VAR_1, VAR_1->hw_prof.flash.bar);
  if (!VAR_3)
   return 0;
  FUNC_1(5);
 }
 return -VAR_0;
}
