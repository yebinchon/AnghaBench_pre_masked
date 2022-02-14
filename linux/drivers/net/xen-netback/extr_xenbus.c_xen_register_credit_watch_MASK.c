
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* node; int * callback; } ;
struct xenvif {TYPE_1__ credit_watch; } ;
struct xenbus_device {char* nodename; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,unsigned int,char*,char*) ;
 int FUNC_5 (char*) ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_6(struct xenbus_device *VAR_4,
         struct xenvif *VAR_5)
{
 int VAR_6 = 0;
 char *VAR_7;
 unsigned VAR_8 = FUNC_5(VAR_4->nodename) + sizeof("/rate");

 if (VAR_5->credit_watch.node)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_8, VAR_2);
 if (!VAR_7)
  return -VAR_1;
 FUNC_4(VAR_7, VAR_8, "%s/rate", VAR_4->nodename);
 VAR_5->credit_watch.node = VAR_7;
 VAR_5->credit_watch.callback = VAR_3;
 VAR_6 = FUNC_3(&VAR_5->credit_watch);
 if (VAR_6) {
  FUNC_2("Failed to set watcher %s\n", VAR_5->credit_watch.node);
  FUNC_0(VAR_7);
  VAR_5->credit_watch.node = ((void*)0);
  VAR_5->credit_watch.callback = ((void*)0);
 }
 return VAR_6;
}
