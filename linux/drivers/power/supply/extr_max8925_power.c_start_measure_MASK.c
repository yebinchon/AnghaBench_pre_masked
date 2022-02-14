
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8925_power_info {int adc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int FUNC_0 (int ,int,int,unsigned char*) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct max8925_power_info *VAR_9, int VAR_10)
{
 unsigned char VAR_11[2] = {0, 0};
 int VAR_12;
 int VAR_13 = 0, VAR_14;

 switch (VAR_10) {
 case 129:
  VAR_12 = VAR_7;
  VAR_13 = VAR_3;
  break;
 case 130:
  VAR_12 = VAR_6;
  VAR_13 = VAR_2;
  break;
 case 128:
  VAR_12 = VAR_8;
  VAR_13 = VAR_4;
  break;
 case 131:
  VAR_12 = VAR_5;
  VAR_13 = VAR_1;
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_9->adc, VAR_12, 0);
 FUNC_0(VAR_9->adc, VAR_13, 2, VAR_11);
 VAR_14 = ((VAR_11[0]<<8) | VAR_11[1]) >> 4;

 return VAR_14;
}
