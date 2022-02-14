
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct irb {int scsw; } ;
struct dasd_device {TYPE_1__* discipline; } ;
struct dasd_block {struct dasd_device* base; } ;
struct TYPE_2__ {int (* is_ese ) (struct dasd_device*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_0 (struct irb*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct dasd_device*) ;

__attribute__((used)) static int FUNC_3(struct dasd_block *VAR_3, struct irb *VAR_4)
{
 struct dasd_device *VAR_5 = ((void*)0);
 u8 *VAR_6 = ((void*)0);

 if (!VAR_3)
  return 0;
 VAR_5 = VAR_3->base;
 if (!VAR_5 || !VAR_5->discipline->is_ese)
  return 0;
 if (!VAR_5->discipline->is_ese(VAR_5))
  return 0;

 VAR_6 = FUNC_0(VAR_4);
 if (!VAR_6)
  return 0;

 return !!(VAR_6[1] & VAR_2) ||
  !!(VAR_6[1] & VAR_1) ||
  FUNC_1(&VAR_4->scsw) == VAR_0;
}
