
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tv_nsec; int tv_sec; } ;
struct TYPE_3__ {int tv_nsec; int tv_sec; } ;
struct inode {TYPE_2__ i_ctime; TYPE_1__ i_mtime; } ;
struct fuse_setattr_in {int fh; int valid; int ctimensec; int ctime; int mtimensec; int mtime; } ;
struct fuse_file {int fh; } ;
struct fuse_conn {int minor; } ;
struct fuse_attr_out {int fh; int valid; int ctimensec; int ctime; int mtimensec; int mtime; } ;
typedef int outarg ;
typedef int inarg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct fuse_conn*,int *,struct inode*,struct fuse_setattr_in*,struct fuse_setattr_in*) ;
 int FUNC_2 (struct fuse_conn*,int *) ;
 struct fuse_conn* FUNC_3 (struct inode*) ;
 int FUNC_4 (struct fuse_setattr_in*,int ,int) ;

int FUNC_5(struct inode *VAR_4, struct fuse_file *VAR_5)
{
 struct fuse_conn *VAR_6 = FUNC_3(VAR_4);
 FUNC_0(VAR_3);
 struct fuse_setattr_in VAR_7;
 struct fuse_attr_out VAR_8;

 FUNC_4(&VAR_7, 0, sizeof(VAR_7));
 FUNC_4(&VAR_8, 0, sizeof(VAR_8));

 VAR_7.valid = VAR_2;
 VAR_7.mtime = VAR_4->i_mtime.tv_sec;
 VAR_7.mtimensec = VAR_4->i_mtime.tv_nsec;
 if (VAR_6->minor >= 23) {
  VAR_7.valid |= VAR_0;
  VAR_7.ctime = VAR_4->i_ctime.tv_sec;
  VAR_7.ctimensec = VAR_4->i_ctime.tv_nsec;
 }
 if (VAR_5) {
  VAR_7.valid |= VAR_1;
  VAR_7.fh = VAR_5->fh;
 }
 FUNC_1(VAR_6, &VAR_3, VAR_4, &VAR_7, &VAR_8);

 return FUNC_2(VAR_6, &VAR_3);
}
