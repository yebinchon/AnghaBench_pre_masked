
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct dentry {int dummy; } ;
struct autofs_info {int flags; int count; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct dentry*,unsigned long,unsigned int) ;
 struct dentry* FUNC_2 (struct vfsmount*,struct dentry*,unsigned long,unsigned int) ;
 struct autofs_info* FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (struct vfsmount*,struct dentry*,unsigned int) ;
 int FUNC_5 (struct vfsmount*,struct dentry*,unsigned long,unsigned int) ;
 unsigned int FUNC_6 (struct dentry*) ;
 scalar_t__ FUNC_7 (struct dentry*) ;
 scalar_t__ FUNC_8 (struct dentry*) ;
 scalar_t__ FUNC_9 (struct dentry*) ;
 int FUNC_10 (struct dentry*) ;
 int FUNC_11 (char*,struct dentry*,struct dentry*) ;
 scalar_t__ FUNC_12 (struct dentry*) ;

__attribute__((used)) static struct dentry *FUNC_13(struct dentry *VAR_3,
        struct vfsmount *VAR_4,
        unsigned long VAR_5,
        unsigned int VAR_6)
{
 struct autofs_info *VAR_7 = FUNC_3(VAR_3);
 unsigned int VAR_8;


 if (VAR_7->flags & VAR_2)
  return ((void*)0);







 if (FUNC_8(VAR_3)) {
  FUNC_11("checking mountpoint %p %pd\n", VAR_3, VAR_3);


  if (FUNC_4(VAR_4, VAR_3, VAR_6))
   return ((void*)0);




  if (VAR_6 & VAR_0)
   return VAR_3;


  if (FUNC_1(VAR_3, VAR_5, VAR_6))
   return VAR_3;
  return ((void*)0);
 }

 if (FUNC_9(VAR_3) && FUNC_7(VAR_3)) {
  FUNC_11("checking symlink %p %pd\n", VAR_3, VAR_3);


  if (VAR_6 & VAR_0)
   return VAR_3;





  if (FUNC_1(VAR_3, VAR_5, VAR_6))
   return VAR_3;
  return ((void*)0);
 }

 if (FUNC_12(VAR_3))
  return ((void*)0);


 if (!(VAR_6 & VAR_1)) {

  if (!(VAR_6 & VAR_0)) {

   VAR_8 = FUNC_0(&VAR_7->count) + 1;
   if (FUNC_6(VAR_3) > VAR_8)
    return ((void*)0);
  }

  if (!FUNC_5(VAR_4, VAR_3, VAR_5, VAR_6))
   return VAR_3;




 } else {
  struct dentry *VAR_9;


  if (!(VAR_6 & VAR_0)) {

   VAR_8 = FUNC_0(&VAR_7->count) + 1;
   if (FUNC_6(VAR_3) > VAR_8)
    return ((void*)0);
  }

  VAR_9 = FUNC_2(VAR_4, VAR_3, VAR_5, VAR_6);
  if (VAR_9) {
   if (VAR_9 == VAR_3)
    FUNC_10(VAR_3);
   return VAR_9;
  }
 }
 return ((void*)0);
}
