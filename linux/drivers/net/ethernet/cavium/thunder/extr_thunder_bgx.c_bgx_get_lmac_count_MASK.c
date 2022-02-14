
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bgx {int lmac_count; } ;


 struct bgx* FUNC_0 (int,int) ;

int FUNC_1(int VAR_0, int VAR_1)
{
 struct bgx *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2->lmac_count;

 return 0;
}
