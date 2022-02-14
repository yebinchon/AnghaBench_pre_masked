
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int polling; int ack_count; unsigned int ack_start; } ;
struct TYPE_4__ {TYPE_1__ in; } ;
struct qdio_q {TYPE_2__ u; int nr; int irq_ptr; } ;


 int FUNC_0 (int ,int ,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned int,int) ;
 scalar_t__ FUNC_2 (struct qdio_q*) ;
 int FUNC_3 (struct qdio_q*,int,int ) ;
 int FUNC_4 (struct qdio_q*,unsigned int,int ,int) ;

__attribute__((used)) static inline void FUNC_5(struct qdio_q *VAR_3, unsigned int VAR_4,
      int VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_0, VAR_3->irq_ptr, "in prim:%1d %02x", VAR_3->nr, VAR_5);


 if (FUNC_2(VAR_3)) {
  if (!VAR_3->u.in.polling) {
   VAR_3->u.in.polling = 1;
   VAR_3->u.in.ack_count = VAR_5;
   VAR_3->u.in.ack_start = VAR_4;
   return;
  }


  FUNC_4(VAR_3, VAR_3->u.in.ack_start, VAR_2,
          VAR_3->u.in.ack_count);
  VAR_3->u.in.ack_count = VAR_5;
  VAR_3->u.in.ack_start = VAR_4;
  return;
 }





 VAR_6 = FUNC_1(VAR_4, VAR_5 - 1);
 if (VAR_3->u.in.polling) {

  FUNC_3(VAR_3, VAR_6, VAR_1);
  FUNC_3(VAR_3, VAR_3->u.in.ack_start, VAR_2);
 } else {
  VAR_3->u.in.polling = 1;
  FUNC_3(VAR_3, VAR_6, VAR_1);
 }

 VAR_3->u.in.ack_start = VAR_6;
 VAR_5--;
 if (!VAR_5)
  return;

 FUNC_4(VAR_3, VAR_4, VAR_2, VAR_5);
}
