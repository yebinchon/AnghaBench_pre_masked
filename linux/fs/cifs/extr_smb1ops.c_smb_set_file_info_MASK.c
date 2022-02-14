
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tcon_link {int dummy; } ;
struct inode {int i_sb; } ;
struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int local_nls; } ;
struct cifs_open_parms {int desired_access; char const* path; int reconnect; struct cifs_fid* fid; int disposition; int create_options; struct cifs_sb_info* cifs_sb; struct cifs_tcon* tcon; } ;
struct cifs_fid {int netfid; } ;
struct cifsInodeInfo {void* cifsAttrs; } ;
struct TYPE_7__ {int netfid; } ;
struct cifsFileInfo {struct tcon_link* tlink; int pid; TYPE_1__ fid; } ;
typedef int __u32 ;
struct TYPE_9__ {int tgid; } ;
struct TYPE_8__ {int Attributes; } ;
typedef TYPE_2__ FILE_BASIC_INFO ;


 int FUNC_0 (unsigned int const,struct cifs_tcon*,int ) ;
 int FUNC_1 (unsigned int const,struct cifs_tcon*,TYPE_2__*,int ,int ) ;
 int FUNC_2 (unsigned int const,struct cifs_tcon*,char const*,TYPE_2__*,int ,int ) ;
 struct cifsInodeInfo* FUNC_3 (struct inode*) ;
 struct cifs_sb_info* FUNC_4 (int ) ;
 int FUNC_5 (unsigned int const,struct cifs_open_parms*,int*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (struct tcon_link*) ;
 int FUNC_7 (struct tcon_link*) ;
 int VAR_7 ;
 int FUNC_8 (struct cifsFileInfo*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (struct tcon_link*) ;
 int FUNC_11 (struct cifs_sb_info*) ;
 struct tcon_link* FUNC_12 (struct cifs_sb_info*) ;
 TYPE_4__* VAR_8 ;
 struct cifsFileInfo* FUNC_13 (struct cifsInodeInfo*,int) ;
 void* FUNC_14 (int ) ;
 struct cifs_tcon* FUNC_15 (struct tcon_link*) ;

__attribute__((used)) static int
FUNC_16(struct inode *VAR_9, const char *VAR_10,
    FILE_BASIC_INFO *VAR_11, const unsigned int VAR_12)
{
 int VAR_13 = 0;
 int VAR_14;
 __u32 VAR_15;
 struct cifs_fid VAR_16;
 struct cifs_open_parms VAR_17;
 struct cifsFileInfo *VAR_18;
 struct cifsInodeInfo *VAR_19 = FUNC_3(VAR_9);
 struct cifs_sb_info *VAR_20 = FUNC_4(VAR_9->i_sb);
 struct tcon_link *VAR_21 = ((void*)0);
 struct cifs_tcon *VAR_22;


 VAR_18 = FUNC_13(VAR_19, 1);
 if (VAR_18) {
  VAR_16.netfid = VAR_18->fid.netfid;
  VAR_15 = VAR_18->pid;
  VAR_22 = FUNC_15(VAR_18->tlink);
  goto set_via_filehandle;
 }

 VAR_21 = FUNC_12(VAR_20);
 if (FUNC_6(VAR_21)) {
  VAR_14 = FUNC_7(VAR_21);
  VAR_21 = ((void*)0);
  goto out;
 }
 VAR_22 = FUNC_15(VAR_21);

 VAR_14 = FUNC_2(VAR_12, VAR_22, VAR_10, VAR_11, VAR_20->local_nls,
    FUNC_11(VAR_20));
 if (VAR_14 == 0) {
  VAR_19->cifsAttrs = FUNC_14(VAR_11->Attributes);
  goto out;
 } else if (VAR_14 != -VAR_3 && VAR_14 != -VAR_1) {
  goto out;
 }

 VAR_17.tcon = VAR_22;
 VAR_17.cifs_sb = VAR_20;
 VAR_17.desired_access = VAR_7 | VAR_5;
 VAR_17.create_options = VAR_0;
 VAR_17.disposition = VAR_4;
 VAR_17.path = VAR_10;
 VAR_17.fid = &VAR_16;
 VAR_17.reconnect = 0;

 FUNC_9(VAR_6, "calling SetFileInfo since SetPathInfo for times not supported by this server\n");
 VAR_14 = FUNC_5(VAR_12, &VAR_17, &VAR_13, ((void*)0));
 if (VAR_14 != 0) {
  if (VAR_14 == -VAR_2)
   VAR_14 = -VAR_1;
  goto out;
 }

 VAR_15 = VAR_8->tgid;

set_via_filehandle:
 VAR_14 = FUNC_1(VAR_12, VAR_22, VAR_11, VAR_16.netfid, VAR_15);
 if (!VAR_14)
  VAR_19->cifsAttrs = FUNC_14(VAR_11->Attributes);

 if (VAR_18 == ((void*)0))
  FUNC_0(VAR_12, VAR_22, VAR_16.netfid);
 else
  FUNC_8(VAR_18);
out:
 if (VAR_21 != ((void*)0))
  FUNC_10(VAR_21);
 return VAR_14;
}
