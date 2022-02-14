
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct e1000_adapter {int hw; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int,int,int const) ;
 int FUNC_3 (char*,int,int,int const) ;

__attribute__((used)) static bool FUNC_4(struct e1000_adapter *VAR_0, u64 *VAR_1,
        int VAR_2, int VAR_3, u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6, VAR_7;
 static const u32 VAR_8[] = {
  0x5A5A5A5A, 0xA5A5A5A5, 0x00000000, 0xFFFFFFFF
 };
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_8); VAR_6++) {
  FUNC_2(&VAR_0->hw, VAR_2, VAR_3,
          (VAR_8[VAR_6] & VAR_5));
  VAR_7 = FUNC_1(&VAR_0->hw, VAR_2, VAR_3);
  if (VAR_7 != (VAR_8[VAR_6] & VAR_5 & VAR_4)) {
   FUNC_3("pattern test failed (reg 0x%05X): got 0x%08X expected 0x%08X\n",
         VAR_2 + (VAR_3 << 2), VAR_7,
         (VAR_8[VAR_6] & VAR_5 & VAR_4));
   *VAR_1 = VAR_2;
   return 1;
  }
 }
 return 0;
}
