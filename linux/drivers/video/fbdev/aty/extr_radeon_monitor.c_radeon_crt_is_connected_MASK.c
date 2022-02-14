
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeonfb_info {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 int VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ,unsigned long,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 int VAR_19 ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct radeonfb_info *VAR_20, int VAR_21)
{
    int VAR_22 = 0;




    if (VAR_21) {
 unsigned long VAR_23;
 unsigned long VAR_24;
 unsigned long VAR_25;
 unsigned long VAR_26;
 unsigned long VAR_27;
 unsigned long VAR_28;

 VAR_23 = FUNC_0(VAR_19);

 VAR_27 = VAR_23;
 VAR_27 &= ~(VAR_17
    | VAR_18);
 VAR_28 = ~(VAR_17
    | VAR_18);
 FUNC_2(VAR_19, VAR_27, VAR_28);

 VAR_26 = FUNC_1(VAR_3);
 VAR_27 = VAR_26;
 VAR_27 |= VAR_2;
 FUNC_3(VAR_3, VAR_27);

 VAR_25 = FUNC_1(VAR_7);
 VAR_27 = VAR_25;
 VAR_27 &= ~VAR_10;
 VAR_27 |= (VAR_8
          |VAR_9
          |VAR_11);
 if ((VAR_20->family == VAR_0) ||
     (VAR_20->family == VAR_1))
     VAR_27 |= (0x01b6 << VAR_12);
 else
     VAR_27 |= (0x01ac << VAR_12);

 FUNC_3(VAR_7, VAR_27);

 VAR_24 = FUNC_1(VAR_6);
 VAR_27 = VAR_24;
 VAR_27 |= VAR_4;
 VAR_27 &= ~(VAR_14
          | VAR_13);
 VAR_27 |= 0x2;
 FUNC_3(VAR_6, VAR_27);

 FUNC_4(1);

 VAR_27 = FUNC_1(VAR_6);
 VAR_22 = (VAR_5 & VAR_27) ? 1 : 0;

 VAR_27 = VAR_23;
 VAR_28 = 0xFFFFFFFFL;
 FUNC_2(VAR_19, VAR_27, VAR_28);

 FUNC_3(VAR_6, VAR_24 );
 FUNC_3(VAR_7, VAR_25 );
 FUNC_3(VAR_3, VAR_26);
    }

    return VAR_22 ? VAR_15 : VAR_16;
}
