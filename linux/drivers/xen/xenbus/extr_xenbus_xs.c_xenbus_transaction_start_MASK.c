
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_transaction {int id; } ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int *,int ) ;
 char* FUNC_4 (int ,int ,char*,int *) ;

int FUNC_5(struct xenbus_transaction *VAR_2)
{
 char *VAR_3;

 VAR_3 = FUNC_4(VAR_0, VAR_1, "", ((void*)0));
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_2->id = FUNC_3(VAR_3, ((void*)0), 0);
 FUNC_2(VAR_3);
 return 0;
}
