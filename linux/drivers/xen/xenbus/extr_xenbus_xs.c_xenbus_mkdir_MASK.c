
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_transaction {int dummy; } ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 char* FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct xenbus_transaction,int ,char*,int *) ;

int FUNC_6(struct xenbus_transaction VAR_1,
   const char *VAR_2, const char *VAR_3)
{
 char *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = FUNC_4(FUNC_5(VAR_1, VAR_0, VAR_4, ((void*)0)));
 FUNC_3(VAR_4);
 return VAR_5;
}
