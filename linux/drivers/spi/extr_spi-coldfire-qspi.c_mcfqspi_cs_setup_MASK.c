
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mcfqspi {TYPE_1__* cs_control; } ;
struct TYPE_2__ {int (* setup ) (TYPE_1__*) ;} ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct mcfqspi *VAR_0)
{
 return (VAR_0->cs_control->setup) ?
  VAR_0->cs_control->setup(VAR_0->cs_control) : 0;
}
