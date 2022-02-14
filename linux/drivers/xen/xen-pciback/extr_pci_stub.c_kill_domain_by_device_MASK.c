
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xenbus_transaction {int dummy; } ;
struct pcistub_device {TYPE_1__* dev; TYPE_2__* pdev; } ;
struct TYPE_6__ {int otherend_id; } ;
struct TYPE_5__ {TYPE_3__* xdev; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (struct xenbus_transaction,char*,char*,char*) ;
 int FUNC_4 (struct xenbus_transaction,int ) ;
 int FUNC_5 (struct xenbus_transaction*) ;

__attribute__((used)) static void FUNC_6(struct pcistub_device *VAR_2)
{
 struct xenbus_transaction VAR_3;
 int VAR_4;
 char VAR_5[VAR_1];

 FUNC_0(!VAR_2);
 FUNC_2(VAR_5, VAR_1, "/local/domain/0/backend/pci/%d/0",
  VAR_2->pdev->xdev->otherend_id);

again:
 VAR_4 = FUNC_5(&VAR_3);
 if (VAR_4) {
  FUNC_1(&VAR_2->dev->dev,
   "error %d when start xenbus transaction\n", VAR_4);
  return;
 }

 FUNC_3(VAR_3, VAR_5, "aerState" , "aerfail");
 VAR_4 = FUNC_4(VAR_3, 0);
 if (VAR_4) {
  if (VAR_4 == -VAR_0)
   goto again;
  FUNC_1(&VAR_2->dev->dev,
   "error %d when end xenbus transaction\n", VAR_4);
  return;
 }
}
