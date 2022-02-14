
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intelfb_info {int dummy; } ;
struct intelfb_i2c_chan {int reg; struct intelfb_info* dinfo; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(void *VAR_2)
{
 struct intelfb_i2c_chan *VAR_3 = VAR_2;
 struct intelfb_info *VAR_4 = VAR_3->dinfo;
 u32 VAR_5;

 FUNC_1(VAR_3->reg, VAR_0);
 FUNC_1(VAR_3->reg, 0);
 VAR_5 = FUNC_0(VAR_3->reg);
 return ((VAR_5 & VAR_1) != 0);
}
