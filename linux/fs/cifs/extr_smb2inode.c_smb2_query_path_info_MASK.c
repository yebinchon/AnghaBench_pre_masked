
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb2_file_all_info {int dummy; } ;
struct TYPE_2__ {struct smb2_file_all_info file_all_info; scalar_t__ file_all_info_is_valid; } ;
struct cifs_tcon {int nohandlecache; TYPE_1__ crfid; } ;
struct cifs_sb_info {int dummy; } ;
struct cifs_fid {int volatile_fid; int persistent_fid; } ;
struct cifsFileInfo {int dummy; } ;
typedef int __u32 ;
typedef int FILE_ALL_INFO ;


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
 int FUNC_0 (unsigned int const,struct cifs_tcon*,int ,int ,struct smb2_file_all_info*) ;
 scalar_t__ FUNC_1 (struct cifs_sb_info*) ;
 int FUNC_2 (struct cifs_tcon*,char const*,struct cifsFileInfo**) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct smb2_file_all_info*) ;
 struct smb2_file_all_info* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,struct smb2_file_all_info*) ;
 int FUNC_7 (unsigned int const,struct cifs_tcon*,struct cifs_fid*) ;
 int FUNC_8 (unsigned int const,struct cifs_tcon*,struct cifs_sb_info*,char const*,int ,int ,int ,int ,struct smb2_file_all_info*,int ,struct cifsFileInfo*) ;
 int FUNC_9 (char const*) ;

int
FUNC_10(const unsigned int VAR_10, struct cifs_tcon *VAR_11,
       struct cifs_sb_info *VAR_12, const char *VAR_13,
       FILE_ALL_INFO *VAR_14, bool *VAR_15, bool *VAR_16)
{
 int VAR_17;
 struct smb2_file_all_info *VAR_18;
 __u32 VAR_19 = 0;
 struct cifs_fid VAR_20;
 bool VAR_21 = VAR_11->nohandlecache;
 struct cifsFileInfo *VAR_22;

 *VAR_15 = 0;
 *VAR_16 = 0;

 VAR_18 = FUNC_5(sizeof(struct smb2_file_all_info) + VAR_8 * 2,
       VAR_6);
 if (VAR_18 == ((void*)0))
  return -VAR_2;


 if (!FUNC_9(VAR_13) && !VAR_21) {
  VAR_17 = FUNC_7(VAR_10, VAR_11, &VAR_20);
  if (VAR_17)
   goto out;

  if (VAR_11->crfid.file_all_info_is_valid) {
   FUNC_6(VAR_14,
            &VAR_11->crfid.file_all_info);
  } else {
   VAR_17 = FUNC_0(VAR_10, VAR_11, VAR_20.persistent_fid,
          VAR_20.volatile_fid, VAR_18);
   if (!VAR_17)
    FUNC_6(VAR_14, VAR_18);
  }
  FUNC_3(&VAR_11->crfid);
  goto out;
 }

 if (FUNC_1(VAR_12))
  VAR_19 |= VAR_1;

 FUNC_2(VAR_11, VAR_13, &VAR_22);
 VAR_17 = FUNC_8(VAR_10, VAR_11, VAR_12, VAR_13,
         VAR_5, VAR_4, VAR_19,
         VAR_0, VAR_18, VAR_9, VAR_22);
 if (VAR_17 == -VAR_3) {
  *VAR_16 = 1;
  VAR_19 |= VAR_7;


  VAR_17 = FUNC_8(VAR_10, VAR_11, VAR_12, VAR_13,
          VAR_5, VAR_4,
          VAR_19, VAR_0,
          VAR_18, VAR_9, ((void*)0));
 }
 if (VAR_17)
  goto out;

 FUNC_6(VAR_14, VAR_18);
out:
 FUNC_4(VAR_18);
 return VAR_17;
}
