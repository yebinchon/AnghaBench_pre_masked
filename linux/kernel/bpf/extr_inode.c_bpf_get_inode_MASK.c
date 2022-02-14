
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct super_block {int dummy; } ;
struct inode {int i_atime; int i_ctime; int i_mtime; int i_ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (int ) ;


 int VAR_2 ;

 int FUNC_1 (struct inode*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct inode*,struct inode const*,int) ;
 struct inode* FUNC_4 (struct super_block*) ;

__attribute__((used)) static struct inode *FUNC_5(struct super_block *VAR_3,
       const struct inode *VAR_4,
       umode_t VAR_5)
{
 struct inode *VAR_6;

 switch (VAR_5 & VAR_2) {
 case 130:
 case 128:
 case 129:
  break;
 default:
  return FUNC_0(-VAR_0);
 }

 VAR_6 = FUNC_4(VAR_3);
 if (!VAR_6)
  return FUNC_0(-VAR_1);

 VAR_6->i_ino = FUNC_2();
 VAR_6->i_atime = FUNC_1(VAR_6);
 VAR_6->i_mtime = VAR_6->i_atime;
 VAR_6->i_ctime = VAR_6->i_atime;

 FUNC_3(VAR_6, VAR_4, VAR_5);

 return VAR_6;
}
