
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct e1000_hw {scalar_t__ dsp_config_state; int ffe_config_state; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int * VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,scalar_t__*,scalar_t__*) ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_14)
{
 u16 VAR_15, VAR_16;
 u16 VAR_17, VAR_18;
 s32 VAR_19;

 VAR_19 = FUNC_0(VAR_14, &VAR_15, &VAR_16);
 if (VAR_19)
  return VAR_19;

 if (VAR_14->dsp_config_state != VAR_11)
  return 0;

 if (VAR_15 >= VAR_13) {
  for (VAR_18 = 0; VAR_18 < VAR_2; VAR_18++) {
   VAR_19 = FUNC_1(VAR_14, VAR_9[VAR_18],
           &VAR_17);
   if (VAR_19)
    return VAR_19;

   VAR_17 &= ~VAR_5;

   VAR_19 = FUNC_2(VAR_14, VAR_9[VAR_18],
            VAR_17);
   if (VAR_19)
    return VAR_19;
  }
  VAR_14->dsp_config_state = VAR_10;
 } else {
  u16 VAR_20 = VAR_1;
  u32 VAR_21 = 0;


  VAR_19 = FUNC_1(VAR_14, VAR_6, &VAR_17);
  if (VAR_19)
   return VAR_19;

  for (VAR_18 = 0; VAR_18 < VAR_20; VAR_18++) {
   FUNC_3(1000);
   VAR_19 = FUNC_1(VAR_14, VAR_6,
           &VAR_17);
   if (VAR_19)
    return VAR_19;

   VAR_21 += (VAR_17 & VAR_7);
   if (VAR_21 > VAR_8) {
    VAR_14->ffe_config_state = VAR_12;

    VAR_19 = FUNC_2(VAR_14,
             VAR_3,
             VAR_4);
    if (VAR_19)
     return VAR_19;
    break;
   }

   if (VAR_21)
    VAR_20 =
         VAR_0;
  }
 }

 return 0;
}
