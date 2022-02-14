
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int i_dir_level; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct page*,void*) ;
 int FUNC_2 (struct inode*,struct page*,void*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct page *VAR_1,
       void *VAR_2)
{
 if (!FUNC_0(VAR_0)->i_dir_level)
  return FUNC_1(VAR_0, VAR_1, VAR_2);
 else
  return FUNC_2(VAR_0, VAR_1, VAR_2);
}
