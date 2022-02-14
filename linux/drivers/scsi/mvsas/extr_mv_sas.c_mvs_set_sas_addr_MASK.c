
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct mvs_info {int dummy; } ;
struct TYPE_2__ {int (* write_port_cfg_data ) (struct mvs_info*,int,int ) ;int (* write_port_cfg_addr ) (struct mvs_info*,int,int ) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct mvs_info*,int,int ) ;
 int FUNC_1 (struct mvs_info*,int,int ) ;
 int FUNC_2 (struct mvs_info*,int,int ) ;
 int FUNC_3 (struct mvs_info*,int,int ) ;

void FUNC_4(struct mvs_info *VAR_1, int VAR_2, u32 VAR_3,
        u32 VAR_4, u64 VAR_5)
{
 u32 VAR_6 = (u32)VAR_5;
 u32 VAR_7 = (u32)(VAR_5>>32);

 VAR_0->write_port_cfg_addr(VAR_1, VAR_2, VAR_3);
 VAR_0->write_port_cfg_data(VAR_1, VAR_2, VAR_6);
 VAR_0->write_port_cfg_addr(VAR_1, VAR_2, VAR_4);
 VAR_0->write_port_cfg_data(VAR_1, VAR_2, VAR_7);
}
