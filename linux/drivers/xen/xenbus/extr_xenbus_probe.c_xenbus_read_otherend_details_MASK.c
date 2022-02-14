
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int nodename; int otherend; int otherend_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xenbus_device*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct xenbus_device*,int,char*,int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int ,int ,char*,char*,int *,char*,int *,int *,int *) ;

int FUNC_5(struct xenbus_device *VAR_2,
     char *VAR_3, char *VAR_4)
{
 int VAR_5 = FUNC_4(VAR_1, VAR_2->nodename,
    VAR_3, "%i", &VAR_2->otherend_id,
    VAR_4, ((void*)0), &VAR_2->otherend,
    ((void*)0));
 if (VAR_5) {
  FUNC_2(VAR_2, VAR_5,
     "reading other end details from %s",
     VAR_2->nodename);
  return VAR_5;
 }
 if (FUNC_1(VAR_2->otherend) == 0 ||
     !FUNC_3(VAR_1, VAR_2->otherend, "")) {
  FUNC_2(VAR_2, -VAR_0,
     "unable to read other end from %s.  "
     "missing or inaccessible.",
     VAR_2->nodename);
  FUNC_0(VAR_2);
  return -VAR_0;
 }

 return 0;
}
