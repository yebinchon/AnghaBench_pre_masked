
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lance_private {int burst_sizes; scalar_t__ dregs; scalar_t__ tpe; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct lance_private *VAR_11)
{
 u32 VAR_12 = FUNC_1(VAR_11->dregs + VAR_1);

 if (!(VAR_12 & VAR_10)) {

  while (FUNC_1(VAR_11->dregs + VAR_1) & VAR_9)
   FUNC_0();
 }

 VAR_12 = FUNC_1(VAR_11->dregs + VAR_1);
 VAR_12 &= ~VAR_7;
 if (VAR_11->burst_sizes & VAR_0)
  VAR_12 |= VAR_6;
 else
  VAR_12 |= VAR_5;

 VAR_12 |= (VAR_2 | VAR_3 | VAR_8);

 if (VAR_11->tpe)
  VAR_12 |= VAR_4;
 else
  VAR_12 &= ~VAR_4;
 FUNC_3(20);
 FUNC_2(VAR_12, VAR_11->dregs + VAR_1);
 FUNC_3(200);
}
