
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_eint {int domain; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long) ;

int FUNC_1(struct mtk_eint *VAR_1, unsigned long VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1->domain, VAR_2);
 if (!VAR_3)
  return -VAR_0;

 return VAR_3;
}
