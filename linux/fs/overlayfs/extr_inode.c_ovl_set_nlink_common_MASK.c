
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_nlink; } ;
struct dentry {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct inode* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (int ,int ,char*,int,int ) ;
 int FUNC_4 (char*,int,char const*,int) ;

__attribute__((used)) static int FUNC_5(struct dentry *VAR_2,
    struct dentry *VAR_3, const char *VAR_4)
{
 struct inode *VAR_5 = FUNC_1(VAR_2);
 struct inode *VAR_6 = FUNC_1(VAR_3);
 char VAR_7[13];
 int VAR_8;

 VAR_8 = FUNC_4(VAR_7, sizeof(VAR_7), VAR_4,
         (int) (VAR_5->i_nlink - VAR_6->i_nlink));

 if (FUNC_0(VAR_8 >= sizeof(VAR_7)))
  return -VAR_0;

 return FUNC_3(FUNC_2(VAR_2),
          VAR_1, VAR_7, VAR_8, 0);
}
