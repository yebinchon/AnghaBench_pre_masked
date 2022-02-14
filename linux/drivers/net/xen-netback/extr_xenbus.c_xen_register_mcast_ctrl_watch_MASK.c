
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* node; int * callback; } ;
struct xenvif {TYPE_1__ mcast_ctrl_watch; } ;
struct xenbus_device {char* otherend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,unsigned int,char*,char*) ;
 int FUNC_6 (char*) ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_7(struct xenbus_device *VAR_4,
      struct xenvif *VAR_5)
{
 int VAR_6 = 0;
 char *VAR_7;
 unsigned VAR_8 = FUNC_6(VAR_4->otherend) +
  sizeof("/request-multicast-control");

 if (VAR_5->mcast_ctrl_watch.node) {
  FUNC_3("Watch is already registered\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_1(VAR_8, VAR_2);
 if (!VAR_7) {
  FUNC_2("Failed to allocate memory for watch\n");
  return -VAR_1;
 }
 FUNC_5(VAR_7, VAR_8, "%s/request-multicast-control",
   VAR_4->otherend);
 VAR_5->mcast_ctrl_watch.node = VAR_7;
 VAR_5->mcast_ctrl_watch.callback = VAR_3;
 VAR_6 = FUNC_4(&VAR_5->mcast_ctrl_watch);
 if (VAR_6) {
  FUNC_2("Failed to set watcher %s\n",
         VAR_5->mcast_ctrl_watch.node);
  FUNC_0(VAR_7);
  VAR_5->mcast_ctrl_watch.node = ((void*)0);
  VAR_5->mcast_ctrl_watch.callback = ((void*)0);
 }
 return VAR_6;
}
