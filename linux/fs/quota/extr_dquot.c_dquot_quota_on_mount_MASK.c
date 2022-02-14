
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_root; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 struct dentry* FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int,int,int) ;

int FUNC_9(struct super_block *VAR_3, char *VAR_4,
  int VAR_5, int VAR_6)
{
 struct dentry *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(VAR_4, VAR_3->s_root, FUNC_7(VAR_4));
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 if (FUNC_3(VAR_7)) {
  VAR_8 = -VAR_2;
  goto out;
 }

 VAR_8 = FUNC_6(VAR_7);
 if (!VAR_8)
  VAR_8 = FUNC_8(FUNC_2(VAR_7), VAR_6, VAR_5,
    VAR_1 | VAR_0);

out:
 FUNC_4(VAR_7);
 return VAR_8;
}
