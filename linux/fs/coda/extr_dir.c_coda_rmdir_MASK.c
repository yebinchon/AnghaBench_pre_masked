
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct TYPE_2__ {char* name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct dentry*) ;
 scalar_t__ FUNC_5 (struct dentry*) ;
 int FUNC_6 (int ,int ,char const*,int) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_0, struct dentry *VAR_1)
{
 const char *VAR_2 = VAR_1->d_name.name;
 int VAR_3 = VAR_1->d_name.len;
 int VAR_4;

 VAR_4 = FUNC_6(VAR_0->i_sb, FUNC_3(VAR_0), VAR_2, VAR_3);
 if (!VAR_4) {

  if (FUNC_5(VAR_1))
   FUNC_0(FUNC_4(VAR_1));


  FUNC_1(VAR_0);
  FUNC_2(VAR_0);
 }
 return VAR_4;
}
