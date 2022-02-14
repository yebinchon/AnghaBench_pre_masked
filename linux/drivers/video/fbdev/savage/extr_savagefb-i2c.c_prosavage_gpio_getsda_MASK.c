
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct savagefb_i2c_chan {int par; int reg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(void* VAR_1)
{
 struct savagefb_i2c_chan *VAR_2 = VAR_1;

 return (FUNC_0(VAR_2->reg, VAR_2->par) & VAR_0) ? 1 : 0;
}
