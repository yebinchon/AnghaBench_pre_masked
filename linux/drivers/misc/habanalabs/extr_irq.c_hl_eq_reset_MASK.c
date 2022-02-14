
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_eq {scalar_t__ kernel_address; scalar_t__ ci; } ;
struct hl_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,int ) ;

void FUNC_1(struct hl_device *VAR_1, struct hl_eq *VAR_2)
{
 VAR_2->ci = 0;
 FUNC_0((void *) (uintptr_t) VAR_2->kernel_address, 0, VAR_0);
}
