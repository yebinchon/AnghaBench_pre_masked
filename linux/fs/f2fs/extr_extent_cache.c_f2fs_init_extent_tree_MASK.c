
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct f2fs_extent {int dummy; } ;
struct TYPE_2__ {int extent_tree; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*,struct f2fs_extent*) ;
 int FUNC_2 (struct inode*,int ) ;

bool FUNC_3(struct inode *VAR_1, struct f2fs_extent *VAR_2)
{
 bool VAR_3 = FUNC_1(VAR_1, VAR_2);

 if (!FUNC_0(VAR_1)->extent_tree)
  FUNC_2(VAR_1, VAR_0);

 return VAR_3;
}
