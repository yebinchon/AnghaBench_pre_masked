
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcon_link {int dummy; } ;
struct inode {int i_sb; } ;
struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int dummy; } ;
struct cifs_open_parms {int desired_access; int create_options; char const* path; int reconnect; struct cifs_fid* fid; int disposition; struct cifs_sb_info* cifs_sb; struct cifs_tcon* tcon; } ;
struct cifs_ntsd {int dummy; } ;
struct cifs_fid {int netfid; } ;
typedef int __u32 ;


 int FUNC_0 (unsigned int,struct cifs_tcon*,int ) ;
 int FUNC_1 (unsigned int,struct cifs_tcon*,int ,struct cifs_ntsd*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct cifs_sb_info* FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,struct cifs_open_parms*,int*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (struct tcon_link*) ;
 int VAR_4 ;
 int FUNC_5 (struct tcon_link*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (struct cifs_sb_info*) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (struct tcon_link*) ;
 struct tcon_link* FUNC_9 (struct cifs_sb_info*) ;
 int FUNC_10 (unsigned int) ;
 unsigned int FUNC_11 () ;
 struct cifs_tcon* FUNC_12 (struct tcon_link*) ;

int FUNC_13(struct cifs_ntsd *VAR_8, __u32 VAR_9,
   struct inode *VAR_10, const char *VAR_11, int VAR_12)
{
 int VAR_13 = 0;
 unsigned int VAR_14;
 int VAR_15, VAR_16, VAR_17 = 0;
 struct cifs_tcon *VAR_18;
 struct cifs_sb_info *VAR_19 = FUNC_2(VAR_10->i_sb);
 struct tcon_link *VAR_20 = FUNC_9(VAR_19);
 struct cifs_fid VAR_21;
 struct cifs_open_parms VAR_22;

 if (FUNC_4(VAR_20))
  return FUNC_5(VAR_20);

 VAR_18 = FUNC_12(VAR_20);
 VAR_14 = FUNC_11();

 if (FUNC_6(VAR_19))
  VAR_17 |= VAR_2;

 if (VAR_12 == VAR_1 || VAR_12 == VAR_0)
  VAR_16 = VAR_7;
 else
  VAR_16 = VAR_6;

 VAR_22.tcon = VAR_18;
 VAR_22.cifs_sb = VAR_19;
 VAR_22.desired_access = VAR_16;
 VAR_22.create_options = VAR_17;
 VAR_22.disposition = VAR_3;
 VAR_22.path = VAR_11;
 VAR_22.fid = &VAR_21;
 VAR_22.reconnect = 0;

 VAR_15 = FUNC_3(VAR_14, &VAR_22, &VAR_13, ((void*)0));
 if (VAR_15) {
  FUNC_7(VAR_5, "Unable to open file to set ACL\n");
  goto out;
 }

 VAR_15 = FUNC_1(VAR_14, VAR_18, VAR_21.netfid, VAR_8, VAR_9, VAR_12);
 FUNC_7(VAR_4, "SetCIFSACL rc = %d\n", VAR_15);

 FUNC_0(VAR_14, VAR_18, VAR_21.netfid);
out:
 FUNC_10(VAR_14);
 FUNC_8(VAR_20);
 return VAR_15;
}
