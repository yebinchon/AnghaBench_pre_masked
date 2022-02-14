
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;




 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 scalar_t__ FUNC_2 () ;

unsigned int FUNC_3(void)
{
 unsigned int VAR_9;
 unsigned int VAR_10;


 if (FUNC_2() == VAR_4)
  return VAR_7;


 VAR_9 = FUNC_0(VAR_2);
 VAR_9 |= VAR_3;
 FUNC_1(VAR_2, VAR_9);


 VAR_9 = FUNC_0(VAR_0) & VAR_1;
 switch (VAR_9) {
 case 128:
  VAR_10 = VAR_8; break;
 case 131:
  VAR_10 = VAR_5; break;
 case 130:
  VAR_10 = VAR_6; break;
 case 129:
  VAR_10 = VAR_7; break;
 default:
  VAR_10 = 0;
  break;
 }
 return VAR_10;
}
