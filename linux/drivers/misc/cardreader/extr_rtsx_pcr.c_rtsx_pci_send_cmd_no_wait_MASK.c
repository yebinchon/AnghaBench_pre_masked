
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtsx_pcr {int host_cmds_addr; int ci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtsx_pcr*,int ,int) ;

void FUNC_1(struct rtsx_pcr *VAR_2)
{
 u32 VAR_3 = 1 << 31;

 FUNC_0(VAR_2, VAR_0, VAR_2->host_cmds_addr);

 VAR_3 |= (u32)(VAR_2->ci * 4) & 0x00FFFFFF;

 VAR_3 |= 0x40000000;
 FUNC_0(VAR_2, VAR_1, VAR_3);
}
