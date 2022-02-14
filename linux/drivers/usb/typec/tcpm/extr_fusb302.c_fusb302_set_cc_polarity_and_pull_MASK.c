
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fusb302_chip {int cc_polarity; scalar_t__ vconn_on; } ;
typedef enum typec_cc_polarity { ____Placeholder_typec_cc_polarity } typec_cc_polarity ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct fusb302_chip*,int ,int,int) ;
 int FUNC_1 (struct fusb302_chip*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct fusb302_chip *VAR_13,
         enum typec_cc_polarity VAR_14,
         bool VAR_15, bool VAR_16)
{
 int VAR_17 = 0;
 u8 VAR_18 = 0x00;
 u8 VAR_19 = VAR_10 |
       VAR_11;
 u8 VAR_20 = 0x00;

 if (VAR_16)
  VAR_18 |= VAR_1 |
      VAR_3;

 if (VAR_14 == VAR_12) {
  VAR_18 |= VAR_5;
  if (VAR_13->vconn_on)
   VAR_18 |= VAR_8;
  if (VAR_15)
   VAR_18 |= VAR_2;
  VAR_20 = VAR_10;
 } else {
  VAR_18 |= VAR_6;
  if (VAR_13->vconn_on)
   VAR_18 |= VAR_7;
  if (VAR_15)
   VAR_18 |= VAR_4;
  VAR_20 = VAR_11;
 }
 VAR_17 = FUNC_1(VAR_13, VAR_0, VAR_18);
 if (VAR_17 < 0)
  return VAR_17;
 VAR_17 = FUNC_0(VAR_13, VAR_9,
         VAR_19, VAR_20);
 if (VAR_17 < 0)
  return VAR_17;
 VAR_13->cc_polarity = VAR_14;

 return VAR_17;
}
