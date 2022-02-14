
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct initchip_param {scalar_t__ powerMode; unsigned int memClock; unsigned int masterClock; int resetMemory; int setAllEngOff; scalar_t__ chipClock; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (unsigned int) ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int,int) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (scalar_t__) ;

int FUNC_12(struct initchip_param *VAR_15)
{
 unsigned int VAR_16;

 if (VAR_15->powerMode != 0)
  VAR_15->powerMode = 0;
 FUNC_11(VAR_15->powerMode);


 VAR_16 = FUNC_2(VAR_1);
 VAR_16 |= (VAR_2 | VAR_3);
 FUNC_10(VAR_16);

 if (FUNC_9() != VAR_9) {

  VAR_16 = FUNC_2(VAR_10);
  VAR_16 |= (VAR_12 | VAR_11);
  FUNC_3(VAR_10, VAR_16);
 } else {


  FUNC_1(0x88, 0x3d4);
  FUNC_1(0x06, 0x3d5);

 }


 FUNC_4(FUNC_0((unsigned int)VAR_15->chipClock));


 FUNC_6(FUNC_0(VAR_15->memClock));


 FUNC_5(FUNC_0(VAR_15->masterClock));







 if (VAR_15->resetMemory == 1) {
  VAR_16 = FUNC_2(VAR_7);
  VAR_16 &= ~VAR_8;
  FUNC_3(VAR_7, VAR_16);

  VAR_16 |= VAR_8;
  FUNC_3(VAR_7, VAR_16);
 }

 if (VAR_15->setAllEngOff == 1) {
  FUNC_7(0);


  VAR_16 = FUNC_2(VAR_14);
  VAR_16 &= ~VAR_4;
  FUNC_3(VAR_14, VAR_16);


  VAR_16 = FUNC_2(VAR_13);
  VAR_16 &= ~VAR_4;
  FUNC_3(VAR_13, VAR_16);


  VAR_16 = FUNC_2(VAR_0);
  VAR_16 &= ~VAR_4;
  FUNC_3(VAR_0, VAR_16);


  VAR_16 = FUNC_2(VAR_5);
  VAR_16 |= VAR_6;
  FUNC_3(VAR_5, VAR_16);


  FUNC_8(0);
 }



 return 0;
}
