
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ,int) ;

__attribute__((used)) static int FUNC_2(int VAR_9, u32 VAR_10, u32 VAR_11)
{
 u32 VAR_12;
 u32 VAR_13;





 if (VAR_10 & (VAR_11 - 1))
  return -VAR_0;

 VAR_10 >>= VAR_1;
 VAR_13 = (1 << VAR_8) - VAR_11;
 VAR_13 >>= VAR_1;
 VAR_13 <<= VAR_6;

 VAR_12 = FUNC_0(VAR_9, VAR_7);
 VAR_12 &= ~VAR_4;
 VAR_12 |= VAR_10 & VAR_2;
 VAR_12 |= VAR_13 & VAR_5;
 VAR_12 |= VAR_3;
 FUNC_1(VAR_9, VAR_7, VAR_12);

 return 0;
}
