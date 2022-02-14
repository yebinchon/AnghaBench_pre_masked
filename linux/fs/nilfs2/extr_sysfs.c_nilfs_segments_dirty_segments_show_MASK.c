
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_sb; int ns_segctor_sem; int ns_sufile; } ;
struct nilfs_sustat {int ss_ndirtysegs; } ;
struct nilfs_segments_attr {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,char*,int) ;
 int FUNC_2 (int ,struct nilfs_sustat*) ;
 int FUNC_3 (char*,int ,char*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t
FUNC_5(struct nilfs_segments_attr *VAR_2,
        struct the_nilfs *VAR_3,
        char *VAR_4)
{
 struct nilfs_sustat VAR_5;
 int VAR_6;

 FUNC_0(&VAR_3->ns_segctor_sem);
 VAR_6 = FUNC_2(VAR_3->ns_sufile, &VAR_5);
 FUNC_4(&VAR_3->ns_segctor_sem);
 if (VAR_6 < 0) {
  FUNC_1(VAR_3->ns_sb, VAR_0,
     "unable to get segment stat: err=%d", VAR_6);
  return VAR_6;
 }

 return FUNC_3(VAR_4, VAR_1, "%llu\n", VAR_5.ss_ndirtysegs);
}
