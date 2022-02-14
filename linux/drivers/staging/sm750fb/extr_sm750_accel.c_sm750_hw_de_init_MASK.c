
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lynx_accel {int dummy; } ;


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
 int FUNC_0 (struct lynx_accel*,int ) ;
 int FUNC_1 (struct lynx_accel*,int ,int) ;

void FUNC_2(struct lynx_accel *VAR_15)
{

 u32 VAR_16, VAR_17;

 FUNC_1(VAR_15, VAR_8, 0xFFFFFFFF);


 VAR_16 = 0x3;

 VAR_17 = VAR_11 |
       VAR_13 |
       VAR_12 |
       VAR_10 |
       VAR_14;


 FUNC_1(VAR_15, VAR_9,
    (FUNC_0(VAR_15, VAR_9) & ~VAR_17) | VAR_16);


 FUNC_1(VAR_15, VAR_1, 0);
 FUNC_1(VAR_15, VAR_0, 0);

 FUNC_1(VAR_15, VAR_3, 0);
 FUNC_1(VAR_15, VAR_2, 0);

 VAR_17 = VAR_5 | VAR_6 |
  VAR_7;


 FUNC_1(VAR_15, VAR_4, FUNC_0(VAR_15, VAR_4) & ~VAR_17);
}
