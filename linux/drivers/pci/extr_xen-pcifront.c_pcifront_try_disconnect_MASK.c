
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcifront_device {TYPE_1__* xdev; } ;
typedef enum xenbus_state { ____Placeholder_xenbus_state } xenbus_state ;
struct TYPE_2__ {int nodename; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pcifront_device*) ;
 int FUNC_1 (struct pcifront_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_4(struct pcifront_device *VAR_3)
{
 int VAR_4 = 0;
 enum xenbus_state VAR_5;


 VAR_5 = FUNC_2(VAR_3->xdev->nodename);

 if (VAR_5 >= VAR_1)
  goto out;

 if (VAR_5 == VAR_2) {
  FUNC_1(VAR_3);
  FUNC_0(VAR_3);
 }

 VAR_4 = FUNC_3(VAR_3->xdev, VAR_0);

out:

 return VAR_4;
}
