
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ use_cq; } ;
struct TYPE_4__ {TYPE_1__ out; } ;
struct qdio_q {TYPE_2__ u; int nr; int irq_ptr; } ;


 int FUNC_0 (int ,int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct qdio_q*,unsigned int) ;
 int FUNC_2 (struct qdio_q*,unsigned int,int) ;

__attribute__((used)) static inline int FUNC_3(struct qdio_q *VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);

 if (VAR_3) {
  FUNC_0(VAR_0, VAR_1->irq_ptr, "out moved:%1d", VAR_1->nr);
  if (VAR_1->u.out.use_cq)
   FUNC_2(VAR_1, VAR_2, VAR_3);
 }

 return VAR_3;
}
