
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* time64_t ;
struct orangefs_inode_s {int attr_valid; } ;
struct TYPE_4__ {scalar_t__ tv_sec; } ;
struct TYPE_3__ {scalar_t__ tv_sec; } ;
struct inode {int i_mode; TYPE_2__ i_mtime; TYPE_1__ i_atime; int i_gid; int i_uid; } ;
struct ORANGEFS_sys_attr_s {int mask; int perms; void* mtime; void* atime; int group; int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 struct orangefs_inode_s* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int VAR_17 ;

__attribute__((used)) static inline void FUNC_5(struct inode *VAR_18,
    struct ORANGEFS_sys_attr_s *VAR_19)
{
 struct orangefs_inode_s *VAR_20 = FUNC_0(VAR_18);
 VAR_19->mask = 0;
 if (VAR_20->attr_valid & VAR_7) {
  VAR_19->owner = FUNC_3(&VAR_17, VAR_18->i_uid);
  VAR_19->mask |= VAR_16;
  FUNC_4(VAR_8, "(UID) %d\n", VAR_19->owner);
 }
 if (VAR_20->attr_valid & VAR_3) {
  VAR_19->group = FUNC_2(&VAR_17, VAR_18->i_gid);
  VAR_19->mask |= VAR_12;
  FUNC_4(VAR_8, "(GID) %d\n", VAR_19->group);
 }

 if (VAR_20->attr_valid & VAR_0) {
  VAR_19->mask |= VAR_9;
  if (VAR_20->attr_valid & VAR_1) {
   VAR_19->atime = (time64_t)VAR_18->i_atime.tv_sec;
   VAR_19->mask |= VAR_10;
  }
 }
 if (VAR_20->attr_valid & VAR_5) {
  VAR_19->mask |= VAR_13;
  if (VAR_20->attr_valid & VAR_6) {
   VAR_19->mtime = (time64_t)VAR_18->i_mtime.tv_sec;
   VAR_19->mask |= VAR_14;
  }
 }
 if (VAR_20->attr_valid & VAR_2)
  VAR_19->mask |= VAR_11;







 if (VAR_20->attr_valid & VAR_4) {
  VAR_19->perms = FUNC_1(VAR_18->i_mode);
  VAR_19->mask |= VAR_15;
 }
}
