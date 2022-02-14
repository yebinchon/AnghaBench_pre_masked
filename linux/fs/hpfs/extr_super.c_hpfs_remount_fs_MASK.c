
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct super_block {int dummy; } ;
struct hpfs_sb_info {int sb_mode; int sb_lowercase; int sb_eas; int sb_chk; int sb_chkdsk; int sb_err; int sb_timeshift; int sb_gid; int sb_uid; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct super_block*) ;
 struct hpfs_sb_info* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*,int) ;
 int FUNC_5 (char*,int *,int *,int*,int*,int*,int*,int*,int*,int*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct super_block*) ;
 int FUNC_8 (struct super_block*) ;

__attribute__((used)) static int FUNC_9(struct super_block *VAR_3, int *VAR_4, char *VAR_5)
{
 kuid_t VAR_6;
 kgid_t VAR_7;
 umode_t VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15;
 struct hpfs_sb_info *VAR_16 = FUNC_2(VAR_3);

 FUNC_7(VAR_3);

 *VAR_4 |= VAR_1;

 FUNC_1(VAR_3);
 VAR_6 = VAR_16->sb_uid; VAR_7 = VAR_16->sb_gid;
 VAR_8 = 0777 & ~VAR_16->sb_mode;
 VAR_9 = VAR_16->sb_lowercase;
 VAR_10 = VAR_16->sb_eas; VAR_11 = VAR_16->sb_chk; VAR_13 = VAR_16->sb_chkdsk;
 VAR_12 = VAR_16->sb_err; VAR_14 = VAR_16->sb_timeshift;

 if (!(VAR_15 = FUNC_5(VAR_5, &VAR_6, &VAR_7, &VAR_8, &VAR_9,
     &VAR_10, &VAR_11, &VAR_12, &VAR_13, &VAR_14))) {
  FUNC_6("bad mount options.\n");
  goto out_err;
 }
 if (VAR_15 == 2) {
  FUNC_0();
  goto out_err;
 }
 if (VAR_14 != VAR_16->sb_timeshift) {
  FUNC_6("timeshift can't be changed using remount.\n");
  goto out_err;
 }

 FUNC_8(VAR_3);

 VAR_16->sb_uid = VAR_6; VAR_16->sb_gid = VAR_7;
 VAR_16->sb_mode = 0777 & ~VAR_8;
 VAR_16->sb_lowercase = VAR_9;
 VAR_16->sb_eas = VAR_10; VAR_16->sb_chk = VAR_11; VAR_16->sb_chkdsk = VAR_13;
 VAR_16->sb_err = VAR_12; VAR_16->sb_timeshift = VAR_14;

 if (!(*VAR_4 & VAR_2)) FUNC_4(VAR_3, 1);

 FUNC_3(VAR_3);
 return 0;

out_err:
 FUNC_3(VAR_3);
 return -VAR_0;
}
