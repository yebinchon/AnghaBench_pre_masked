
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtsx_ucr {int cmd_idx; int* cmd_buf; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct rtsx_ucr *VAR_2, u8 VAR_3, u16 VAR_4,
  u8 VAR_5, u8 VAR_6)
{
 int VAR_7;

 if (VAR_2->cmd_idx < (VAR_1 - VAR_0) / 4) {
  VAR_7 = VAR_0 + VAR_2->cmd_idx * 4;

  VAR_2->cmd_buf[VAR_7++] = ((VAR_3 & 0x03) << 6) |
   (u8)((VAR_4 >> 8) & 0x3F);
  VAR_2->cmd_buf[VAR_7++] = (u8)VAR_4;
  VAR_2->cmd_buf[VAR_7++] = VAR_5;
  VAR_2->cmd_buf[VAR_7++] = VAR_6;

  VAR_2->cmd_idx++;
 }
}
