
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_ino; TYPE_1__* i_sb; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {char* s_id; } ;


 int FUNC_0 (int,char*,struct dentry*,char*,int ) ;
 struct inode const* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct dentry*,struct inode const*) ;
 struct dentry* FUNC_4 (struct dentry*) ;
 struct dentry* FUNC_5 (struct dentry*) ;
 scalar_t__ FUNC_6 (struct inode const*) ;

__attribute__((used)) static struct dentry *FUNC_7(struct dentry *VAR_0,
     const struct inode *VAR_1)
{
 struct dentry *VAR_2;


 if (VAR_1 && FUNC_1(VAR_0) == VAR_1)
  return VAR_0;

 if (!FUNC_2(VAR_0)) {
  if (!VAR_1 || VAR_1 == FUNC_1(VAR_0))
   return VAR_0;
  goto bug;
 }

 VAR_2 = FUNC_5(VAR_0);
 if (VAR_2 && (VAR_1 == FUNC_1(VAR_2)))
  return VAR_2;

 if (VAR_2 && !VAR_1 && FUNC_6(FUNC_1(VAR_0)))
  return VAR_2;

 VAR_2 = FUNC_4(VAR_0);
 if (!VAR_2)
  goto bug;


 VAR_2 = FUNC_3(VAR_2, VAR_1);

 if (!VAR_1 || VAR_1 == FUNC_1(VAR_2))
  return VAR_2;
bug:
 FUNC_0(1, "ovl_d_real(%pd4, %s:%lu): real dentry not found\n", VAR_0,
      VAR_1 ? VAR_1->i_sb->s_id : "NULL", VAR_1 ? VAR_1->i_ino : 0);
 return VAR_0;
}
