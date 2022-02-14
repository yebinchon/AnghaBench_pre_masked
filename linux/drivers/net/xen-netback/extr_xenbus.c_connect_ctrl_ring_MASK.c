
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenvif {int dummy; } ;
struct xenbus_device {int otherend; } ;
struct backend_info {struct xenvif* vif; struct xenbus_device* dev; } ;
typedef unsigned int grant_ref_t ;


 int VAR_0 ;
 int FUNC_0 (struct xenbus_device*,int,char*,unsigned int,...) ;
 int FUNC_1 (int ,int ,char*,char*,unsigned int*) ;
 int FUNC_2 (struct xenvif*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct backend_info *VAR_1)
{
 struct xenbus_device *VAR_2 = VAR_1->dev;
 struct xenvif *VAR_3 = VAR_1->vif;
 unsigned int VAR_4;
 grant_ref_t VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_0, VAR_2->otherend,
      "ctrl-ring-ref", "%u", &VAR_4);
 if (VAR_7 < 0)
  goto done;

 VAR_5 = VAR_4;

 VAR_7 = FUNC_1(VAR_0, VAR_2->otherend,
      "event-channel-ctrl", "%u", &VAR_4);
 if (VAR_7 < 0) {
  FUNC_0(VAR_2, VAR_7,
     "reading %s/event-channel-ctrl",
     VAR_2->otherend);
  goto fail;
 }

 VAR_6 = VAR_4;

 VAR_7 = FUNC_2(VAR_3, VAR_5, VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_2, VAR_7,
     "mapping shared-frame %u port %u",
     VAR_5, VAR_6);
  goto fail;
 }

done:
 return 0;

fail:
 return VAR_7;
}
