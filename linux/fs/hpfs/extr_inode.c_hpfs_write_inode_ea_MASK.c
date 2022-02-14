
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; int i_rdev; int i_sb; int i_gid; int i_uid; } ;
struct hpfs_inode_info {int i_ea_uid; int i_ea_gid; int i_ea_mode; } ;
struct fnode {int dummy; } ;
typedef scalar_t__ __le32 ;
struct TYPE_2__ {int sb_eas; int sb_mode; int sb_gid; int sb_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;
 struct hpfs_inode_info* FUNC_6 (struct inode*) ;
 TYPE_1__* FUNC_7 (int ) ;
 int FUNC_8 (struct inode*,struct fnode*,char*,char*,int) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static void FUNC_13(struct inode *VAR_2, struct fnode *VAR_3)
{
 struct hpfs_inode_info *VAR_4 = FUNC_6(VAR_2);




          if (FUNC_7(VAR_2->i_sb)->sb_eas >= 2) {
  __le32 VAR_5;
  if (!FUNC_12(VAR_2->i_uid, FUNC_7(VAR_2->i_sb)->sb_uid) || VAR_4->i_ea_uid) {
   VAR_5 = FUNC_4(FUNC_10(VAR_2));
   FUNC_8(VAR_2, VAR_3, "UID", (char*)&VAR_5, 2);
   VAR_4->i_ea_uid = 1;
  }
  if (!FUNC_5(VAR_2->i_gid, FUNC_7(VAR_2->i_sb)->sb_gid) || VAR_4->i_ea_gid) {
   VAR_5 = FUNC_4(FUNC_9(VAR_2));
   FUNC_8(VAR_2, VAR_3, "GID", (char *)&VAR_5, 2);
   VAR_4->i_ea_gid = 1;
  }
  if (!FUNC_3(VAR_2->i_mode))
   if ((VAR_2->i_mode != ((FUNC_7(VAR_2->i_sb)->sb_mode & ~(FUNC_2(VAR_2->i_mode) ? 0 : 0111))
     | (FUNC_2(VAR_2->i_mode) ? VAR_0 : VAR_1))
     && VAR_2->i_mode != ((FUNC_7(VAR_2->i_sb)->sb_mode & ~(FUNC_2(VAR_2->i_mode) ? 0222 : 0333))
     | (FUNC_2(VAR_2->i_mode) ? VAR_0 : VAR_1))) || VAR_4->i_ea_mode) {
    VAR_5 = FUNC_4(VAR_2->i_mode);

    FUNC_8(VAR_2, VAR_3, "MODE", (char *)&VAR_5, 2);
    VAR_4->i_ea_mode = 1;
   }
  if (FUNC_0(VAR_2->i_mode) || FUNC_1(VAR_2->i_mode)) {
   VAR_5 = FUNC_4(FUNC_11(VAR_2->i_rdev));
   FUNC_8(VAR_2, VAR_3, "DEV", (char *)&VAR_5, 4);
  }
 }
}
