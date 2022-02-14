
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct domain_device {scalar_t__ lldd_dev; TYPE_2__* port; } ;
struct asd_ha_struct {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ha; } ;
struct TYPE_3__ {struct asd_ha_struct* lldd_ha; } ;


 int VAR_0 ;
 int FUNC_0 (struct asd_ha_struct*,int,int,int) ;
 int FUNC_1 (struct asd_ha_struct*) ;

__attribute__((used)) static int FUNC_2(struct domain_device *VAR_1)
{
 struct asd_ha_struct *VAR_2 = VAR_1->port->ha->lldd_ha;
 int VAR_3, VAR_4;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 for (VAR_4 = 0; VAR_4 < 32; VAR_4 += 2)
  FUNC_0(VAR_2, VAR_3, VAR_4, 0xFFFF);

 FUNC_0(VAR_2, (int) (unsigned long) VAR_1->lldd_dev,
          VAR_0, VAR_3);

 return 0;
}
