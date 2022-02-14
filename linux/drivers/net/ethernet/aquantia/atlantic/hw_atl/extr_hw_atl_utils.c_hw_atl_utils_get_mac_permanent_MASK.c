
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct aq_hw_s {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct aq_hw_s*,int) ;
 int FUNC_3 (struct aq_hw_s*,int,unsigned int) ;
 int FUNC_4 (int*,int*) ;
 int FUNC_5 (unsigned int*,int) ;
 int FUNC_6 (struct aq_hw_s*,int,int*,int ) ;

int FUNC_7(struct aq_hw_s *VAR_1,
       u8 *VAR_2)
{
 int VAR_3 = 0;
 u32 VAR_4 = 0U;
 u32 VAR_5 = 0U;
 u32 VAR_6[2];

 if (!FUNC_2(VAR_1, VAR_0)) {
  unsigned int VAR_7 = 0;
  unsigned int VAR_8 = 0;

  FUNC_5(&VAR_7, sizeof(unsigned int));

  VAR_8 = 0x02020202 | (0xFEFEFEFE & VAR_7);
  FUNC_3(VAR_1, VAR_0, VAR_8);
 }

 VAR_3 = FUNC_6(VAR_1,
         FUNC_2(VAR_1, 0x00000374U) +
         (40U * 4U),
         VAR_6,
         FUNC_0(VAR_6));
 if (VAR_3 < 0) {
  VAR_6[0] = 0U;
  VAR_6[1] = 0U;
  VAR_3 = 0;
 } else {
  VAR_6[0] = FUNC_1(VAR_6[0]);
  VAR_6[1] = FUNC_1(VAR_6[1]);
 }

 FUNC_4(VAR_2, (u8 *)VAR_6);

 if ((VAR_2[0] & 0x01U) || ((VAR_2[0] | VAR_2[1] | VAR_2[2]) == 0x00U)) {

  VAR_5 = 0xE3000000U |
      (0xFFFFU & FUNC_2(VAR_1, VAR_0)) |
      (0x00 << 16);
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
