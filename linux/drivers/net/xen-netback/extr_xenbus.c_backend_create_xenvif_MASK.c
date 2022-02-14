
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenvif {struct backend_info* be; } ;
struct TYPE_2__ {int kobj; } ;
struct xenbus_device {TYPE_1__ dev; int otherend_id; int nodename; } ;
struct backend_info {struct xenvif* vif; struct xenbus_device* dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct xenvif*) ;
 int VAR_1 ;
 int FUNC_1 (struct xenvif*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct xenbus_device*,int,char*) ;
 int FUNC_4 (int ,int ,char*,char*,long*) ;
 struct xenvif* FUNC_5 (TYPE_1__*,int ,long) ;

__attribute__((used)) static int FUNC_6(struct backend_info *VAR_3)
{
 int VAR_4;
 long VAR_5;
 struct xenbus_device *VAR_6 = VAR_3->dev;
 struct xenvif *VAR_7;

 if (VAR_3->vif != ((void*)0))
  return 0;

 VAR_4 = FUNC_4(VAR_2, VAR_6->nodename, "handle", "%li", &VAR_5);
 if (VAR_4 != 1) {
  FUNC_3(VAR_6, VAR_4, "reading handle");
  return (VAR_4 < 0) ? VAR_4 : -VAR_0;
 }

 VAR_7 = FUNC_5(&VAR_6->dev, VAR_6->otherend_id, VAR_5);
 if (FUNC_0(VAR_7)) {
  VAR_4 = FUNC_1(VAR_7);
  FUNC_3(VAR_6, VAR_4, "creating interface");
  return VAR_4;
 }
 VAR_3->vif = VAR_7;
 VAR_7->be = VAR_3;

 FUNC_2(&VAR_6->dev.kobj, VAR_1);
 return 0;
}
