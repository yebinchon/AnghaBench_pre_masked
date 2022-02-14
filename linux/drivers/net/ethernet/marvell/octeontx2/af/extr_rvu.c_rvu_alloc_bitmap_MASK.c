
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsrc_bmap {int bmap; int max; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int ) ;

int FUNC_2(struct rsrc_bmap *VAR_2)
{
 VAR_2->bmap = FUNC_1(FUNC_0(VAR_2->max),
        sizeof(long), VAR_1);
 if (!VAR_2->bmap)
  return -VAR_0;
 return 0;
}
