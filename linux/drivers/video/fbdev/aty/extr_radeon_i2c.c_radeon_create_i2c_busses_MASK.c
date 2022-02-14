
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeonfb_info {TYPE_2__* i2c; } ;
struct TYPE_3__ {int class; } ;
struct TYPE_4__ {int ddc_reg; struct radeonfb_info* rinfo; TYPE_1__ adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,char*) ;

void FUNC_1(struct radeonfb_info *VAR_5)
{
 VAR_5->i2c[0].rinfo = VAR_5;
 VAR_5->i2c[0].ddc_reg = VAR_2;

 VAR_5->i2c[0].adapter.class = VAR_4;

 FUNC_0(&VAR_5->i2c[0], "monid");

 VAR_5->i2c[1].rinfo = VAR_5;
 VAR_5->i2c[1].ddc_reg = VAR_1;
 FUNC_0(&VAR_5->i2c[1], "dvi");

 VAR_5->i2c[2].rinfo = VAR_5;
 VAR_5->i2c[2].ddc_reg = VAR_3;
 FUNC_0(&VAR_5->i2c[2], "vga");

 VAR_5->i2c[3].rinfo = VAR_5;
 VAR_5->i2c[3].ddc_reg = VAR_0;
 FUNC_0(&VAR_5->i2c[3], "crt2");
}
