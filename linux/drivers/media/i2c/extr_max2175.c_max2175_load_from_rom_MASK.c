
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max2175 {int rom_bbf_bw_am; int rom_bbf_bw_fm; int rom_bbf_bw_dab; scalar_t__ am_hiz; } ;


 int FUNC_0 (struct max2175*,int) ;
 int FUNC_1 (struct max2175*,int,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct max2175 *VAR_0)
{
 u8 VAR_1 = 0;

 VAR_1 = FUNC_0(VAR_0, 0);
 VAR_0->rom_bbf_bw_am = VAR_1 & 0x0f;
 FUNC_1(VAR_0, 81, 3, 0, VAR_1 >> 4);

 VAR_1 = FUNC_0(VAR_0, 1);
 VAR_0->rom_bbf_bw_fm = VAR_1 & 0x0f;
 VAR_0->rom_bbf_bw_dab = VAR_1 >> 4;

 VAR_1 = FUNC_0(VAR_0, 2);
 FUNC_1(VAR_0, 82, 4, 0, VAR_1 & 0x1f);
 FUNC_1(VAR_0, 82, 7, 5, VAR_1 >> 5);

 VAR_1 = FUNC_0(VAR_0, 3);
 if (VAR_0->am_hiz) {
  VAR_1 &= 0x0f;
  VAR_1 |= (FUNC_0(VAR_0, 7) & 0x40) >> 2;
  if (!VAR_1)
   VAR_1 |= 2;
 } else {
  VAR_1 = (VAR_1 & 0xf0) >> 4;
  VAR_1 |= (FUNC_0(VAR_0, 7) & 0x80) >> 3;
  if (!VAR_1)
   VAR_1 |= 30;
 }
 FUNC_1(VAR_0, 80, 5, 0, VAR_1 + 31);

 VAR_1 = FUNC_0(VAR_0, 6);
 FUNC_1(VAR_0, 81, 7, 6, VAR_1 >> 6);
}
