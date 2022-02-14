
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtsx_chip {int ci; TYPE_1__* rtsx; scalar_t__ host_cmds_ptr; } ;
typedef int __le32 ;
struct TYPE_2__ {int reg_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct rtsx_chip *VAR_1,
    u8 VAR_2, u16 VAR_3, u8 VAR_4, u8 VAR_5)
{
 __le32 *VAR_6 = (__le32 *)(VAR_1->host_cmds_ptr);
 u32 VAR_7 = 0;

 VAR_7 |= (u32)(VAR_2 & 0x03) << 30;
 VAR_7 |= (u32)(VAR_3 & 0x3FFF) << 16;
 VAR_7 |= (u32)VAR_4 << 8;
 VAR_7 |= (u32)VAR_5;

 FUNC_1(&VAR_1->rtsx->reg_lock);
 if (VAR_1->ci < (VAR_0 / 4))
  VAR_6[(VAR_1->ci)++] = FUNC_0(VAR_7);

 FUNC_2(&VAR_1->rtsx->reg_lock);
}
