
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct inode {int dummy; } ;
struct TYPE_2__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; int d_parent; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (int) ;
 struct dentry* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct inode*,struct dentry*,int ) ;
 int FUNC_7 (char*,struct dentry*,int) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_0, struct dentry **VAR_1,
     umode_t VAR_2)
{
 int VAR_3;
 struct dentry *VAR_4, *VAR_5 = *VAR_1;

 VAR_3 = FUNC_6(VAR_0, VAR_5, VAR_2);
 if (VAR_3)
  return VAR_3;

 if (FUNC_4(!FUNC_2(VAR_5)))
  return 0;






 VAR_4 = FUNC_5(VAR_5->d_name.name, VAR_5->d_parent,
      VAR_5->d_name.len);
 if (FUNC_0(VAR_4)) {
  FUNC_7("overlayfs: failed lookup after mkdir (%pd2, err=%i).\n",
   VAR_5, VAR_3);
  return FUNC_1(VAR_4);
 }
 FUNC_3(VAR_5);
 *VAR_1 = VAR_4;

 return 0;
}
