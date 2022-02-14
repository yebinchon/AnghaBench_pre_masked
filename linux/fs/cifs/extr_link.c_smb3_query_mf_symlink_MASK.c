
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb2_file_all_info {scalar_t__ EndOfFile; } ;
struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int dummy; } ;
struct cifs_open_parms {int reconnect; struct cifs_fid* fid; int disposition; int create_options; int desired_access; struct cifs_sb_info* cifs_sb; struct cifs_tcon* tcon; } ;
struct cifs_io_parms {int volatile_fid; int persistent_fid; int length; scalar_t__ offset; struct cifs_tcon* tcon; int pid; int netfid; } ;
struct cifs_fid {int volatile_fid; int persistent_fid; int netfid; } ;
typedef int __u8 ;
typedef struct smb2_file_all_info __le16 ;
struct TYPE_2__ {int tgid; } ;


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
 int FUNC_0 (unsigned int,struct cifs_tcon*,int ,int ) ;
 int FUNC_1 (unsigned int,struct cifs_open_parms*,struct smb2_file_all_info*,int *,struct smb2_file_all_info*,int *,int *) ;
 int FUNC_2 (unsigned int,struct cifs_io_parms*,unsigned int*,char**,int*) ;
 scalar_t__ FUNC_3 (struct cifs_sb_info*) ;
 struct smb2_file_all_info* FUNC_4 (unsigned char const*,struct cifs_sb_info*) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_1__* VAR_11 ;
 int FUNC_6 (struct smb2_file_all_info*) ;
 struct smb2_file_all_info* FUNC_7 (int,int ) ;

int
FUNC_8(unsigned int VAR_12, struct cifs_tcon *VAR_13,
        struct cifs_sb_info *VAR_14, const unsigned char *VAR_15,
        char *VAR_16, unsigned int *VAR_17)
{
 int VAR_18;
 struct cifs_fid VAR_19;
 struct cifs_open_parms VAR_20;
 struct cifs_io_parms VAR_21;
 int VAR_22 = VAR_1;
 __le16 *VAR_23;
 __u8 VAR_24 = VAR_10;
 struct smb2_file_all_info *VAR_25 = ((void*)0);

 VAR_20.tcon = VAR_13;
 VAR_20.cifs_sb = VAR_14;
 VAR_20.desired_access = VAR_7;
 VAR_20.create_options = VAR_2;
 if (FUNC_3(VAR_14))
  VAR_20.create_options |= VAR_3;
 VAR_20.disposition = VAR_6;
 VAR_20.fid = &VAR_19;
 VAR_20.reconnect = 0;

 VAR_23 = FUNC_4(VAR_15, VAR_14);
 if (VAR_23 == ((void*)0))
  return -VAR_5;

 VAR_25 = FUNC_7(sizeof(struct smb2_file_all_info) + VAR_9 * 2,
        VAR_8);

 if (VAR_25 == ((void*)0)) {
  FUNC_6(VAR_23);
  return -VAR_5;
 }

 VAR_18 = FUNC_1(VAR_12, &VAR_20, VAR_23, &VAR_24, VAR_25, ((void*)0),
         ((void*)0));
 if (VAR_18)
  goto qmf_out_open_fail;

 if (VAR_25->EndOfFile != FUNC_5(VAR_0)) {

  VAR_18 = -VAR_4;
  goto qmf_out;
 }

 VAR_21.netfid = VAR_19.netfid;
 VAR_21.pid = VAR_11->tgid;
 VAR_21.tcon = VAR_13;
 VAR_21.offset = 0;
 VAR_21.length = VAR_0;
 VAR_21.persistent_fid = VAR_19.persistent_fid;
 VAR_21.volatile_fid = VAR_19.volatile_fid;
 VAR_18 = FUNC_2(VAR_12, &VAR_21, VAR_17, &VAR_16, &VAR_22);
qmf_out:
 FUNC_0(VAR_12, VAR_13, VAR_19.persistent_fid, VAR_19.volatile_fid);
qmf_out_open_fail:
 FUNC_6(VAR_23);
 FUNC_6(VAR_25);
 return VAR_18;
}
