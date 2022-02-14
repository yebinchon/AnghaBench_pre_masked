
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
struct kobject {int dummy; } ;
struct fsg_lun {scalar_t__ removable; scalar_t__ cdrom; } ;
struct device {int dummy; } ;
struct attribute {int mode; } ;
struct TYPE_4__ {struct attribute attr; } ;
struct TYPE_3__ {struct attribute attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 struct fsg_lun* FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct kobject*) ;

__attribute__((used)) static umode_t FUNC_2(struct kobject *VAR_4,
          struct attribute *VAR_5, int VAR_6)
{
 struct device *VAR_7 = FUNC_1(VAR_4);
 struct fsg_lun *VAR_8 = FUNC_0(VAR_7);

 if (VAR_5 == &VAR_3.attr)
  return VAR_8->cdrom ? VAR_0 : (VAR_1 | VAR_0);
 if (VAR_5 == &VAR_2.attr)
  return VAR_8->removable ? (VAR_1 | VAR_0) : VAR_0;
 return VAR_5->mode;
}
