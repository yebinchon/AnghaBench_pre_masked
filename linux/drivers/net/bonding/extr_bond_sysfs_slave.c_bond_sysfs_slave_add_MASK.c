
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct slave_attribute {int attr; } ;
struct slave {int kobj; TYPE_2__* dev; } ;
struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (int *,int *,int *,char*) ;
 int FUNC_1 (int *) ;
 struct slave_attribute** VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;

int FUNC_3(struct slave *VAR_2)
{
 const struct slave_attribute **VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_2->kobj, &VAR_1,
       &(VAR_2->dev->dev.kobj), "bonding_slave");
 if (VAR_4)
  return VAR_4;

 for (VAR_3 = VAR_0; *VAR_3; ++VAR_3) {
  VAR_4 = FUNC_2(&VAR_2->kobj, &((*VAR_3)->attr));
  if (VAR_4) {
   FUNC_1(&VAR_2->kobj);
   return VAR_4;
  }
 }

 return 0;
}
