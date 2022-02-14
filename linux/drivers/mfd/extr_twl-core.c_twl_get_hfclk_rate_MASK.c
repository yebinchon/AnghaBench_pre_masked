
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int*,int ) ;

int FUNC_2(void)
{
 u8 VAR_3;
 int VAR_4;

 FUNC_1(VAR_2, &VAR_3, VAR_1);

 switch (VAR_3 & 0x3) {
 case 130:
  VAR_4 = 19200000;
  break;
 case 129:
  VAR_4 = 26000000;
  break;
 case 128:
  VAR_4 = 38400000;
  break;
 default:
  FUNC_0("TWL4030: HFCLK is not configured\n");
  VAR_4 = -VAR_0;
  break;
 }

 return VAR_4;
}
