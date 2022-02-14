
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1x00 {int adc_cr; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (struct ucb1x00*,int ) ;
 int FUNC_4 (struct ucb1x00*,int ,int) ;

unsigned int FUNC_5(struct ucb1x00 *VAR_6, int VAR_7, int VAR_8)
{
 unsigned int VAR_9;

 if (VAR_8)
  VAR_7 |= VAR_5;

 FUNC_4(VAR_6, VAR_1, VAR_6->adc_cr | VAR_7);
 FUNC_4(VAR_6, VAR_1, VAR_6->adc_cr | VAR_7 | VAR_4);

 for (;;) {
  VAR_9 = FUNC_3(VAR_6, VAR_2);
  if (VAR_9 & VAR_3)
   break;

  FUNC_2(VAR_0);
  FUNC_1(1);
 }

 return FUNC_0(VAR_9);
}
