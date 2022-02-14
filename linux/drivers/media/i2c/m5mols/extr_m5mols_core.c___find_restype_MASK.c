
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef enum m5mols_restype { ____Placeholder_m5mols_restype } m5mols_restype ;
struct TYPE_2__ {scalar_t__ code; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static enum m5mols_restype FUNC_0(u32 VAR_3)
{
 enum m5mols_restype VAR_4 = VAR_0;

 do {
  if (VAR_3 == VAR_2[VAR_4].code)
   return VAR_4;
 } while (VAR_4++ != VAR_1);

 return 0;
}
