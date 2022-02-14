
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zynq_qspi {int dummy; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (struct zynq_qspi*,int ) ;
 int FUNC_1 (struct zynq_qspi*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct zynq_qspi *VAR_22)
{
 u32 VAR_23;

 FUNC_1(VAR_22, VAR_11, 0);
 FUNC_1(VAR_22, VAR_12, VAR_13);


 FUNC_1(VAR_22, VAR_15, 0);


 while (FUNC_0(VAR_22, VAR_19) &
         VAR_14)
  FUNC_0(VAR_22, VAR_16);

 FUNC_1(VAR_22, VAR_19, VAR_13);
 VAR_23 = FUNC_0(VAR_22, VAR_8);
 VAR_23 &= ~(VAR_7 |
   VAR_2 |
   VAR_1 |
   VAR_0 |
   VAR_9 |
   VAR_5 |
   VAR_6);
 VAR_23 |= (VAR_7 |
         VAR_9 |
         VAR_3 |
         VAR_4);
 FUNC_1(VAR_22, VAR_8, VAR_23);

 FUNC_1(VAR_22, VAR_18,
   VAR_17);
 FUNC_1(VAR_22, VAR_21,
   VAR_20);

 FUNC_1(VAR_22, VAR_11,
   VAR_10);
}
