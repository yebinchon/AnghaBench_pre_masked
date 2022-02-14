
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct s626_private {int counter_int_enabs; } ;
struct comedi_device {struct s626_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct comedi_device*,int) ;
 int FUNC_10 (struct comedi_device*,int,int,int) ;
 int FUNC_11 (struct comedi_device*,int,int) ;

__attribute__((used)) static void FUNC_12(struct comedi_device *VAR_3,
        unsigned int VAR_4, u16 VAR_5)
{
 struct s626_private *VAR_6 = VAR_3->private;
 u16 VAR_7 = FUNC_1(VAR_4);
 u16 VAR_8 = FUNC_2(VAR_4);

 if (VAR_4 < 3) {

  FUNC_10(VAR_3, VAR_8, ~VAR_1,
      FUNC_5(1) |
      FUNC_6(1));


  FUNC_10(VAR_3, VAR_7, ~VAR_0,
      FUNC_4(VAR_5));
 } else {
  u16 VAR_9;


  VAR_9 = FUNC_9(VAR_3, VAR_8);
  VAR_9 &= ~VAR_1;


  FUNC_11(VAR_3, VAR_8,
    VAR_9 | FUNC_5(1) |
    FUNC_7(1));


  FUNC_11(VAR_3, VAR_8,
    (VAR_9 & ~VAR_2) |
    FUNC_8(VAR_5));
 }


 VAR_6->counter_int_enabs &= ~(FUNC_3(VAR_4) |
     FUNC_0(VAR_4));
 switch (VAR_5) {
 case 0:
 default:
  break;
 case 1:
  VAR_6->counter_int_enabs |= FUNC_3(VAR_4);
  break;
 case 2:
  VAR_6->counter_int_enabs |= FUNC_0(VAR_4);
  break;
 case 3:
  VAR_6->counter_int_enabs |= (FUNC_3(VAR_4) |
            FUNC_0(VAR_4));
  break;
 }
}
