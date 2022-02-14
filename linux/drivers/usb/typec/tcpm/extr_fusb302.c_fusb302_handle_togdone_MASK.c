
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fusb302_chip {int toggling_mode; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct fusb302_chip*,int) ;
 int FUNC_1 (struct fusb302_chip*,int) ;
 int FUNC_2 (struct fusb302_chip*,int ,int*) ;
 int FUNC_3 (struct fusb302_chip*,char*,...) ;
 int FUNC_4 (struct fusb302_chip*,int ) ;

__attribute__((used)) static int FUNC_5(struct fusb302_chip *VAR_3)
{
 int VAR_4 = 0;
 u8 VAR_5;
 u8 VAR_6;

 VAR_4 = FUNC_2(VAR_3, VAR_0, &VAR_5);
 if (VAR_4 < 0)
  return VAR_4;
 VAR_6 = (VAR_5 >> VAR_2) &
    VAR_1;
 switch (VAR_6) {
 case 131:
 case 130:
  return FUNC_0(VAR_3, VAR_6);
 case 129:
 case 128:
  return FUNC_1(VAR_3, VAR_6);
 case 132:

  FUNC_3(VAR_3, "AudioAccessory not supported");
  FUNC_4(VAR_3, VAR_3->toggling_mode);
  break;
 default:
  FUNC_3(VAR_3, "TOGDONE with an invalid state: %d",
       VAR_6);
  FUNC_4(VAR_3, VAR_3->toggling_mode);
  break;
 }
 return VAR_4;
}
