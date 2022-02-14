
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtsx_pcr {int ci; int lock; scalar_t__ host_cmds_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (int,int*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct rtsx_pcr *VAR_1,
  u8 VAR_2, u16 VAR_3, u8 VAR_4, u8 VAR_5)
{
 unsigned long VAR_6;
 u32 VAR_7 = 0;
 u32 *VAR_8 = (u32 *)(VAR_1->host_cmds_ptr);

 VAR_7 |= (u32)(VAR_2 & 0x03) << 30;
 VAR_7 |= (u32)(VAR_3 & 0x3FFF) << 16;
 VAR_7 |= (u32)VAR_4 << 8;
 VAR_7 |= (u32)VAR_5;

 FUNC_1(&VAR_1->lock, VAR_6);
 VAR_8 += VAR_1->ci;
 if (VAR_1->ci < (VAR_0 / 4)) {
  FUNC_0(VAR_7, VAR_8);
  VAR_8++;
  VAR_1->ci++;
 }
 FUNC_2(&VAR_1->lock, VAR_6);
}
