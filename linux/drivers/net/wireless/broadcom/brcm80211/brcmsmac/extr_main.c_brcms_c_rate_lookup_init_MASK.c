
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint ;
typedef int u8 ;
struct brcms_c_rateset {size_t count; int* rates; } ;
struct brcms_c_info {TYPE_3__* band; TYPE_1__* hw; } ;
struct TYPE_5__ {size_t count; int* rates; } ;
struct TYPE_6__ {int* basic_rate; TYPE_2__ hw_rateset; } ;
struct TYPE_4__ {int d11core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct brcms_c_info *VAR_6,
         struct brcms_c_rateset *VAR_7)
{
 u8 VAR_8;
 u8 VAR_9;
 u8 VAR_10 = 0;
 u8 VAR_11 = 0;
 u8 *VAR_12 = VAR_6->band->basic_rate;
 uint VAR_13;


 FUNC_2(VAR_12, 0, VAR_2 + 1);




 for (VAR_13 = 0; VAR_13 < VAR_7->count; VAR_13++) {

  if (!(VAR_7->rates[VAR_13] & VAR_0))
   continue;


  VAR_8 = (VAR_7->rates[VAR_13] & VAR_1);

  if (VAR_8 > VAR_2) {
   FUNC_0(VAR_6->hw->d11core, "brcms_c_rate_lookup_init: "
      "invalid rate 0x%X in rate set\n",
      VAR_7->rates[VAR_13]);
   continue;
  }

  VAR_12[VAR_8] = VAR_8;
 }
 for (VAR_13 = 0; VAR_13 < VAR_6->band->hw_rateset.count; VAR_13++) {
  VAR_8 = VAR_6->band->hw_rateset.rates[VAR_13];

  if (VAR_12[VAR_8] != 0) {




   if (FUNC_1(VAR_8))
    VAR_11 = VAR_8;
   else
    VAR_10 = VAR_8;

   continue;
  }






  VAR_12[VAR_8] = FUNC_1(VAR_8) ? VAR_11 : VAR_10;

  if (VAR_12[VAR_8] != 0)
   continue;

  if (FUNC_1(VAR_8)) {




   if (VAR_8 >= VAR_4)
    VAR_9 = VAR_4;
   else if (VAR_8 >= VAR_3)
    VAR_9 = VAR_3;
   else
    VAR_9 = VAR_5;
  } else {

   VAR_9 = VAR_8;
  }

  VAR_12[VAR_8] = VAR_9;
 }
}
