
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rc_dev {struct ir_spi_data* priv; } ;
struct ir_spi_data {int space; int pulse; scalar_t__ negated; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct rc_dev *VAR_0, u32 VAR_1)
{
 struct ir_spi_data *VAR_2 = VAR_0->priv;
 int VAR_3 = (VAR_1 * 15) / 100;

 VAR_2->pulse = FUNC_0(VAR_3, 0);

 if (VAR_2->negated) {
  VAR_2->pulse = ~VAR_2->pulse;
  VAR_2->space = 0xffff;
 } else {
  VAR_2->space = 0;
 }

 return 0;
}
