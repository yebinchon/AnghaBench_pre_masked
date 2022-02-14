
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int udp_sport ;
typedef int u8 ;
struct TYPE_2__ {int addr4; } ;
struct mlxsw_sp_nve_config {TYPE_1__ ul_sip; int ttl; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int ,int,int ) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void
FUNC_5(char *VAR_1,
      const struct mlxsw_sp_nve_config *VAR_2)
{
 u8 VAR_3;

 FUNC_3(VAR_1, VAR_0, 1,
        VAR_2->ttl);




 FUNC_1(&VAR_3, sizeof(VAR_3));
 VAR_3 = (VAR_3 % (0xee - 0x80 + 1)) + 0x80;
 FUNC_2(VAR_1, VAR_3);
 FUNC_4(VAR_1, FUNC_0(VAR_2->ul_sip.addr4));
}
