
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tv_nsec; int tv_sec; } ;
struct TYPE_3__ {int tv_nsec; int tv_sec; } ;
struct inode {int i_mode; TYPE_2__ i_ctime; TYPE_1__ i_mtime; int i_size; } ;
struct fuse_attr {int mode; int rdev; int ctimensec; int ctime; int mtimensec; int mtime; int size; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*,int,int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(struct inode *VAR_1, struct fuse_attr *VAR_2)
{
 VAR_1->i_mode = VAR_2->mode & VAR_0;
 VAR_1->i_size = VAR_2->size;
 VAR_1->i_mtime.tv_sec = VAR_2->mtime;
 VAR_1->i_mtime.tv_nsec = VAR_2->mtimensec;
 VAR_1->i_ctime.tv_sec = VAR_2->ctime;
 VAR_1->i_ctime.tv_nsec = VAR_2->ctimensec;
 if (FUNC_6(VAR_1->i_mode)) {
  FUNC_8(VAR_1);
  FUNC_10(VAR_1);
 } else if (FUNC_3(VAR_1->i_mode))
  FUNC_9(VAR_1);
 else if (FUNC_5(VAR_1->i_mode))
  FUNC_11(VAR_1);
 else if (FUNC_2(VAR_1->i_mode) || FUNC_1(VAR_1->i_mode) ||
   FUNC_4(VAR_1->i_mode) || FUNC_7(VAR_1->i_mode)) {
  FUNC_8(VAR_1);
  FUNC_12(VAR_1, VAR_1->i_mode,
       FUNC_13(VAR_2->rdev));
 } else
  FUNC_0();
}
