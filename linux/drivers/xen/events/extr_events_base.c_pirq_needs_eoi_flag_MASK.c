
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ pirq; } ;
struct irq_info {scalar_t__ type; TYPE_2__ u; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct irq_info* FUNC_1 (unsigned int) ;

__attribute__((used)) static bool FUNC_2(unsigned VAR_2)
{
 struct irq_info *VAR_3 = FUNC_1(VAR_2);
 FUNC_0(VAR_3->type != VAR_0);

 return VAR_3->u.pirq.flags & VAR_1;
}
