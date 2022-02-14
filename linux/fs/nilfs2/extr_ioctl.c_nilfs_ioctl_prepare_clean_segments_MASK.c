
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_sb; } ;
struct nilfs_argv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct the_nilfs*,struct nilfs_argv*,void*) ;
 int FUNC_1 (struct the_nilfs*,struct nilfs_argv*,void*) ;
 int FUNC_2 (struct the_nilfs*,struct nilfs_argv*,void*) ;
 int FUNC_3 (int ,int ,char*,int,char const*) ;

int FUNC_4(struct the_nilfs *VAR_1,
           struct nilfs_argv *VAR_2, void **VAR_3)
{
 const char *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, &VAR_2[1], VAR_3[1]);
 if (VAR_5 < 0) {




  VAR_4 = "cannot delete checkpoints";
  goto failed;
 }
 VAR_5 = FUNC_1(VAR_1, &VAR_2[2], VAR_3[2]);
 if (VAR_5 < 0) {




  VAR_4 = "cannot delete virtual blocks from DAT file";
  goto failed;
 }
 VAR_5 = FUNC_2(VAR_1, &VAR_2[3], VAR_3[3]);
 if (VAR_5 < 0) {



  VAR_4 = "cannot mark copying blocks dirty";
  goto failed;
 }
 return 0;

 failed:
 FUNC_3(VAR_1->ns_sb, VAR_0, "error %d preparing GC: %s", VAR_5,
    VAR_4);
 return VAR_5;
}
