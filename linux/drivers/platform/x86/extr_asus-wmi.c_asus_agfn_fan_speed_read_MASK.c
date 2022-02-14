
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct asus_wmi {int dummy; } ;
struct TYPE_2__ {int len; scalar_t__ err; int sfun; int mfun; } ;
struct agfn_fan_args {int fan; int speed; TYPE_1__ agfn; } ;
struct acpi_buffer {struct agfn_fan_args* member_1; int member_0; } ;
typedef int args ;
typedef int acpi_size ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct acpi_buffer) ;

__attribute__((used)) static int FUNC_1(struct asus_wmi *VAR_4, int VAR_5,
       int *VAR_6)
{
 struct agfn_fan_args VAR_7 = {
  .agfn.len = sizeof(VAR_7),
  .agfn.mfun = VAR_0,
  .agfn.sfun = VAR_1,
  .fan = VAR_5,
  .speed = 0,
 };
 struct acpi_buffer VAR_8 = { (acpi_size) sizeof(VAR_7), &VAR_7 };
 int VAR_9;

 if (VAR_5 != 1)
  return -VAR_2;

 VAR_9 = FUNC_0(VAR_8);

 if (VAR_9 || VAR_7.agfn.err)
  return -VAR_3;

 if (VAR_6)
  *VAR_6 = VAR_7.speed;

 return 0;
}
