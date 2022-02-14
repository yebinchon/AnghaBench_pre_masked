
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int bar; } ;
struct TYPE_3__ {TYPE_2__ flash; } ;
struct asd_ha_struct {TYPE_1__ hw_prof; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct asd_ha_struct*,int) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct asd_ha_struct *VAR_4,
  u32 VAR_5, u8 VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;
 u8 VAR_9, VAR_10;
 u8 VAR_11;





 VAR_7 = VAR_4->hw_prof.flash.bar;

 for (VAR_8 = 0; VAR_8 < 50000; VAR_8++) {
  VAR_9 = FUNC_0(VAR_4, VAR_7);
  VAR_10 = FUNC_0(VAR_4, VAR_7);

  VAR_11 = ((VAR_9 & VAR_1)
     ^ (VAR_10 & VAR_1));

  if (VAR_11 == 0) {
   return 0;
  } else {
   if (VAR_10 & VAR_0) {
    VAR_9 = FUNC_0(VAR_4,
        VAR_7);
    VAR_10 = FUNC_0(VAR_4,
        VAR_7);
    VAR_11 =
    ((VAR_9 & VAR_1)
    ^ (VAR_10 & VAR_1));

    if (VAR_11 == 0)
     return 0;
   }
  }
  if (VAR_6) {
   FUNC_1(VAR_2);
  } else {
   FUNC_1(VAR_3);
  }
 }
 return -1;
}
