
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int irq_domain; } ;


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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__* VAR_11 ;
 int FUNC_3 (int ,int*,int ) ;
 int FUNC_4 (int ,int,int ) ;

int FUNC_5(void)
{
 int VAR_12;
 u8 VAR_13 = 0;


 FUNC_2(VAR_8,
      VAR_3);
 FUNC_2(VAR_8,
      VAR_4);




 VAR_12 = FUNC_3(VAR_9, &VAR_13, VAR_7);
 if (VAR_12 < 0) {
  FUNC_1("twl6030: Failed to read MMCCTRL, error %d\n", VAR_12);
  return VAR_12;
 }
 VAR_13 &= ~VAR_10;
 VAR_13 |= VAR_5;
 VAR_12 = FUNC_4(VAR_9, VAR_13, VAR_7);
 if (VAR_12 < 0) {
  FUNC_1("twl6030: Failed to write MMCCTRL, error %d\n", VAR_12);
  return VAR_12;
 }


 VAR_12 = FUNC_3(VAR_9, &VAR_13,
      VAR_6);
 if (VAR_12 < 0) {
  FUNC_1("twl6030: Failed to read CFG_INPUT_PUPD3, error %d\n",
         VAR_12);
  return VAR_12;
 }
 VAR_13 &= ~(VAR_2 | VAR_1);
 VAR_12 = FUNC_4(VAR_9, VAR_13,
      VAR_6);
 if (VAR_12 < 0) {
  FUNC_1("twl6030: Failed to write CFG_INPUT_PUPD3, error %d\n",
         VAR_12);
  return VAR_12;
 }

 return FUNC_0(VAR_11->irq_domain,
     VAR_0);
}
