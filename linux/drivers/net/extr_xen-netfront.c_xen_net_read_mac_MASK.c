
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xenbus_device {int nodename; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char**,int) ;
 char* FUNC_4 (int ,int ,char*,int *) ;

__attribute__((used)) static int FUNC_5(struct xenbus_device *VAR_3, u8 VAR_4[])
{
 char *VAR_5, *VAR_6, *VAR_7;
 int VAR_8;

 VAR_7 = VAR_5 = FUNC_4(VAR_2, VAR_3->nodename, "mac", ((void*)0));
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_4[VAR_8] = FUNC_3(VAR_5, &VAR_6, 16);
  if ((VAR_5 == VAR_6) || (*VAR_6 != ((VAR_8 == VAR_1-1) ? '\0' : ':'))) {
   FUNC_2(VAR_7);
   return -VAR_0;
  }
  VAR_5 = VAR_6+1;
 }

 FUNC_2(VAR_7);
 return 0;
}
