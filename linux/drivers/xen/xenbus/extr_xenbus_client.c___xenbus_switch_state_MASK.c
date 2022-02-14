
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_transaction {int dummy; } ;
struct xenbus_device {int state; int nodename; } ;
typedef enum xenbus_state { ____Placeholder_xenbus_state } xenbus_state ;


 int VAR_0 ;
 int FUNC_0 (struct xenbus_transaction,int ,char*,char*,int) ;
 int FUNC_1 (struct xenbus_transaction,int ,char*,char*,int*) ;
 int FUNC_2 (struct xenbus_device*,int,int,char*) ;
 int FUNC_3 (struct xenbus_transaction,int) ;
 int FUNC_4 (struct xenbus_transaction*) ;

__attribute__((used)) static int
FUNC_5(struct xenbus_device *VAR_1,
        enum xenbus_state VAR_2, int VAR_3)
{
 struct xenbus_transaction VAR_4;
 int VAR_5;
 int VAR_6, VAR_7;

 if (VAR_2 == VAR_1->state)
  return 0;

again:
 VAR_7 = 1;

 VAR_6 = FUNC_4(&VAR_4);
 if (VAR_6) {
  FUNC_2(VAR_1, VAR_3, VAR_6, "starting transaction");
  return 0;
 }

 VAR_6 = FUNC_1(VAR_4, VAR_1->nodename, "state", "%d", &VAR_5);
 if (VAR_6 != 1)
  goto abort;

 VAR_6 = FUNC_0(VAR_4, VAR_1->nodename, "state", "%d", VAR_2);
 if (VAR_6) {
  FUNC_2(VAR_1, VAR_3, VAR_6, "writing new state");
  goto abort;
 }

 VAR_7 = 0;
abort:
 VAR_6 = FUNC_3(VAR_4, VAR_7);
 if (VAR_6) {
  if (VAR_6 == -VAR_0 && !VAR_7)
   goto again;
  FUNC_2(VAR_1, VAR_3, VAR_6, "ending transaction");
 } else
  VAR_1->state = VAR_2;

 return 0;
}
