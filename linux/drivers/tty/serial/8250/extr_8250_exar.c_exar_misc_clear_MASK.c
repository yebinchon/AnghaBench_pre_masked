
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exar8250 {scalar_t__ virt; TYPE_1__* board; } ;
struct TYPE_2__ {int num_ports; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct exar8250 *VAR_1)
{

 FUNC_0(VAR_1->virt + VAR_0);


 if (VAR_1->board->num_ports > 8)
  FUNC_0(VAR_1->virt + 0x2000 + VAR_0);
}
