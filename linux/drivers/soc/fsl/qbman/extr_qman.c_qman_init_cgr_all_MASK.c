
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qman_cgr {scalar_t__ cgrid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*) ;
 scalar_t__ FUNC_1 (struct qman_cgr*,int ,int *) ;

void FUNC_2(void)
{
 struct qman_cgr VAR_2;
 int VAR_3 = 0;

 for (VAR_2.cgrid = 0; VAR_2.cgrid < VAR_0; VAR_2.cgrid++) {
  if (FUNC_1(&VAR_2, VAR_1, ((void*)0)))
   VAR_3++;
 }

 if (VAR_3)
  FUNC_0("Warning: %d error%s while initialising CGR h/w\n",
         VAR_3, (VAR_3 > 1) ? "s" : "");
}
