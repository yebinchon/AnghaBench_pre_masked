
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint ;
typedef scalar_t__ u8 ;
struct brcms_c_info {struct brcms_band** bandstate; TYPE_1__* pub; } ;
struct brcms_band {scalar_t__ bandtype; int mimo_cap_40; } ;
struct TYPE_2__ {size_t _nbands; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0(struct brcms_c_info *VAR_3, u8 VAR_4)
{
 uint VAR_5;
 struct brcms_band *VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3->pub->_nbands; VAR_5++) {
  VAR_6 = VAR_3->bandstate[VAR_5];
  if (VAR_6->bandtype == VAR_2) {
   if ((VAR_4 == VAR_1)
       || (VAR_4 == VAR_0))
    VAR_6->mimo_cap_40 = 1;
   else
    VAR_6->mimo_cap_40 = 0;
  } else {
   if (VAR_4 == VAR_1)
    VAR_6->mimo_cap_40 = 1;
   else
    VAR_6->mimo_cap_40 = 0;
  }
 }
}
