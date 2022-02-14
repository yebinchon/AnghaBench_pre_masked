
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;





 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int) ;




__attribute__((used)) static u8 FUNC_1(u8 VAR_9)
{
 u8 VAR_10 = 0x0;

 switch (VAR_9) {
 case 134:
  VAR_10 = VAR_1;
  break;

 case 133:
  VAR_10 = VAR_3;
  break;

 case 128:
  VAR_10 = VAR_8;
  break;

 case 129:
  VAR_10 = VAR_7;
  break;
 case 131:
  VAR_10 = VAR_6;
  break;

 case 135:
  VAR_10 = VAR_2;
  break;



 case 130:
  VAR_10 = VAR_4;
  break;
 case 132:
  VAR_10 = VAR_5;
  break;

 default:
  FUNC_0(VAR_0,
    "TransmitTCB(): Impossible Queue Selection: %d\n",
    VAR_9);
  break;
 }
 return VAR_10;
}
