
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct file {struct cifsFileInfo* private_data; } ;
struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int dummy; } ;
struct cifs_fattr {int dummy; } ;
struct TYPE_2__ {int netfid; } ;
struct cifsFileInfo {TYPE_1__ fid; int tlink; } ;
typedef int FILE_UNIX_BASIC_INFO ;


 int FUNC_0 (unsigned int,struct cifs_tcon*,int ,int *) ;
 struct cifs_sb_info* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct cifs_fattr*,int ) ;
 int FUNC_3 (struct inode*,struct cifs_fattr*) ;
 int FUNC_4 (struct cifs_fattr*,int *,struct cifs_sb_info*) ;
 struct inode* FUNC_5 (struct file*) ;
 int FUNC_6 (unsigned int) ;
 unsigned int FUNC_7 () ;
 struct cifs_tcon* FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct file *VAR_1)
{
 int VAR_2;
 unsigned int VAR_3;
 FILE_UNIX_BASIC_INFO VAR_4;
 struct cifs_fattr VAR_5;
 struct inode *VAR_6 = FUNC_5(VAR_1);
 struct cifs_sb_info *VAR_7 = FUNC_1(VAR_6->i_sb);
 struct cifsFileInfo *VAR_8 = VAR_1->private_data;
 struct cifs_tcon *VAR_9 = FUNC_8(VAR_8->tlink);

 VAR_3 = FUNC_7();
 VAR_2 = FUNC_0(VAR_3, VAR_9, VAR_8->fid.netfid, &VAR_4);
 if (!VAR_2) {
  FUNC_4(&VAR_5, &VAR_4, VAR_7);
 } else if (VAR_2 == -VAR_0) {
  FUNC_2(&VAR_5, VAR_6->i_sb);
  VAR_2 = 0;
 }

 FUNC_3(VAR_6, &VAR_5);
 FUNC_6(VAR_3);
 return VAR_2;
}
