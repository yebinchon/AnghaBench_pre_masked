
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct budget {TYPE_2__* dvb_frontend; scalar_t__ read_fe_status; } ;
struct TYPE_3__ {scalar_t__ read_status; } ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 scalar_t__ VAR_0 ;

void FUNC_0(struct budget *VAR_1)
{
 if (VAR_1->dvb_frontend && !VAR_1->read_fe_status) {
  VAR_1->read_fe_status = VAR_1->dvb_frontend->ops.read_status;
  VAR_1->dvb_frontend->ops.read_status = VAR_0;
 }
}
