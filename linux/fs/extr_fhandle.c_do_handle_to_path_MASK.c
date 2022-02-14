
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int mnt; int dentry; } ;
struct file_handle {int handle_bytes; int handle_type; scalar_t__ f_handle; } ;
struct fid {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct fid*,int,int ,int ,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(int VAR_1, struct file_handle *VAR_2,
        struct path *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;

 VAR_3->mnt = FUNC_3(VAR_1);
 if (FUNC_0(VAR_3->mnt)) {
  VAR_4 = FUNC_1(VAR_3->mnt);
  goto out_err;
 }

 VAR_5 = VAR_2->handle_bytes >> 2;
 VAR_3->dentry = FUNC_2(VAR_3->mnt,
       (struct fid *)VAR_2->f_handle,
       VAR_5, VAR_2->handle_type,
       VAR_0, ((void*)0));
 if (FUNC_0(VAR_3->dentry)) {
  VAR_4 = FUNC_1(VAR_3->dentry);
  goto out_mnt;
 }
 return 0;
out_mnt:
 FUNC_4(VAR_3->mnt);
out_err:
 return VAR_4;
}
