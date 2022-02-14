
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct s626_private {int counter_int_enabs; } ;
struct comedi_device {struct s626_private* private; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (unsigned int) ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (unsigned int) ;
 int FUNC_12 (unsigned int) ;
 int FUNC_13 (unsigned int) ;
 int FUNC_14 (unsigned int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int) ;
 int FUNC_22 (struct comedi_device*,int ,int,int) ;

__attribute__((used)) static void FUNC_23(struct comedi_device *VAR_9,
       unsigned int VAR_10, u16 VAR_11,
       u16 VAR_12)
{
 struct s626_private *VAR_13 = VAR_9->private;
 u16 VAR_14;
 u16 VAR_15;
 unsigned int VAR_16, VAR_17, VAR_18;



 VAR_14 = FUNC_18(FUNC_7(VAR_11));

 VAR_14 |= FUNC_16(FUNC_5(VAR_11));


 VAR_15 = FUNC_20(1) | FUNC_21(1);

 VAR_15 |= FUNC_19(FUNC_0(VAR_11));


 if (!VAR_12)
  VAR_14 |= FUNC_17(FUNC_6(VAR_11));


 VAR_18 = FUNC_2(VAR_11);
 switch (FUNC_3(VAR_11)) {
 case 129:


 case 128:

  VAR_16 = VAR_3;

  VAR_16 |= VAR_18;

  VAR_18 = 1;

  VAR_17 = VAR_0;
  break;
 default:

  VAR_16 = VAR_2;


  VAR_17 = FUNC_1(VAR_11);
  if (VAR_17 == VAR_1)
   VAR_17 = VAR_0;
  break;
 }
 VAR_14 |= FUNC_14(VAR_16) | FUNC_13(VAR_18) |
        FUNC_12(VAR_17);





 if (FUNC_5(VAR_11) != VAR_8)
  VAR_14 |= FUNC_15(FUNC_4(VAR_11));





 if (VAR_12)
  VAR_13->counter_int_enabs &= ~(FUNC_11(VAR_10) |
      FUNC_8(VAR_10));





 FUNC_22(VAR_9, FUNC_9(VAR_10),
     VAR_5 | VAR_4, VAR_14);
 FUNC_22(VAR_9, FUNC_10(VAR_10),
     ~(VAR_7 | VAR_6), VAR_15);
}
