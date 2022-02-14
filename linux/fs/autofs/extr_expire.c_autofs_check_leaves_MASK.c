
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct dentry {int dummy; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*,unsigned long,unsigned int) ;
 scalar_t__ FUNC_1 (struct vfsmount*,struct dentry*,unsigned int) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct dentry*,struct dentry*) ;
 int FUNC_4 (char*,struct dentry*,struct dentry*) ;

__attribute__((used)) static struct dentry *FUNC_5(struct vfsmount *VAR_1,
       struct dentry *VAR_2,
       unsigned long VAR_3,
       unsigned int VAR_4)
{
 struct dentry *VAR_5;

 FUNC_4("parent %p %pd\n", VAR_2, VAR_2);

 VAR_5 = ((void*)0);
 while ((VAR_5 = FUNC_3(VAR_5, VAR_2))) {
  FUNC_4("dentry %p %pd\n", VAR_5, VAR_5);

  if (FUNC_2(VAR_5)) {

   if (FUNC_1(VAR_1, VAR_5, VAR_4))
    continue;




   if (VAR_4 & VAR_0)
    return VAR_5;


   if (FUNC_0(VAR_5, VAR_3, VAR_4))
    return VAR_5;
  }
 }
 return ((void*)0);
}
