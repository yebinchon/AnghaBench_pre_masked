
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct xenbus_device {int dummy; } ;
struct xen_pvcalls_request {int dummy; } ;
struct TYPE_5__ {int req_cons; } ;
struct pvcalls_fedata {TYPE_1__ ring; int irq; struct xenbus_device* dev; } ;


 int FUNC_0 (TYPE_1__*,int ,struct xen_pvcalls_request*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct xenbus_device*,struct xen_pvcalls_request*) ;

__attribute__((used)) static void FUNC_6(struct pvcalls_fedata *VAR_0)
{
 int VAR_1, VAR_2 = 0, VAR_3 = 1;
 struct xen_pvcalls_request VAR_4;
 struct xenbus_device *VAR_5 = VAR_0->dev;

 while (VAR_3) {
  while (FUNC_2(&VAR_0->ring)) {
   FUNC_0(&VAR_0->ring,
       VAR_0->ring.req_cons++,
       &VAR_4);

   if (!FUNC_5(VAR_5, &VAR_4)) {
    FUNC_3(
     &VAR_0->ring, VAR_1);
    VAR_2 += VAR_1;
   }
  }

  if (VAR_2) {
   FUNC_4(VAR_0->irq);
   VAR_2 = 0;
  }

  FUNC_1(&VAR_0->ring, VAR_3);
 }
}
