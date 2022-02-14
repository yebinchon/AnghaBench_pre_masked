
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct e1000_hw {scalar_t__ phy_type; scalar_t__ dsp_config_state; scalar_t__ ffe_config_state; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int* VAR_9 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,scalar_t__*,scalar_t__*) ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int,scalar_t__) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static s32 FUNC_6(struct e1000_hw *VAR_15, bool VAR_16)
{
 s32 VAR_17;
 u16 VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;

 if (VAR_15->phy_type != VAR_14)
  return VAR_0;

 if (VAR_16) {
  VAR_17 = FUNC_1(VAR_15, &VAR_20, &VAR_21);
  if (VAR_17) {
   FUNC_4("Error getting link speed and duplex\n");
   return VAR_17;
  }

  if (VAR_20 == VAR_8) {
   VAR_17 = FUNC_0(VAR_15);
   if (VAR_17)
    return VAR_17;
  }
 } else {
  if (VAR_15->dsp_config_state == VAR_10) {



   VAR_17 =
       FUNC_2(VAR_15, 0x2F5B, &VAR_19);

   if (VAR_17)
    return VAR_17;


   VAR_17 = FUNC_3(VAR_15, 0x2F5B, 0x0003);

   if (VAR_17)
    return VAR_17;

   FUNC_5(20);

   VAR_17 = FUNC_3(VAR_15, 0x0000,
            VAR_1);
   if (VAR_17)
    return VAR_17;
   for (VAR_22 = 0; VAR_22 < VAR_3; VAR_22++) {
    VAR_17 =
        FUNC_2(VAR_15, VAR_9[VAR_22],
             &VAR_18);
    if (VAR_17)
     return VAR_17;

    VAR_18 &= ~VAR_6;
    VAR_18 |= VAR_7;

    VAR_17 =
        FUNC_3(VAR_15, VAR_9[VAR_22],
       VAR_18);
    if (VAR_17)
     return VAR_17;
   }

   VAR_17 = FUNC_3(VAR_15, 0x0000,
            VAR_2);
   if (VAR_17)
    return VAR_17;

   FUNC_5(20);


   VAR_17 =
       FUNC_3(VAR_15, 0x2F5B, VAR_19);

   if (VAR_17)
    return VAR_17;

   VAR_15->dsp_config_state = VAR_11;
  }

  if (VAR_15->ffe_config_state == VAR_12) {



   VAR_17 =
       FUNC_2(VAR_15, 0x2F5B, &VAR_19);

   if (VAR_17)
    return VAR_17;


   VAR_17 = FUNC_3(VAR_15, 0x2F5B, 0x0003);

   if (VAR_17)
    return VAR_17;

   FUNC_5(20);

   VAR_17 = FUNC_3(VAR_15, 0x0000,
            VAR_1);
   if (VAR_17)
    return VAR_17;
   VAR_17 =
       FUNC_3(VAR_15, VAR_4,
      VAR_5);
   if (VAR_17)
    return VAR_17;

   VAR_17 = FUNC_3(VAR_15, 0x0000,
            VAR_2);
   if (VAR_17)
    return VAR_17;

   FUNC_5(20);


   VAR_17 =
       FUNC_3(VAR_15, 0x2F5B, VAR_19);

   if (VAR_17)
    return VAR_17;

   VAR_15->ffe_config_state = VAR_13;
  }
 }
 return VAR_0;
}
