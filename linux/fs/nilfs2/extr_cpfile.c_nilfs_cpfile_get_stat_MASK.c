
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_cpstat {void* cs_nsss; void* cs_ncps; int cs_cno; } ;
struct nilfs_cpfile_header {int ch_nsnapshots; int ch_ncheckpoints; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_page; } ;
struct TYPE_2__ {int mi_sem; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int ) ;
 struct nilfs_cpfile_header* FUNC_6 (struct inode*,struct buffer_head*,void*) ;
 int FUNC_7 (struct inode*,struct buffer_head**) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct inode *VAR_0, struct nilfs_cpstat *VAR_1)
{
 struct buffer_head *VAR_2;
 struct nilfs_cpfile_header *VAR_3;
 void *VAR_4;
 int VAR_5;

 FUNC_2(&FUNC_0(VAR_0)->mi_sem);

 VAR_5 = FUNC_7(VAR_0, &VAR_2);
 if (VAR_5 < 0)
  goto out_sem;
 VAR_4 = FUNC_3(VAR_2->b_page);
 VAR_3 = FUNC_6(VAR_0, VAR_2, VAR_4);
 VAR_1->cs_cno = FUNC_8(VAR_0);
 VAR_1->cs_ncps = FUNC_5(VAR_3->ch_ncheckpoints);
 VAR_1->cs_nsss = FUNC_5(VAR_3->ch_nsnapshots);
 FUNC_4(VAR_4);
 FUNC_1(VAR_2);

 out_sem:
 FUNC_9(&FUNC_0(VAR_0)->mi_sem);
 return VAR_5;
}
