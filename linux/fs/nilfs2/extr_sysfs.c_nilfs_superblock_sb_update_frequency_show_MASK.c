
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {unsigned int ns_sb_update_freq; int ns_sem; } ;
struct nilfs_superblock_attr {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,char*,unsigned int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ssize_t
FUNC_3(struct nilfs_superblock_attr *VAR_1,
         struct the_nilfs *VAR_2,
         char *VAR_3)
{
 unsigned int VAR_4;

 FUNC_0(&VAR_2->ns_sem);
 VAR_4 = VAR_2->ns_sb_update_freq;
 FUNC_2(&VAR_2->ns_sem);

 return FUNC_1(VAR_3, VAR_0, "%u\n", VAR_4);
}
