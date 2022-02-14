
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl {int contexts_num; } ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(struct cxl *VAR_0)
{
 int VAR_1 = FUNC_1(&VAR_0->contexts_num, -1, 0);







 if (VAR_1 != -1) {
  FUNC_2(&VAR_0->contexts_num, 0);
  FUNC_0(1, "Adapter context unlocked with %d active contexts",
       VAR_1);
 }
}
