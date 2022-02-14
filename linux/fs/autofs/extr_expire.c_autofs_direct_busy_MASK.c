
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct dentry {int dummy; } ;
struct autofs_info {int last_used; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct dentry*,unsigned long,unsigned int) ;
 struct autofs_info* FUNC_1 (struct dentry*) ;
 int VAR_1 ;
 int FUNC_2 (struct vfsmount*) ;
 int FUNC_3 (char*,struct dentry*,struct dentry*) ;

__attribute__((used)) static int FUNC_4(struct vfsmount *VAR_2,
         struct dentry *VAR_3,
         unsigned long VAR_4,
         unsigned int VAR_5)
{
 FUNC_3("top %p %pd\n", VAR_3, VAR_3);


 if (VAR_5 & VAR_0)
  return 0;


 if (!FUNC_2(VAR_2)) {
  struct autofs_info *VAR_6;

  VAR_6 = FUNC_1(VAR_3);
  if (VAR_6)
   VAR_6->last_used = VAR_1;
  return 1;
 }


 if (!FUNC_0(VAR_3, VAR_4, VAR_5))
  return 1;

 return 0;
}
