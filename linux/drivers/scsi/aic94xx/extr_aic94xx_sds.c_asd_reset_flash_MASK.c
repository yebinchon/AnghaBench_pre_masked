
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bar; } ;
struct TYPE_4__ {TYPE_1__ flash; } ;
struct asd_ha_struct {TYPE_2__ hw_prof; } ;


 int VAR_0 ;
 int FUNC_0 (struct asd_ha_struct*) ;
 int FUNC_1 (struct asd_ha_struct*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct asd_ha_struct *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2;
 FUNC_1(VAR_1, VAR_1->hw_prof.flash.bar, VAR_0);
 VAR_2 = FUNC_0(VAR_1);

 return VAR_2;
}
