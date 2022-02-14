
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_sb_info {int mnt_dir_mode; int mnt_file_mode; int mnt_cifs_flags; int mnt_gid; int mnt_uid; } ;
struct cifs_fattr {int cf_cifsattrs; int cf_mode; scalar_t__ cf_eof; int cf_flags; int cf_dtype; int cf_gid; int cf_uid; } ;


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

__attribute__((used)) static void
FUNC_0(struct cifs_fattr *VAR_16, struct cifs_sb_info *VAR_17)
{
 VAR_16->cf_uid = VAR_17->mnt_uid;
 VAR_16->cf_gid = VAR_17->mnt_gid;

 if (VAR_16->cf_cifsattrs & VAR_0) {
  VAR_16->cf_mode = VAR_11 | VAR_17->mnt_dir_mode;
  VAR_16->cf_dtype = VAR_8;
 } else {
  VAR_16->cf_mode = VAR_14 | VAR_17->mnt_file_mode;
  VAR_16->cf_dtype = VAR_10;
 }






 if (VAR_16->cf_cifsattrs & VAR_2)
  VAR_16->cf_flags |= VAR_4;


 VAR_16->cf_flags |= VAR_5;

 if (VAR_16->cf_cifsattrs & VAR_1)
  VAR_16->cf_mode &= ~VAR_15;
 if (VAR_17->mnt_cifs_flags & VAR_6)
  VAR_16->cf_flags |= VAR_4;

 if (VAR_17->mnt_cifs_flags & VAR_7 &&
     VAR_16->cf_cifsattrs & VAR_3) {
  if (VAR_16->cf_eof == 0) {
   VAR_16->cf_mode &= ~VAR_13;
   VAR_16->cf_mode |= VAR_12;
   VAR_16->cf_dtype = VAR_9;
  } else {





   VAR_16->cf_flags |= VAR_4;
  }
 }
}
