
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int f_ffree; int f_files; int f_bavail; int f_bfree; int f_blocks; } ;
struct TYPE_4__ {TYPE_1__ stat; } ;
union outputArgs {TYPE_2__ coda_statfs; } ;
typedef union inputArgs {int dummy; } inputArgs ;
struct kstatfs {int f_ffree; int f_files; int f_bavail; int f_bfree; int f_blocks; } ;
struct dentry {int d_sb; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int*,union inputArgs*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (union inputArgs*) ;
 int VAR_1 ;

int FUNC_5(struct dentry *VAR_2, struct kstatfs *VAR_3)
{
        union inputArgs *VAR_4;
        union outputArgs *VAR_5;
        int VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_0(VAR_1);
 FUNC_1(VAR_0);

 VAR_8 = FUNC_2(FUNC_3(VAR_2->d_sb), VAR_6, &VAR_7, VAR_4);
 if (!VAR_8) {
  VAR_3->f_blocks = VAR_5->coda_statfs.stat.f_blocks;
  VAR_3->f_bfree = VAR_5->coda_statfs.stat.f_bfree;
  VAR_3->f_bavail = VAR_5->coda_statfs.stat.f_bavail;
  VAR_3->f_files = VAR_5->coda_statfs.stat.f_files;
  VAR_3->f_ffree = VAR_5->coda_statfs.stat.f_ffree;
 }

 FUNC_4(VAR_4);
        return VAR_8;
}
