
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int nodename; } ;


 scalar_t__ FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 unsigned long FUNC_3 (char*,char**,int) ;
 char* FUNC_4 (int ,int ,char*,int *) ;

__attribute__((used)) static void FUNC_5(struct xenbus_device *VAR_1,
         unsigned long *VAR_2, unsigned long *VAR_3)
{
 char *VAR_4, *VAR_5;
 unsigned long VAR_6, VAR_7;
 char *VAR_8;


 *VAR_2 = ~0UL;
 *VAR_3 = 0;

 VAR_8 = FUNC_4(VAR_0, VAR_1->nodename, "rate", ((void*)0));
 if (FUNC_0(VAR_8))
  return;

 VAR_4 = VAR_8;
 VAR_6 = FUNC_3(VAR_4, &VAR_5, 10);
 if ((VAR_4 == VAR_5) || (*VAR_5 != ','))
  goto fail;

 VAR_4 = VAR_5 + 1;
 VAR_7 = FUNC_3(VAR_4, &VAR_5, 10);
 if ((VAR_4 == VAR_5) || (*VAR_5 != '\0'))
  goto fail;

 *VAR_2 = VAR_6;
 *VAR_3 = VAR_7;

 FUNC_1(VAR_8);
 return;

 fail:
 FUNC_2("Failed to parse network rate limit. Traffic unlimited.\n");
 FUNC_1(VAR_8);
}
