
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uid_t ;
struct page {int dummy; } ;
struct inode {int i_gid; int i_uid; TYPE_1__* i_sb; } ;
struct iattr {int ia_valid; int ia_gid; int ia_uid; } ;
struct f2fs_inode {int i_gid; int i_uid; } ;
typedef void* gid_t ;
typedef int attr ;
struct TYPE_2__ {int s_user_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct f2fs_inode* FUNC_0 (struct page*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int FUNC_2 (struct inode*,struct iattr*) ;
 int FUNC_3 (int ,int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,void*) ;
 int FUNC_6 (int ,void*) ;
 int FUNC_7 (struct iattr*,int ,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_3, struct page *VAR_4)
{
 struct f2fs_inode *VAR_5 = FUNC_0(VAR_4);
 struct iattr VAR_6;
 uid_t VAR_7 = FUNC_4(VAR_5->i_uid);
 gid_t VAR_8 = FUNC_4(VAR_5->i_gid);
 int VAR_9;

 FUNC_7(&VAR_6, 0, sizeof(VAR_6));

 VAR_6.ia_uid = FUNC_6(VAR_3->i_sb->s_user_ns, VAR_7);
 VAR_6.ia_gid = FUNC_5(VAR_3->i_sb->s_user_ns, VAR_8);

 if (!FUNC_9(VAR_6.ia_uid, VAR_3->i_uid))
  VAR_6.ia_valid |= VAR_1;
 if (!FUNC_3(VAR_6.ia_gid, VAR_3->i_gid))
  VAR_6.ia_valid |= VAR_0;

 if (!VAR_6.ia_valid)
  return 0;

 VAR_9 = FUNC_2(VAR_3, &VAR_6);
 if (VAR_9)
  FUNC_8(FUNC_1(VAR_3), VAR_2);
 return VAR_9;
}
