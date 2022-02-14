
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct fs_context {int dummy; } ;
struct file_system_type {int dummy; } ;


 int VAR_0 ;
 struct vfsmount* FUNC_0 (struct fs_context*) ;
 struct vfsmount* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct fs_context*) ;
 struct vfsmount* FUNC_3 (struct fs_context*) ;
 struct fs_context* FUNC_4 (struct file_system_type*,int) ;
 int FUNC_5 (struct fs_context*,void*) ;
 int FUNC_6 (struct fs_context*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (struct fs_context*,char*,char const*,int ) ;

struct vfsmount *FUNC_9(struct file_system_type *VAR_1,
    int VAR_2, const char *VAR_3,
    void *VAR_4)
{
 struct fs_context *VAR_5;
 struct vfsmount *VAR_6;
 int VAR_7 = 0;

 if (!VAR_1)
  return FUNC_1(-VAR_0);

 VAR_5 = FUNC_4(VAR_1, VAR_2);
 if (FUNC_2(VAR_5))
  return FUNC_0(VAR_5);

 if (VAR_3)
  VAR_7 = FUNC_8(VAR_5, "source",
       VAR_3, FUNC_7(VAR_3));
 if (!VAR_7)
  VAR_7 = FUNC_5(VAR_5, VAR_4);
 if (!VAR_7)
  VAR_6 = FUNC_3(VAR_5);
 else
  VAR_6 = FUNC_1(VAR_7);

 FUNC_6(VAR_5);
 return VAR_6;
}
