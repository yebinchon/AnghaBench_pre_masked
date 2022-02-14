
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stmpe {int sample_time; int mod_12b; int ref_sel; int adc_freq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct stmpe*,int ,int,int) ;

int FUNC_6(struct stmpe *VAR_2)
{
 int VAR_3;
 u8 VAR_4, VAR_5;

 VAR_4 = FUNC_3(VAR_2->sample_time) |
      FUNC_1(VAR_2->mod_12b) |
      FUNC_2(VAR_2->ref_sel);
 VAR_5 = FUNC_3(0xff) | FUNC_1(0xff) |
    FUNC_2(0xff);

 VAR_3 = FUNC_5(VAR_2, VAR_0,
   VAR_5, VAR_4);
 if (VAR_3) {
  FUNC_4(VAR_2->dev, "Could not setup ADC\n");
  return VAR_3;
 }

 VAR_3 = FUNC_5(VAR_2, VAR_1,
   FUNC_0(0xff), FUNC_0(VAR_2->adc_freq));
 if (VAR_3) {
  FUNC_4(VAR_2->dev, "Could not setup ADC\n");
  return VAR_3;
 }

 return 0;
}
