
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
typedef int u16 ;
struct octeon_device {size_t octeon_id; int chip_id; } ;
struct TYPE_2__ {int conf_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;

__attribute__((used)) static void *FUNC_0(struct octeon_device *VAR_11,
        u16 VAR_12)
{
 u32 VAR_13 = VAR_11->octeon_id;
 void *VAR_14 = ((void*)0);

 switch (VAR_10[VAR_13].conf_type) {
 case 128:
  if (VAR_11->chip_id == VAR_4) {
   VAR_14 = &VAR_7;
  } else if ((VAR_11->chip_id == VAR_5) &&
      (VAR_12 == VAR_0)) {
   VAR_14 = &VAR_8;
  } else if ((VAR_11->chip_id == VAR_5) &&
      (VAR_12 == VAR_1)) {
   VAR_14 = &VAR_9;
  } else if (VAR_11->chip_id == VAR_2) {
   VAR_14 = &VAR_6;
  } else if (VAR_11->chip_id == VAR_3) {
   VAR_14 = &VAR_6;
  }
  break;
 default:
  break;
 }
 return VAR_14;
}
