
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_3, VAR_4 = 0;

 VAR_2 = 1;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_4 = FUNC_1(VAR_1, &VAR_0[VAR_3]);

  if (VAR_4)
   break;
 }

 if (VAR_4) {
  while (--VAR_3 >= 0)
   FUNC_2(VAR_1, &VAR_0[VAR_3]);

  VAR_2 = 0;
 }

 return 0;
}
