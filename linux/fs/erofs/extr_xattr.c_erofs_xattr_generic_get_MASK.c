
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr_handler {int flags; } ;
struct inode {int dummy; } ;
struct erofs_sb_info {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct erofs_sb_info* FUNC_0 (struct inode*) ;



 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,int,char const*,void*,size_t) ;
 int FUNC_3 (struct erofs_sb_info* const,int ) ;

__attribute__((used)) static int FUNC_4(const struct xattr_handler *VAR_5,
       struct dentry *VAR_6, struct inode *VAR_7,
       const char *VAR_8, void *VAR_9, size_t VAR_10)
{
 struct erofs_sb_info *const VAR_11 = FUNC_0(VAR_7);

 switch (VAR_5->flags) {
 case 128:
  if (!FUNC_3(VAR_11, VAR_4))
   return -VAR_2;
  break;
 case 129:
  if (!FUNC_1(VAR_0))
   return -VAR_3;
  break;
 case 130:
  break;
 default:
  return -VAR_1;
 }

 return FUNC_2(VAR_7, VAR_5->flags, VAR_8, VAR_9, VAR_10);
}
