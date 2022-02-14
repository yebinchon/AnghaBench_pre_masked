
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int ,int*) ;

__attribute__((used)) static int FUNC_2(void)
{
 char VAR_0[4];
 int VAR_1;


 if (FUNC_0("bootpartition", VAR_0, sizeof(VAR_0)) > 0) {
  if (!FUNC_1(VAR_0, 0, &VAR_1))
   return VAR_1;
 }

 return 0;
}
