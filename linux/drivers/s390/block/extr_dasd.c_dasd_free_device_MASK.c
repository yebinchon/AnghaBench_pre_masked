
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {scalar_t__ ccw_mem; scalar_t__ erp_mem; scalar_t__ ese_mem; struct dasd_device* private; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,int) ;
 int FUNC_2 (struct dasd_device*) ;

void FUNC_3(struct dasd_device *VAR_0)
{
 FUNC_2(VAR_0->private);
 FUNC_1((unsigned long) VAR_0->ese_mem, 1);
 FUNC_0((unsigned long) VAR_0->erp_mem);
 FUNC_1((unsigned long) VAR_0->ccw_mem, 1);
 FUNC_2(VAR_0);
}
