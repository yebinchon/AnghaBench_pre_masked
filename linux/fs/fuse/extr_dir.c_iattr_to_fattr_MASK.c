
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int tv_nsec; int tv_sec; } ;
struct TYPE_5__ {int tv_nsec; int tv_sec; } ;
struct TYPE_4__ {int tv_nsec; int tv_sec; } ;
struct iattr {unsigned int ia_valid; TYPE_3__ ia_ctime; TYPE_2__ ia_mtime; TYPE_1__ ia_atime; int ia_size; int ia_gid; int ia_uid; int ia_mode; } ;
struct fuse_setattr_in {int ctimensec; int ctime; int valid; int mtimensec; int mtime; int atimensec; int atime; int size; int gid; int uid; int mode; } ;
struct fuse_conn {int user_ns; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (unsigned int,int) ;

__attribute__((used)) static void FUNC_3(struct fuse_conn *VAR_18, struct iattr *VAR_19,
      struct fuse_setattr_in *VAR_20, bool VAR_21)
{
 unsigned VAR_22 = VAR_19->ia_valid;

 if (VAR_22 & VAR_4)
  VAR_20->valid |= VAR_13, VAR_20->mode = VAR_19->ia_mode;
 if (VAR_22 & VAR_8)
  VAR_20->valid |= VAR_17, VAR_20->uid = FUNC_1(VAR_18->user_ns, VAR_19->ia_uid);
 if (VAR_22 & VAR_3)
  VAR_20->valid |= VAR_12, VAR_20->gid = FUNC_0(VAR_18->user_ns, VAR_19->ia_gid);
 if (VAR_22 & VAR_7)
  VAR_20->valid |= VAR_16, VAR_20->size = VAR_19->ia_size;
 if (VAR_22 & VAR_0) {
  VAR_20->valid |= VAR_9;
  VAR_20->atime = VAR_19->ia_atime.tv_sec;
  VAR_20->atimensec = VAR_19->ia_atime.tv_nsec;
  if (!(VAR_22 & VAR_1))
   VAR_20->valid |= VAR_10;
 }
 if ((VAR_22 & VAR_5) && FUNC_2(VAR_22, VAR_21)) {
  VAR_20->valid |= VAR_14;
  VAR_20->mtime = VAR_19->ia_mtime.tv_sec;
  VAR_20->mtimensec = VAR_19->ia_mtime.tv_nsec;
  if (!(VAR_22 & VAR_6) && !VAR_21)
   VAR_20->valid |= VAR_15;
 }
 if ((VAR_22 & VAR_2) && VAR_21) {
  VAR_20->valid |= VAR_11;
  VAR_20->ctime = VAR_19->ia_ctime.tv_sec;
  VAR_20->ctimensec = VAR_19->ia_ctime.tv_nsec;
 }
}
