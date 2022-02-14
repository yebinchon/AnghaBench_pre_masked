
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_sb; } ;
typedef scalar_t__ efs_ino_t ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,scalar_t__) ;

struct dentry *FUNC_5(struct dentry *VAR_1)
{
 struct dentry *VAR_2 = FUNC_0(-VAR_0);
 efs_ino_t VAR_3;

 VAR_3 = FUNC_3(FUNC_1(VAR_1), "..", 2);
 if (VAR_3)
  VAR_2 = FUNC_2(FUNC_4(VAR_1->d_sb, VAR_3));

 return VAR_2;
}
