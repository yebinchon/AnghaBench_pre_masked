
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_dir_cache {int entries; } ;
struct inode {int dummy; } ;


 int FUNC_0 (struct ovl_dir_cache*) ;
 int FUNC_1 (int *) ;
 struct ovl_dir_cache* FUNC_2 (struct inode*) ;

void FUNC_3(struct inode *VAR_0)
{
 struct ovl_dir_cache *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1) {
  FUNC_1(&VAR_1->entries);
  FUNC_0(VAR_1);
 }
}
