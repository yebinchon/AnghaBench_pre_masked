
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int watch ;
struct xenbus_watch {int list; int node; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,char*,long) ;
 int FUNC_8 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_9 (int ,char*) ;
 int VAR_2 ;

int FUNC_10(struct xenbus_watch *VAR_3)
{

 char VAR_4[sizeof(VAR_3) * 2 + 1];
 int VAR_5;

 FUNC_7(VAR_4, "%lX", (long)VAR_3);

 FUNC_1(&VAR_2);

 FUNC_5(&VAR_1);
 FUNC_0(FUNC_2(VAR_4));
 FUNC_3(&VAR_3->list, &VAR_0);
 FUNC_6(&VAR_1);

 VAR_5 = FUNC_9(VAR_3->node, VAR_4);

 if (VAR_5) {
  FUNC_5(&VAR_1);
  FUNC_4(&VAR_3->list);
  FUNC_6(&VAR_1);
 }

 FUNC_8(&VAR_2);

 return VAR_5;
}
