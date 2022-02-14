
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bbc_i2c_bus {int own; int clock; scalar_t__ i2c_control_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct bbc_i2c_bus *VAR_3)
{
 FUNC_0(VAR_2, VAR_3->i2c_control_regs + 0x0);
 FUNC_0(VAR_3->own, VAR_3->i2c_control_regs + 0x1);
 FUNC_0(VAR_2 | VAR_0, VAR_3->i2c_control_regs + 0x0);
 FUNC_0(VAR_3->clock, VAR_3->i2c_control_regs + 0x1);
 FUNC_0(VAR_1, VAR_3->i2c_control_regs + 0x0);
}
