
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_eckd_private {scalar_t__ init_cqr_status; } ;
struct dasd_block {TYPE_1__* base; } ;
struct TYPE_2__ {struct dasd_eckd_private* private; } ;


 int FUNC_0 (struct dasd_block*) ;
 int FUNC_1 (struct dasd_block*) ;

__attribute__((used)) static int FUNC_2(struct dasd_block *VAR_0)
{
 struct dasd_eckd_private *VAR_1 = VAR_0->base->private;

 if (VAR_1->init_cqr_status < 0)
  return FUNC_1(VAR_0);
 else
  return FUNC_0(VAR_0);
}
