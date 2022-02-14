
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mxs_auart_port {TYPE_1__* vendor; } ;
struct TYPE_2__ {unsigned int* reg_offset; } ;



__attribute__((used)) static unsigned int FUNC_0(const struct mxs_auart_port *VAR_0,
          unsigned int VAR_1)
{
 return VAR_0->vendor->reg_offset[VAR_1];
}
