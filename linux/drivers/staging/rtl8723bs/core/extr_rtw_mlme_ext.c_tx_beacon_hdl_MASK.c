
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adapter {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct adapter*,int *) ;
 scalar_t__ FUNC_2 (struct adapter*) ;

u8 FUNC_3(struct adapter *VAR_3, unsigned char *VAR_4)
{
 if (FUNC_2(VAR_3) == VAR_2) {
  FUNC_0("issue_beacon, fail!\n");
  return VAR_0;
 }


 FUNC_1(VAR_3, ((void*)0));

 return VAR_1;
}
