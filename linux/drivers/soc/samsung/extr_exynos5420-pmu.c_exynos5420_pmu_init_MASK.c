
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_1 (int) ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int * VAR_17 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
 unsigned int VAR_18;
 int VAR_19;






 for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_17); VAR_19++)
  FUNC_3(0, VAR_17[VAR_19]);


 FUNC_3(VAR_11, VAR_14);

 VAR_18 = FUNC_2(FUNC_1(0));
 VAR_18 &= ~VAR_13;
 FUNC_3(VAR_18, FUNC_1(0));

 VAR_18 = FUNC_2(FUNC_1(1));
 VAR_18 &= ~VAR_13;
 FUNC_3(VAR_18, FUNC_1(1));






 VAR_18 = FUNC_2(VAR_8);
 VAR_18 |= VAR_4;
 FUNC_3(VAR_18, VAR_8);

 VAR_18 = FUNC_2(VAR_9);
 VAR_18 |= VAR_5;
 FUNC_3(VAR_18, VAR_9);


 VAR_18 = FUNC_2(VAR_1);
 VAR_18 |= VAR_12;
 FUNC_3(VAR_18, VAR_1);

 VAR_18 = FUNC_2(VAR_6);
 VAR_18 |= VAR_12;
 FUNC_3(VAR_18, VAR_6);


 FUNC_3(VAR_0, VAR_7);


 FUNC_3(VAR_15, VAR_2);

 FUNC_3(VAR_16,
   VAR_3);

 FUNC_3(0x1, VAR_10);

 FUNC_4("EXYNOS5420 PMU initialized\n");
}
