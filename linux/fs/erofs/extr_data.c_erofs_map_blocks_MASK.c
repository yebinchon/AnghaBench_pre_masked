
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct erofs_map_blocks {int * mpage; } ;
struct TYPE_2__ {int datalayout; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,struct erofs_map_blocks*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*,struct erofs_map_blocks*,int) ;

int FUNC_5(struct inode *VAR_0,
       struct erofs_map_blocks *VAR_1, int VAR_2)
{
 if (FUNC_1(FUNC_0(VAR_0)->datalayout)) {
  int VAR_3 = FUNC_4(VAR_0, VAR_1, VAR_2);

  if (VAR_1->mpage) {
   FUNC_3(VAR_1->mpage);
   VAR_1->mpage = ((void*)0);
  }
  return VAR_3;
 }
 return FUNC_2(VAR_0, VAR_1, VAR_2);
}
