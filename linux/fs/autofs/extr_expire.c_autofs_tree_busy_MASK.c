
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct dentry {int dummy; } ;
struct autofs_info {void* last_used; int count; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (struct dentry*,unsigned long,unsigned int) ;
 struct autofs_info* FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (struct vfsmount*,struct dentry*,unsigned int) ;
 unsigned int FUNC_4 (struct dentry*) ;
 scalar_t__ FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 struct dentry* FUNC_7 (struct dentry*,struct dentry*) ;
 void* VAR_1 ;
 int FUNC_8 (char*,struct dentry*,struct dentry*) ;
 int FUNC_9 (struct dentry*) ;

__attribute__((used)) static int FUNC_10(struct vfsmount *VAR_2,
       struct dentry *VAR_3,
       unsigned long VAR_4,
       unsigned int VAR_5)
{
 struct autofs_info *VAR_6 = FUNC_2(VAR_3);
 struct dentry *VAR_7;

 FUNC_8("top %p %pd\n", VAR_3, VAR_3);


 if (!FUNC_9(VAR_3))
  return 1;

 VAR_7 = ((void*)0);
 while ((VAR_7 = FUNC_7(VAR_7, VAR_3))) {
  FUNC_8("dentry %p %pd\n", VAR_7, VAR_7);







  if (FUNC_5(VAR_7)) {
   if (FUNC_3(VAR_2, VAR_7, VAR_5)) {
    VAR_6->last_used = VAR_1;
    FUNC_6(VAR_7);
    return 1;
   }
  } else {
   struct autofs_info *VAR_8 = FUNC_2(VAR_7);
   unsigned int VAR_9 = FUNC_0(&VAR_8->count);


   if (VAR_7 == VAR_3)
    VAR_9 += 2;
   else
    VAR_9++;

   if (FUNC_4(VAR_7) > VAR_9) {
    VAR_6->last_used = VAR_1;
    FUNC_6(VAR_7);
    return 1;
   }
  }
 }


 if (VAR_5 & VAR_0)
  return 0;


 if (!FUNC_1(VAR_3, VAR_4, VAR_5))
  return 1;

 return 0;
}
