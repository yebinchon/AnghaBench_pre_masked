
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct inode {int dummy; } ;
struct cifs_sb_info {int dummy; } ;
struct cifs_ntsd {int dummy; } ;
struct cifsFileInfo {int fid; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct cifsFileInfo*) ;
 struct cifsFileInfo* FUNC_2 (int ,int) ;
 struct cifs_ntsd* FUNC_3 (struct cifs_sb_info*,int *,int *) ;
 struct cifs_ntsd* FUNC_4 (struct cifs_sb_info*,char const*,int *) ;

struct cifs_ntsd *FUNC_5(struct cifs_sb_info *VAR_0,
          struct inode *VAR_1, const char *VAR_2,
          u32 *VAR_3)
{
 struct cifs_ntsd *VAR_4 = ((void*)0);
 struct cifsFileInfo *VAR_5 = ((void*)0);

 if (VAR_1)
  VAR_5 = FUNC_2(FUNC_0(VAR_1), 1);
 if (!VAR_5)
  return FUNC_4(VAR_0, VAR_2, VAR_3);

 VAR_4 = FUNC_3(VAR_0, &VAR_5->fid, VAR_3);
 FUNC_1(VAR_5);
 return VAR_4;
}
