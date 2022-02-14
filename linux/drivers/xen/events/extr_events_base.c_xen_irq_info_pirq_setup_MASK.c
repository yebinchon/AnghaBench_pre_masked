
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {unsigned int pirq; unsigned int gsi; unsigned char flags; int domid; } ;
struct TYPE_4__ {TYPE_1__ pirq; } ;
struct irq_info {TYPE_2__ u; } ;


 int VAR_0 ;
 struct irq_info* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct irq_info*,unsigned int,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(unsigned VAR_1,
       unsigned VAR_2,
       unsigned VAR_3,
       unsigned VAR_4,
       uint16_t VAR_5,
       unsigned char VAR_6)
{
 struct irq_info *VAR_7 = FUNC_0(VAR_1);

 VAR_7->u.pirq.pirq = VAR_3;
 VAR_7->u.pirq.gsi = VAR_4;
 VAR_7->u.pirq.domid = VAR_5;
 VAR_7->u.pirq.flags = VAR_6;

 return FUNC_1(VAR_7, VAR_1, VAR_0, VAR_2, 0);
}
