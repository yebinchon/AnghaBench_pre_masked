
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct netsec_priv {scalar_t__ eeprom_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct netsec_priv*,int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct netsec_priv *VAR_11)
{
 u32 VAR_12, VAR_13, VAR_14;
 int VAR_15;

 VAR_12 = FUNC_1(VAR_11->eeprom_base + VAR_0);
 VAR_13 = FUNC_1(VAR_11->eeprom_base + VAR_1);
 VAR_14 = FUNC_1(VAR_11->eeprom_base + VAR_2);
 VAR_15 = FUNC_0(VAR_11, VAR_8,
           VAR_12, VAR_13, VAR_14);
 if (VAR_15)
  return VAR_15;

 VAR_12 = FUNC_1(VAR_11->eeprom_base + VAR_3);
 VAR_13 = FUNC_1(VAR_11->eeprom_base + VAR_4);
 VAR_14 = FUNC_1(VAR_11->eeprom_base + VAR_5);
 VAR_15 = FUNC_0(VAR_11, VAR_9,
           VAR_12, VAR_13, VAR_14);
 if (VAR_15)
  return VAR_15;

 VAR_12 = 0;
 VAR_13 = FUNC_1(VAR_11->eeprom_base + VAR_6);
 VAR_14 = FUNC_1(VAR_11->eeprom_base + VAR_7);
 VAR_15 = FUNC_0(VAR_11, VAR_10,
           VAR_12, VAR_13, VAR_14);
 if (VAR_15)
  return VAR_15;

 return 0;
}
