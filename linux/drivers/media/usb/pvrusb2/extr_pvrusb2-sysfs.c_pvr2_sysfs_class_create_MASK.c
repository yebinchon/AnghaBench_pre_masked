
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int dev_release; int class_release; } ;
struct pvr2_sysfs_class {TYPE_1__ class; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct pvr2_sysfs_class*) ;
 struct pvr2_sysfs_class* FUNC_2 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,struct pvr2_sysfs_class*) ;

struct pvr2_sysfs_class *FUNC_4(void)
{
 struct pvr2_sysfs_class *VAR_3;
 VAR_3 = FUNC_2(sizeof(*VAR_3),VAR_0);
 if (!VAR_3) return VAR_3;
 FUNC_3("Creating and registering pvr2_sysfs_class id=%p",
    VAR_3);
 VAR_3->class.name = "pvrusb2";
 VAR_3->class.class_release = VAR_1;
 VAR_3->class.dev_release = VAR_2;
 if (FUNC_0(&VAR_3->class)) {
  FUNC_3(
   "Registration failed for pvr2_sysfs_class id=%p",VAR_3);
  FUNC_1(VAR_3);
  VAR_3 = ((void*)0);
 }
 return VAR_3;
}
