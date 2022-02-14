
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {scalar_t__ driver; } ;
struct apr_driver {int (* remove ) (struct apr_device*) ;} ;
struct TYPE_2__ {int parent; } ;
struct apr_device {int svc_id; TYPE_1__ dev; } ;
struct apr {int svcs_lock; int svcs_idr; } ;


 struct apr* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct apr_device*) ;
 struct apr_device* FUNC_5 (struct device*) ;
 struct apr_driver* FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_0)
{
 struct apr_device *VAR_1 = FUNC_5(VAR_0);
 struct apr_driver *VAR_2;
 struct apr *VAR_3 = FUNC_0(VAR_1->dev.parent);

 if (VAR_0->driver) {
  VAR_2 = FUNC_6(VAR_0->driver);
  if (VAR_2->remove)
   VAR_2->remove(VAR_1);
  FUNC_2(&VAR_3->svcs_lock);
  FUNC_1(&VAR_3->svcs_idr, VAR_1->svc_id);
  FUNC_3(&VAR_3->svcs_lock);
 }

 return 0;
}
