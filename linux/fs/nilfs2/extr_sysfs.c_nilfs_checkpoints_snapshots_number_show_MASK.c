
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_sb; int ns_segctor_sem; int ns_cpfile; } ;
struct nilfs_cpstat {int cs_nsss; } ;
struct nilfs_checkpoints_attr {int dummy; } ;
typedef int ssize_t ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct nilfs_cpstat*) ;
 int FUNC_2 (int ,int ,char*,int) ;
 int FUNC_3 (char*,int ,char*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t
FUNC_5(struct nilfs_checkpoints_attr *VAR_2,
     struct the_nilfs *VAR_3,
     char *VAR_4)
{
 __u64 VAR_5;
 struct nilfs_cpstat VAR_6;
 int VAR_7;

 FUNC_0(&VAR_3->ns_segctor_sem);
 VAR_7 = FUNC_1(VAR_3->ns_cpfile, &VAR_6);
 FUNC_4(&VAR_3->ns_segctor_sem);
 if (VAR_7 < 0) {
  FUNC_2(VAR_3->ns_sb, VAR_0,
     "unable to get checkpoint stat: err=%d", VAR_7);
  return VAR_7;
 }

 VAR_5 = VAR_6.cs_nsss;

 return FUNC_3(VAR_4, VAR_1, "%llu\n", VAR_5);
}
