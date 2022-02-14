
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr_handler {int flags; } ;
struct inode {int i_sb; } ;
struct f2fs_sb_info {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct f2fs_sb_info* FUNC_0 (int ) ;



 int VAR_2 ;
 int FUNC_1 (struct inode*,int,char const*,void*,size_t,int *) ;
 int FUNC_2 (struct f2fs_sb_info*,int ) ;

__attribute__((used)) static int FUNC_3(const struct xattr_handler *VAR_3,
  struct dentry *VAR_4, struct inode *VAR_5,
  const char *VAR_6, void *VAR_7, size_t VAR_8)
{
 struct f2fs_sb_info *VAR_9 = FUNC_0(VAR_5->i_sb);

 switch (VAR_3->flags) {
 case 128:
  if (!FUNC_2(VAR_9, VAR_2))
   return -VAR_1;
  break;
 case 129:
 case 130:
  break;
 default:
  return -VAR_0;
 }
 return FUNC_1(VAR_5, VAR_3->flags, VAR_6,
        VAR_7, VAR_8, ((void*)0));
}
