
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(int VAR_4, int VAR_5,
  int VAR_6)
{
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_0) & 0x3ff;
 VAR_7 |= (((VAR_4-1) & 0xff) << 24)
     | (((VAR_6-1) & 0xff) << 16)
     | (((VAR_5-1) & 0x3f) << 10);
 FUNC_1(VAR_7, VAR_0);







 if (VAR_3 == VAR_2) {

  VAR_7 = FUNC_0(VAR_1) & ~0x780000ff;
  VAR_7 |= ((VAR_6-1) & 0x300) >> 8;
  VAR_7 |= ((VAR_4-1) & 0x300) >> 4;
  VAR_7 |= ((VAR_5-1) & 0x3c0) << 21;
  FUNC_1(VAR_7, VAR_1);
 }
}
