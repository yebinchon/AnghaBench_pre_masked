
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intelfb_info {int dummy; } ;
struct intelfb_i2c_chan {int reg; struct intelfb_info* dinfo; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(void *VAR_4, int VAR_5)
{
 struct intelfb_i2c_chan *VAR_6 = VAR_4;
 struct intelfb_info *VAR_7 = VAR_6->dinfo;
 u32 VAR_8;

 FUNC_1(VAR_6->reg, (VAR_5 ? VAR_3 : 0) |
        VAR_0 | VAR_1 | VAR_2);
 VAR_8 = FUNC_0(VAR_6->reg);
}
