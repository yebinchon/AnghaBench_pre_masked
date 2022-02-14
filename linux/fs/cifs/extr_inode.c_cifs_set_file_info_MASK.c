
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct iattr {int ia_valid; int ia_ctime; int ia_mtime; int ia_atime; } ;
struct cifs_sb_info {int dummy; } ;
struct TCP_Server_Info {TYPE_2__* ops; } ;
typedef int __u32 ;
struct TYPE_9__ {TYPE_1__* ses; } ;
struct TYPE_8__ {int Attributes; scalar_t__ CreationTime; void* ChangeTime; void* LastWriteTime; void* LastAccessTime; scalar_t__ Pad; } ;
struct TYPE_7__ {int (* set_file_info ) (struct inode*,char*,TYPE_3__*,unsigned int) ;} ;
struct TYPE_6__ {struct TCP_Server_Info* server; } ;
typedef TYPE_3__ FILE_BASIC_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cifs_sb_info* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 TYPE_5__* FUNC_3 (struct cifs_sb_info*) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct inode*,char*,TYPE_3__*,unsigned int) ;

int
FUNC_7(struct inode *VAR_6, struct iattr *VAR_7, unsigned int VAR_8,
     char *VAR_9, __u32 VAR_10)
{
 bool VAR_11 = 0;
 struct cifs_sb_info *VAR_12 = FUNC_0(VAR_6->i_sb);
 struct TCP_Server_Info *VAR_13;
 FILE_BASIC_INFO VAR_14;

 if (VAR_7 == ((void*)0))
  return -VAR_3;

 VAR_13 = FUNC_3(VAR_12)->ses->server;
 if (!VAR_13->ops->set_file_info)
  return -VAR_4;

 VAR_14.Pad = 0;

 if (VAR_7->ia_valid & VAR_0) {
  VAR_11 = 1;
  VAR_14.LastAccessTime =
   FUNC_5(FUNC_1(VAR_7->ia_atime));
 } else
  VAR_14.LastAccessTime = 0;

 if (VAR_7->ia_valid & VAR_2) {
  VAR_11 = 1;
  VAR_14.LastWriteTime =
      FUNC_5(FUNC_1(VAR_7->ia_mtime));
 } else
  VAR_14.LastWriteTime = 0;







 if (VAR_11 && (VAR_7->ia_valid & VAR_1)) {
  FUNC_2(VAR_5, "CIFS - CTIME changed\n");
  VAR_14.ChangeTime =
      FUNC_5(FUNC_1(VAR_7->ia_ctime));
 } else
  VAR_14.ChangeTime = 0;

 VAR_14.CreationTime = 0;
 VAR_14.Attributes = FUNC_4(VAR_10);

 return VAR_13->ops->set_file_info(VAR_6, VAR_9, &VAR_14, VAR_8);
}
