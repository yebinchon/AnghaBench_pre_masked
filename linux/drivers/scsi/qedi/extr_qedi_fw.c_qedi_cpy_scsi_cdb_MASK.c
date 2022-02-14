
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct scsi_cmnd {int cmd_len; scalar_t__ cmnd; } ;
typedef int dword ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,void const*,int) ;

__attribute__((used)) static void FUNC_2(struct scsi_cmnd *VAR_0, u32 *VAR_1)
{
 u32 VAR_2;
 int VAR_3;
 u8 *VAR_4;

 VAR_3 = VAR_0->cmd_len / sizeof(VAR_2);
 VAR_4 = (u8 *)VAR_0->cmnd;
 while (VAR_3--) {
  FUNC_1(&VAR_2, (const void *)VAR_4, 4);
  *VAR_1 = FUNC_0(VAR_2);
  VAR_4 += 4;
  VAR_1++;
 }
 if (VAR_0->cmd_len & 0x3) {
  VAR_2 = (u32)VAR_4[0] | ((u32)VAR_4[1] << 8);
  *VAR_1 = FUNC_0(VAR_2);
 }
}
