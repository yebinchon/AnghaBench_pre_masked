
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mcam_entry {int* kw; int* kw_mask; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct mcam_entry *VAR_0, int VAR_1,
       u64 *VAR_2, u64 *VAR_3)
{
 u64 VAR_4 = 0x00;
 switch (VAR_1) {
 case 0:

  *VAR_3 = VAR_0->kw[0];
  VAR_4 = VAR_0->kw_mask[0];
  break;
 case 1:

  *VAR_3 = VAR_0->kw[1] & (FUNC_0(48) - 1);
  VAR_4 = VAR_0->kw_mask[1] & (FUNC_0(48) - 1);
  break;
 case 2:



  *VAR_3 = (VAR_0->kw[1] >> 48) & (FUNC_0(16) - 1);
  *VAR_3 |= ((VAR_0->kw[2] & (FUNC_0(48) - 1)) << 16);
  VAR_4 = (VAR_0->kw_mask[1] >> 48) & (FUNC_0(16) - 1);
  VAR_4 |= ((VAR_0->kw_mask[2] & (FUNC_0(48) - 1)) << 16);
  break;
 case 3:



  *VAR_3 = (VAR_0->kw[2] >> 48) & (FUNC_0(16) - 1);
  *VAR_3 |= ((VAR_0->kw[3] & (FUNC_0(32) - 1)) << 16);
  VAR_4 = (VAR_0->kw_mask[2] >> 48) & (FUNC_0(16) - 1);
  VAR_4 |= ((VAR_0->kw_mask[3] & (FUNC_0(32) - 1)) << 16);
  break;
 case 4:



  *VAR_3 = (VAR_0->kw[3] >> 32) & (FUNC_0(32) - 1);
  *VAR_3 |= ((VAR_0->kw[4] & (FUNC_0(32) - 1)) << 32);
  VAR_4 = (VAR_0->kw_mask[3] >> 32) & (FUNC_0(32) - 1);
  VAR_4 |= ((VAR_0->kw_mask[4] & (FUNC_0(32) - 1)) << 32);
  break;
 case 5:



  *VAR_3 = (VAR_0->kw[4] >> 32) & (FUNC_0(32) - 1);
  *VAR_3 |= ((VAR_0->kw[5] & (FUNC_0(16) - 1)) << 32);
  VAR_4 = (VAR_0->kw_mask[4] >> 32) & (FUNC_0(32) - 1);
  VAR_4 |= ((VAR_0->kw_mask[5] & (FUNC_0(16) - 1)) << 32);
  break;
 case 6:



  *VAR_3 = (VAR_0->kw[5] >> 16) & (FUNC_0(48) - 1);
  *VAR_3 |= ((VAR_0->kw[6] & (FUNC_0(16) - 1)) << 48);
  VAR_4 = (VAR_0->kw_mask[5] >> 16) & (FUNC_0(48) - 1);
  VAR_4 |= ((VAR_0->kw_mask[6] & (FUNC_0(16) - 1)) << 48);
  break;
 case 7:

  *VAR_3 = (VAR_0->kw[6] >> 16) & (FUNC_0(48) - 1);
  VAR_4 = (VAR_0->kw_mask[6] >> 16) & (FUNC_0(48) - 1);
  break;
 }

 *VAR_3 &= VAR_4;
 *VAR_2 = ~*VAR_3 & VAR_4;
}
