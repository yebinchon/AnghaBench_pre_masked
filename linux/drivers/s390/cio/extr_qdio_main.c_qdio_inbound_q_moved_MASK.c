
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int timestamp; } ;
struct TYPE_4__ {TYPE_1__ in; } ;
struct qdio_q {TYPE_2__ u; int irq_ptr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct qdio_q*,unsigned int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct qdio_q *VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);

 if (VAR_3 && !FUNC_2(VAR_1->irq_ptr) && VAR_0)
  VAR_1->u.in.timestamp = FUNC_1();

 return VAR_3;
}
