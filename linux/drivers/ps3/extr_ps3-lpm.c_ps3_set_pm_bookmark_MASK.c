
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;

void FUNC_2(u64 VAR_2, u64 VAR_3, u64 VAR_4)
{
 u64 VAR_5;

 VAR_5 = (FUNC_0() & 0x00000000FFFFFFFFULL) |
  VAR_0;
 VAR_5 = ((VAR_2 << 56) & VAR_1) |
  (VAR_3 << 48) | (VAR_4 << 32) | VAR_5;
 FUNC_1(VAR_5);
}
