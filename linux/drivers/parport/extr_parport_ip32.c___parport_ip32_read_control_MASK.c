
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parport_ip32_private {unsigned int dcr_cache; } ;
struct parport {TYPE_1__* physport; } ;
struct TYPE_2__ {struct parport_ip32_private* private_data; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct parport *VAR_0)
{
 struct parport_ip32_private * const VAR_1 = VAR_0->physport->private_data;
 return VAR_1->dcr_cache;
}
