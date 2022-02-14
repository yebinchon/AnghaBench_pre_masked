
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wmab_args {int ebx; scalar_t__ edx; scalar_t__ ecx; int eax; } ;
typedef int acpi_status ;
struct TYPE_2__ {int brightness; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_1 (struct wmab_args*,int *) ;

__attribute__((used)) static acpi_status FUNC_2(u32 VAR_8, u32 VAR_9)
{
 struct wmab_args VAR_10;

 VAR_10.eax = VAR_3;
 VAR_10.ebx = VAR_8 ? (1<<8) : 0;
 VAR_10.ecx = VAR_10.edx = 0;

 switch (VAR_9) {
 case 129:
  if (VAR_8 > 1)
   return VAR_4;
  VAR_10.ebx |= VAR_1;
  break;
 case 128:
  if (VAR_8 > 1)
   return VAR_4;
  VAR_10.ebx |= VAR_2;
  break;
 case 131:
  if (VAR_8 > 1)
   return VAR_4;
  VAR_10.ebx |= VAR_0;
  break;
 case 130:
  if (VAR_8 > VAR_6)
   return VAR_4;
  switch (VAR_7->brightness) {
  default:
   return FUNC_0(0x83, VAR_8);
   break;
  }
 default:
  return VAR_5;
 }


 return FUNC_1(&VAR_10, ((void*)0));
}
