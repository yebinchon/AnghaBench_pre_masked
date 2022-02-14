
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct igc_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int VAR_13 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 () ;

void FUNC_6(struct igc_hw *VAR_14)
{
 u32 VAR_15, VAR_16, VAR_17[4], VAR_18, VAR_19, VAR_20;
 int VAR_21, VAR_22;


 VAR_18 = FUNC_2(VAR_7);
 VAR_18 |= VAR_8;
 FUNC_4(VAR_7, VAR_18);

 if (!(FUNC_2(VAR_0) & VAR_1))
  return;


 for (VAR_21 = 0; VAR_21 < 4; VAR_21++) {
  VAR_17[VAR_21] = FUNC_2(FUNC_0(VAR_21));
  FUNC_4(FUNC_0(VAR_21),
       VAR_17[VAR_21] & ~VAR_13);
 }

 for (VAR_22 = 0; VAR_22 < 10; VAR_22++) {
  FUNC_3(1000, 2000);
  VAR_20 = 0;
  for (VAR_21 = 0; VAR_21 < 4; VAR_21++)
   VAR_20 |= FUNC_2(FUNC_0(VAR_21));
  if (!(VAR_20 & VAR_13))
   break;
 }

 if (VAR_22 == 10)
  FUNC_1("Queue disable timed out after 10ms\n");





 FUNC_4(VAR_7, VAR_18 & ~VAR_9);

 VAR_16 = FUNC_2(VAR_10);
 FUNC_4(VAR_10, 0);

 VAR_15 = FUNC_2(VAR_3);
 VAR_19 = VAR_15 & ~(VAR_4 | VAR_6);
 VAR_19 |= VAR_5;

 FUNC_4(VAR_3, VAR_19);
 FUNC_4(VAR_3, VAR_19 | VAR_4);
 FUNC_5();
 FUNC_3(2000, 3000);




 for (VAR_21 = 0; VAR_21 < 4; VAR_21++)
  FUNC_4(FUNC_0(VAR_21), VAR_17[VAR_21]);
 FUNC_4(VAR_3, VAR_15);
 FUNC_5();

 FUNC_4(VAR_10, VAR_16);
 FUNC_4(VAR_7, VAR_18);


 FUNC_2(VAR_12);
 FUNC_2(VAR_11);
 FUNC_2(VAR_2);
}
