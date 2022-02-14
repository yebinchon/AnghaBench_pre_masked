
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct file_system_type {int dummy; } ;


 int VAR_0 ;
 struct vfsmount* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t,int ) ;
 int FUNC_3 (char*,size_t,char*,char const*) ;
 scalar_t__ FUNC_4 (char const*,char) ;
 int FUNC_5 (char const*) ;
 struct vfsmount* FUNC_6 (struct file_system_type*,int,char*,void*) ;

__attribute__((used)) static struct vfsmount *FUNC_7(struct file_system_type *VAR_2,
  int VAR_3, void *VAR_4, const char *VAR_5)
{
 struct vfsmount *VAR_6;
 char *VAR_7;
 size_t VAR_8;

 VAR_8 = FUNC_5(VAR_5) + 5;
 VAR_7 = FUNC_2(VAR_8, VAR_1);
 if (VAR_7 == ((void*)0))
  return FUNC_0(-VAR_0);

 if (FUNC_4(VAR_5, ':'))
  FUNC_3(VAR_7, VAR_8, "[%s]:/", VAR_5);
 else
  FUNC_3(VAR_7, VAR_8, "%s:/", VAR_5);
 VAR_6 = FUNC_6(VAR_2, VAR_3, VAR_7, VAR_4);
 FUNC_1(VAR_7);
 return VAR_6;
}
