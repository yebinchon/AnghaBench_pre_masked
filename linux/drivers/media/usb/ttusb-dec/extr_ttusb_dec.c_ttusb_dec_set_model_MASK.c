
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttusb_dec {int model; char* model_name; char* firmware_name; } ;
typedef enum ttusb_dec_model { ____Placeholder_ttusb_dec_model } ttusb_dec_model ;






__attribute__((used)) static void FUNC_0(struct ttusb_dec *VAR_0,
    enum ttusb_dec_model VAR_1)
{
 VAR_0->model = VAR_1;

 switch (VAR_1) {
 case 130:
  VAR_0->model_name = "DEC2000-t";
  VAR_0->firmware_name = "dvb-ttusb-dec-2000t.fw";
  break;

 case 129:
  VAR_0->model_name = "DEC2540-t";
  VAR_0->firmware_name = "dvb-ttusb-dec-2540t.fw";
  break;

 case 128:
  VAR_0->model_name = "DEC3000-s";
  VAR_0->firmware_name = "dvb-ttusb-dec-3000s.fw";
  break;
 }
}
