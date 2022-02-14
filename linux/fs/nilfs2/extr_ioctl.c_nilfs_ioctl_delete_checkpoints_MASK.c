
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {struct inode* ns_cpfile; } ;
struct nilfs_period {int p_end; int p_start; } ;
struct nilfs_argv {size_t v_nmembs; } ;
struct inode {int dummy; } ;


 int FUNC_0 (struct inode*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct the_nilfs *VAR_0,
       struct nilfs_argv *VAR_1, void *VAR_2)
{
 size_t VAR_3 = VAR_1->v_nmembs;
 struct inode *VAR_4 = VAR_0->ns_cpfile;
 struct nilfs_period *VAR_5 = VAR_2;
 int VAR_6, VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_6 = FUNC_0(
   VAR_4, VAR_5[VAR_7].p_start, VAR_5[VAR_7].p_end);
  if (VAR_6 < 0)
   return VAR_6;
 }
 return VAR_3;
}
