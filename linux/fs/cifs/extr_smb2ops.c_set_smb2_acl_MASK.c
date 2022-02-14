
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tcon_link {int dummy; } ;
struct inode {int i_sb; } ;
struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int dummy; } ;
struct cifs_open_parms {int desired_access; char const* path; int reconnect; struct cifs_fid* fid; int disposition; struct cifs_tcon* tcon; scalar_t__ create_options; } ;
struct cifs_ntsd {int dummy; } ;
struct cifs_fid {int volatile_fid; int persistent_fid; } ;
typedef int __u32 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 struct cifs_sb_info* FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct tcon_link*) ;
 int FUNC_2 (struct tcon_link*) ;
 int VAR_6 ;
 int FUNC_3 (unsigned int,struct cifs_tcon*,int ,int ) ;
 int FUNC_4 (unsigned int,struct cifs_open_parms*,int *,int *,int *,int *,int *) ;
 int FUNC_5 (unsigned int,struct cifs_tcon*,int ,int ,struct cifs_ntsd*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (struct cifs_sb_info*) ;
 int * FUNC_7 (char const*,struct cifs_sb_info*) ;
 int FUNC_8 (int ,char*,char const*) ;
 int FUNC_9 (struct tcon_link*) ;
 struct tcon_link* FUNC_10 (struct cifs_sb_info*) ;
 int FUNC_11 (unsigned int) ;
 unsigned int FUNC_12 () ;
 int FUNC_13 (int *) ;
 struct cifs_tcon* FUNC_14 (struct tcon_link*) ;

__attribute__((used)) static int
FUNC_15(struct cifs_ntsd *VAR_9, __u32 VAR_10,
  struct inode *VAR_11, const char *VAR_12, int VAR_13)
{
 u8 VAR_14 = VAR_6;
 unsigned int VAR_15;
 int VAR_16, VAR_17 = 0;
 struct cifs_tcon *VAR_18;
 struct cifs_sb_info *VAR_19 = FUNC_0(VAR_11->i_sb);
 struct tcon_link *VAR_20 = FUNC_10(VAR_19);
 struct cifs_fid VAR_21;
 struct cifs_open_parms VAR_22;
 __le16 *VAR_23;

 FUNC_8(VAR_5, "set smb3 acl for path %s\n", VAR_12);
 if (FUNC_1(VAR_20))
  return FUNC_2(VAR_20);

 VAR_18 = FUNC_14(VAR_20);
 VAR_15 = FUNC_12();

 if (FUNC_6(VAR_19))
  VAR_22.create_options = VAR_2;
 else
  VAR_22.create_options = 0;

 if (VAR_13 == VAR_1 || VAR_13 == VAR_0)
  VAR_17 = VAR_8;
 else
  VAR_17 = VAR_7;

 VAR_23 = FUNC_7(VAR_12, VAR_19);
 if (!VAR_23) {
  VAR_16 = -VAR_3;
  FUNC_11(VAR_15);
  return VAR_16;
 }

 VAR_22.tcon = VAR_18;
 VAR_22.desired_access = VAR_17;
 VAR_22.disposition = VAR_4;
 VAR_22.path = VAR_12;
 VAR_22.fid = &VAR_21;
 VAR_22.reconnect = 0;

 VAR_16 = FUNC_4(VAR_15, &VAR_22, VAR_23, &VAR_14, ((void*)0), ((void*)0), ((void*)0));
 FUNC_13(VAR_23);
 if (!VAR_16) {
  VAR_16 = FUNC_5(VAR_15, FUNC_14(VAR_20), VAR_21.persistent_fid,
       VAR_21.volatile_fid, VAR_9, VAR_10, VAR_13);
  FUNC_3(VAR_15, VAR_18, VAR_21.persistent_fid, VAR_21.volatile_fid);
 }

 FUNC_9(VAR_20);
 FUNC_11(VAR_15);
 return VAR_16;
}
