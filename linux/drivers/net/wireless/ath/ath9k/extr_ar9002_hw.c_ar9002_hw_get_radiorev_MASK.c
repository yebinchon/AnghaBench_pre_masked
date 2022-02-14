
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*,int ) ;
 int FUNC_4 (struct ath_hw*,int ,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct ath_hw *VAR_0)
{
 u32 VAR_1;
 int VAR_2;

 FUNC_1(VAR_0);

 FUNC_4(VAR_0, FUNC_0(0x36), 0x00007058);
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
  FUNC_4(VAR_0, FUNC_0(0x20), 0x00010000);

 FUNC_2(VAR_0);

 VAR_1 = (FUNC_3(VAR_0, FUNC_0(256)) >> 24) & 0xff;
 VAR_1 = ((VAR_1 & 0xf0) >> 4) | ((VAR_1 & 0x0f) << 4);

 return FUNC_5(VAR_1, 8);
}
