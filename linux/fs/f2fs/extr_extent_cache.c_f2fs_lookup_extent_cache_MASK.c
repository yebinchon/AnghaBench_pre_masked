
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct extent_info {int dummy; } ;
typedef int pgoff_t ;


 int FUNC_0 (struct inode*,int ,struct extent_info*) ;
 int FUNC_1 (struct inode*) ;

bool FUNC_2(struct inode *VAR_0, pgoff_t VAR_1,
     struct extent_info *VAR_2)
{
 if (!FUNC_1(VAR_0))
  return 0;

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
