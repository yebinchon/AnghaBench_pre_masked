
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int a_count; } ;
struct inode {int i_mode; } ;
struct btrfs_trans_handle {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_1 (struct btrfs_trans_handle*,struct inode*,char const*,char*,int,int ) ;
 int FUNC_2 (struct inode*,char const*,char*,int,int ) ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int,int ) ;
 int FUNC_5 (unsigned int) ;
 unsigned int FUNC_6 () ;
 int FUNC_7 (int *,struct posix_acl*,char*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct inode*,int,struct posix_acl*) ;

__attribute__((used)) static int FUNC_10(struct btrfs_trans_handle *VAR_6,
    struct inode *VAR_7, struct posix_acl *VAR_8, int VAR_9)
{
 int VAR_10, VAR_11 = 0;
 const char *VAR_12;
 char *VAR_13 = ((void*)0);

 switch (VAR_9) {
 case 129:
  VAR_12 = VAR_3;
  break;
 case 128:
  if (!FUNC_0(VAR_7->i_mode))
   return VAR_8 ? -VAR_0 : 0;
  VAR_12 = VAR_4;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_8) {
  unsigned int VAR_14;

  VAR_11 = FUNC_8(VAR_8->a_count);




  VAR_14 = FUNC_6();
  VAR_13 = FUNC_4(VAR_11, VAR_2);
  FUNC_5(VAR_14);
  if (!VAR_13) {
   VAR_10 = -VAR_1;
   goto out;
  }

  VAR_10 = FUNC_7(&VAR_5, VAR_8, VAR_13, VAR_11);
  if (VAR_10 < 0)
   goto out;
 }

 if (VAR_6)
  VAR_10 = FUNC_1(VAR_6, VAR_7, VAR_12, VAR_13, VAR_11, 0);
 else
  VAR_10 = FUNC_2(VAR_7, VAR_12, VAR_13, VAR_11, 0);

out:
 FUNC_3(VAR_13);

 if (!VAR_10)
  FUNC_9(VAR_7, VAR_9, VAR_8);

 return VAR_10;
}
