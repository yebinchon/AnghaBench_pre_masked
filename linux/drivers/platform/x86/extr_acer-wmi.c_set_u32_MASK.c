
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int acpi_status ;
struct TYPE_2__ {int capability; int type; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int,int) ;
 int VAR_5 ;
 int FUNC_2 (int,int) ;
 TYPE_1__* VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static acpi_status FUNC_5(u32 VAR_7, u32 VAR_8)
{
 acpi_status VAR_9;

 if (VAR_6->capability & VAR_8) {
  switch (VAR_6->type) {
  case 131:
   return FUNC_1(VAR_7, VAR_8);
  case 130:
   if (VAR_8 == VAR_1)
    return FUNC_1(VAR_7, VAR_8);







   if (VAR_8 == VAR_3 ||
    VAR_8 == VAR_0) {
    VAR_9 = FUNC_2(VAR_7, VAR_8);
    if (FUNC_0(VAR_9))
     return VAR_9;

    return FUNC_1(VAR_7, VAR_8);
   }

  case 129:
   return FUNC_2(VAR_7, VAR_8);
  case 128:
   if (VAR_8 & (VAR_3 |
       VAR_0 |
       VAR_2))
    return FUNC_4(VAR_7, VAR_8);
   else if (FUNC_3(VAR_5))
    return FUNC_2(VAR_7, VAR_8);

  default:
   return VAR_4;
  }
 }
 return VAR_4;
}
