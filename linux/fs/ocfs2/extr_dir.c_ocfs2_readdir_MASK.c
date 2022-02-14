
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_3__ {int mnt; } ;
struct file {int f_version; TYPE_1__ f_path; } ;
struct dir_context {int dummy; } ;
struct TYPE_4__ {scalar_t__ ip_blkno; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct file*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct inode*,int *,struct dir_context*,int) ;
 int FUNC_4 (struct inode*,int *,int ) ;
 int FUNC_5 (struct inode*,int ,int*,int) ;
 int FUNC_6 (struct inode*,int) ;
 int FUNC_7 (unsigned long long) ;

int FUNC_8(struct file *VAR_1, struct dir_context *VAR_2)
{
 int VAR_3 = 0;
 struct inode *VAR_4 = FUNC_1(VAR_1);
 int VAR_5 = 0;

 FUNC_7((unsigned long long)FUNC_0(VAR_4)->ip_blkno);

 VAR_3 = FUNC_5(VAR_4, VAR_1->f_path.mnt, &VAR_5, 1);
 if (VAR_5 && VAR_3 >= 0) {



  FUNC_6(VAR_4, 1);
  VAR_5 = 0;
  VAR_3 = FUNC_4(VAR_4, ((void*)0), 0);
 }
 if (VAR_3 < 0) {
  if (VAR_3 != -VAR_0)
   FUNC_2(VAR_3);

  goto bail_nolock;
 }

 VAR_3 = FUNC_3(VAR_4, &VAR_1->f_version, VAR_2, 0);

 FUNC_6(VAR_4, VAR_5);
 if (VAR_3)
  FUNC_2(VAR_3);

bail_nolock:

 return VAR_3;
}
