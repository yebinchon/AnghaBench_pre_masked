
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_eth {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtk_eth*,int) ;

int FUNC_1(struct mtk_eth *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = (VAR_3 == 0) ? VAR_0 :
    VAR_1;


 VAR_4 = FUNC_0(VAR_2, VAR_5);
 if (VAR_4)
  return VAR_4;

 return 0;
}
