
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct path {int dentry; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vfsmount*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,struct vfsmount*) ;
 struct vfsmount* FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct vfsmount*,int *) ;
 int FUNC_5 (struct vfsmount*) ;
 int FUNC_6 (int ,int *,int) ;

struct vfsmount *FUNC_7(struct path *VAR_5)
{
 struct vfsmount *VAR_6;

 FUNC_1("{%pd}", VAR_5->dentry);

 VAR_6 = FUNC_3(VAR_5->dentry);
 if (FUNC_0(VAR_6))
  return VAR_6;

 FUNC_5(VAR_6);
 FUNC_4(VAR_6, &VAR_3);
 FUNC_6(VAR_4, &VAR_2,
      VAR_1 * VAR_0);
 FUNC_2(" = %p", VAR_6);
 return VAR_6;
}
