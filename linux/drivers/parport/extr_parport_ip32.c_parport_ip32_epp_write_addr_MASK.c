
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int eppAddr; } ;
struct parport_ip32_private {TYPE_2__ regs; } ;
struct parport {TYPE_1__* physport; } ;
struct TYPE_3__ {struct parport_ip32_private* private_data; } ;


 size_t FUNC_0 (int ,struct parport*,void const*,size_t,int) ;

__attribute__((used)) static size_t FUNC_1(struct parport *VAR_0, const void *VAR_1,
       size_t VAR_2, int VAR_3)
{
 struct parport_ip32_private * const VAR_4 = VAR_0->physport->private_data;
 return FUNC_0(VAR_4->regs.eppAddr, VAR_0, VAR_1, VAR_2, VAR_3);
}
