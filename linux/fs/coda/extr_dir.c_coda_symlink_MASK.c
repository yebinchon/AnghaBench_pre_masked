
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct TYPE_2__ {char* name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (char const*,int) ;
 int FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int ,int ,char const*,int,char const*,int) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_3, struct dentry *VAR_4,
   const char *VAR_5)
{
 const char *VAR_6 = VAR_4->d_name.name;
 int VAR_7 = VAR_4->d_name.len;
 int VAR_8;
 int VAR_9;

 if (FUNC_4(VAR_3) && FUNC_2(VAR_6, VAR_7))
  return -VAR_2;

 VAR_8 = FUNC_5(VAR_5);
 if (VAR_8 > VAR_0)
  return -VAR_1;





 FUNC_3(VAR_4);
 VAR_9 = FUNC_6(VAR_3->i_sb, FUNC_1(VAR_3), VAR_6, VAR_7,
         VAR_5, VAR_8);


 if (!VAR_9)
  FUNC_0(VAR_3);

 return VAR_9;
}
