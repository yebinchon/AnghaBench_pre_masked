
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_transaction {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xenbus_transaction,int ,char*,int *) ;

int FUNC_3(struct xenbus_transaction VAR_1, int VAR_2)
{
 char VAR_3[2];

 if (VAR_2)
  FUNC_0(VAR_3, "F");
 else
  FUNC_0(VAR_3, "T");

 return FUNC_1(FUNC_2(VAR_1, VAR_0, VAR_3, ((void*)0)));
}
