
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct aq_hw_s {int dummy; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct aq_hw_s*,int ) ;
 int FUNC_3 (int*,int*) ;
 int FUNC_4 (unsigned int*,int) ;
 int FUNC_5 (struct aq_hw_s*,scalar_t__,scalar_t__*,int ) ;

__attribute__((used)) static int FUNC_6(struct aq_hw_s *VAR_1, u8 *VAR_2)
{
 int VAR_3 = 0;
 u32 VAR_4 = 0U;
 u32 VAR_5 = 0U;
 u32 VAR_6[2] = { 0 };
 u32 VAR_7 = FUNC_2(VAR_1, VAR_0);

 if (VAR_7 != 0) {
  VAR_3 = FUNC_5(VAR_1,
          VAR_7 + (40U * 4U),
          VAR_6,
          FUNC_0(VAR_6));
  if (VAR_3)
   return VAR_3;
  VAR_6[0] = FUNC_1(VAR_6[0]);
  VAR_6[1] = FUNC_1(VAR_6[1]);
 }

 FUNC_3(VAR_2, (u8 *)VAR_6);

 if ((VAR_2[0] & 0x01U) || ((VAR_2[0] | VAR_2[1] | VAR_2[2]) == 0x00U)) {
  unsigned int VAR_8 = 0;

  FUNC_4(&VAR_8, sizeof(unsigned int));

  VAR_5 = 0xE3000000U | (0xFFFFU & VAR_8) | (0x00 << 16);
  VAR_4 = 0x8001300EU;

  VAR_2[5] = (u8)(0xFFU & VAR_5);
  VAR_5 >>= 8;
  VAR_2[4] = (u8)(0xFFU & VAR_5);
  VAR_5 >>= 8;
  VAR_2[3] = (u8)(0xFFU & VAR_5);
  VAR_5 >>= 8;
  VAR_2[2] = (u8)(0xFFU & VAR_5);
  VAR_2[1] = (u8)(0xFFU & VAR_4);
  VAR_4 >>= 8;
  VAR_2[0] = (u8)(0xFFU & VAR_4);
 }
 return VAR_3;
}
