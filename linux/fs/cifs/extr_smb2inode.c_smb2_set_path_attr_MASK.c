
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int dummy; } ;
struct cifsFileInfo {int dummy; } ;
typedef int __u32 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (char const*,struct cifs_sb_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned int const,struct cifs_tcon*,struct cifs_sb_info*,char const*,int ,int ,int ,int ,int *,int,struct cifsFileInfo*) ;

__attribute__((used)) static int
FUNC_3(const unsigned int VAR_3, struct cifs_tcon *VAR_4,
     const char *VAR_5, const char *VAR_6,
     struct cifs_sb_info *VAR_7, __u32 VAR_8, int VAR_9,
     struct cifsFileInfo *VAR_10)
{
 __le16 *VAR_11 = ((void*)0);
 int VAR_12;

 VAR_11 = FUNC_0(VAR_6, VAR_7);
 if (VAR_11 == ((void*)0)) {
  VAR_12 = -VAR_1;
  goto smb2_rename_path;
 }
 VAR_12 = FUNC_2(VAR_3, VAR_4, VAR_7, VAR_5, VAR_8,
         VAR_2, 0, VAR_0, VAR_11,
         VAR_9, VAR_10);
smb2_rename_path:
 FUNC_1(VAR_11);
 return VAR_12;
}
