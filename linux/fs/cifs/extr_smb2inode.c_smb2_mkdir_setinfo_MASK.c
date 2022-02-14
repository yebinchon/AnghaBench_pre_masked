
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct inode {int dummy; } ;
struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int dummy; } ;
struct cifsInodeInfo {int cifsAttrs; } ;
struct cifsFileInfo {int dummy; } ;
typedef int data ;
struct TYPE_4__ {int Attributes; } ;
typedef TYPE_1__ FILE_BASIC_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 struct cifsInodeInfo* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct cifs_tcon*,char const*,struct cifsFileInfo**) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (unsigned int const,struct cifs_tcon*,struct cifs_sb_info*,char const*,int ,int ,int ,int ,TYPE_1__*,int ,struct cifsFileInfo*) ;

void
FUNC_5(struct inode *VAR_6, const char *VAR_7,
     struct cifs_sb_info *VAR_8, struct cifs_tcon *VAR_9,
     const unsigned int VAR_10)
{
 FILE_BASIC_INFO VAR_11;
 struct cifsInodeInfo *VAR_12;
 struct cifsFileInfo *VAR_13;
 u32 VAR_14;
 int VAR_15;

 FUNC_3(&VAR_11, 0, sizeof(VAR_11));
 VAR_12 = FUNC_0(VAR_6);
 VAR_14 = VAR_12->cifsAttrs | VAR_1;
 VAR_11.Attributes = FUNC_2(VAR_14);
 FUNC_1(VAR_9, VAR_7, &VAR_13);
 VAR_15 = FUNC_4(VAR_10, VAR_9, VAR_8, VAR_7,
     VAR_4, VAR_3,
     VAR_2, VAR_0,
     &VAR_11, VAR_5, VAR_13);
 if (VAR_15 == 0)
  VAR_12->cifsAttrs = VAR_14;
}
