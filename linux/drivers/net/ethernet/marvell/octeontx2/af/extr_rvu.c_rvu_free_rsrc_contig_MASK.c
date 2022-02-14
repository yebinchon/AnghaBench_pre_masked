
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsrc_bmap {int max; int bmap; } ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct rsrc_bmap *VAR_0, int VAR_1, int VAR_2)
{
 if (!VAR_0->bmap)
  return;
 if (VAR_2 >= VAR_0->max)
  return;

 FUNC_0(VAR_0->bmap, VAR_2, VAR_1);
}
