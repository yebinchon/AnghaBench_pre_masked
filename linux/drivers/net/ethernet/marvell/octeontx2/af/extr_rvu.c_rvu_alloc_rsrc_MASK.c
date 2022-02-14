
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsrc_bmap {int max; int bmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int) ;

int FUNC_2(struct rsrc_bmap *VAR_2)
{
 int VAR_3;

 if (!VAR_2->bmap)
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_2->bmap, VAR_2->max);
 if (VAR_3 >= VAR_2->max)
  return -VAR_1;

 FUNC_0(VAR_3, VAR_2->bmap);

 return VAR_3;
}
