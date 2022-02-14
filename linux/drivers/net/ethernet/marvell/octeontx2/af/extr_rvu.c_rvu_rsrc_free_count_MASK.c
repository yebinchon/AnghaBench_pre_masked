
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsrc_bmap {int max; int bmap; } ;


 int FUNC_0 (int ,int) ;

int FUNC_1(struct rsrc_bmap *VAR_0)
{
 int VAR_1;

 if (!VAR_0->bmap)
  return 0;

 VAR_1 = FUNC_0(VAR_0->bmap, VAR_0->max);
 return (VAR_0->max - VAR_1);
}
