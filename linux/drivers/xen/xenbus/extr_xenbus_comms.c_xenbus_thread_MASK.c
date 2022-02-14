
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_7(void *VAR_3)
{
 int VAR_4;

 while (!FUNC_0()) {
  if (FUNC_5(VAR_1, FUNC_6()))
   continue;

  VAR_4 = FUNC_2();
  if (VAR_4 == -VAR_0)
   FUNC_4();
  else if (VAR_4)
   FUNC_1("error %d while reading message\n",
         VAR_4);

  VAR_4 = FUNC_3();
  if (VAR_4)
   FUNC_1("error %d while writing message\n",
         VAR_4);
 }

 VAR_2 = ((void*)0);
 return 0;
}
