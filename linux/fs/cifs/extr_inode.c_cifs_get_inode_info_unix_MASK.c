
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcon_link {int dummy; } ;
struct super_block {int dummy; } ;
struct inode {int i_mode; } ;
struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int mnt_cifs_flags; int local_nls; } ;
struct cifs_fattr {scalar_t__ cf_uniqueid; int cf_mode; } ;
struct TYPE_2__ {scalar_t__ uniqueid; scalar_t__ time; } ;
typedef int FILE_UNIX_BASIC_INFO ;


 int FUNC_0 (unsigned int,struct cifs_tcon*,unsigned char const*,int *,int ,int ) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct cifs_sb_info* FUNC_2 (struct super_block*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct tcon_link*) ;
 int FUNC_4 (struct tcon_link*) ;
 int VAR_6 ;
 int FUNC_5 (unsigned int,struct cifs_tcon*,struct cifs_sb_info*,struct cifs_fattr*,unsigned char const*) ;
 int FUNC_6 (struct cifs_fattr*,struct super_block*) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (struct inode*,struct cifs_fattr*) ;
 int FUNC_9 (struct super_block*,struct cifs_fattr*) ;
 struct inode* FUNC_10 (struct super_block*,struct cifs_fattr*) ;
 int FUNC_11 (struct tcon_link*) ;
 int FUNC_12 (struct cifs_sb_info*) ;
 struct tcon_link* FUNC_13 (struct cifs_sb_info*) ;
 int FUNC_14 (struct cifs_fattr*,int *,struct cifs_sb_info*) ;
 struct cifs_tcon* FUNC_15 (struct tcon_link*) ;
 scalar_t__ FUNC_16 (int) ;

int FUNC_17(struct inode **VAR_7,
        const unsigned char *VAR_8,
        struct super_block *VAR_9, unsigned int VAR_10)
{
 int VAR_11;
 FILE_UNIX_BASIC_INFO VAR_12;
 struct cifs_fattr VAR_13;
 struct cifs_tcon *VAR_14;
 struct tcon_link *VAR_15;
 struct cifs_sb_info *VAR_16 = FUNC_2(VAR_9);

 FUNC_7(VAR_5, "Getting info on %s\n", VAR_8);

 VAR_15 = FUNC_13(VAR_16);
 if (FUNC_3(VAR_15))
  return FUNC_4(VAR_15);
 VAR_14 = FUNC_15(VAR_15);


 VAR_11 = FUNC_0(VAR_10, VAR_14, VAR_8, &VAR_12,
      VAR_16->local_nls, FUNC_12(VAR_16));
 FUNC_11(VAR_15);

 if (!VAR_11) {
  FUNC_14(&VAR_13, &VAR_12, VAR_16);
 } else if (VAR_11 == -VAR_3) {
  FUNC_6(&VAR_13, VAR_9);
  VAR_11 = 0;
 } else {
  return VAR_11;
 }


 if (VAR_16->mnt_cifs_flags & VAR_0) {
  int VAR_17 = FUNC_5(VAR_10, VAR_14, VAR_16, &VAR_13,
          VAR_8);
  if (VAR_17)
   FUNC_7(VAR_5, "check_mf_symlink: %d\n", VAR_17);
 }

 if (*VAR_7 == ((void*)0)) {

  FUNC_9(VAR_9, &VAR_13);
  *VAR_7 = FUNC_10(VAR_9, &VAR_13);
  if (!*VAR_7)
   VAR_11 = -VAR_2;
 } else {



  if (FUNC_16(VAR_16->mnt_cifs_flags & VAR_1 &&
      FUNC_1(*VAR_7)->uniqueid != VAR_13.cf_uniqueid)) {
   FUNC_1(*VAR_7)->time = 0;
   VAR_11 = -VAR_4;
   goto cgiiu_exit;
  }


  if (FUNC_16(((*VAR_7)->i_mode & VAR_6) !=
      (VAR_13.cf_mode & VAR_6))) {
   FUNC_1(*VAR_7)->time = 0;
   VAR_11 = -VAR_4;
   goto cgiiu_exit;
  }

  FUNC_8(*VAR_7, &VAR_13);
 }

cgiiu_exit:
 return VAR_11;
}
