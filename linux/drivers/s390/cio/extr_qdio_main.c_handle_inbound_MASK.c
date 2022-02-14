
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ack_count; int ack_start; scalar_t__ polling; } ;
struct TYPE_4__ {TYPE_1__ in; } ;
struct qdio_q {int nr_buf_used; TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (int,int,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct qdio_q*) ;
 scalar_t__ FUNC_4 (struct qdio_q*) ;
 int FUNC_5 (struct qdio_q*) ;
 int FUNC_6 (struct qdio_q*,int ) ;
 int FUNC_7 (struct qdio_q*,int,int ,int) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct qdio_q *VAR_3, unsigned int VAR_4,
     int VAR_5, int VAR_6)
{
 int VAR_7;

 FUNC_6(VAR_3, VAR_2);

 if (!VAR_3->u.in.polling)
  goto set;


 if (VAR_6 == VAR_0) {

  VAR_3->u.in.polling = 0;
  VAR_3->u.in.ack_count = 0;
  goto set;
 } else if (FUNC_2(VAR_3->u.in.ack_start, VAR_5, VAR_6)) {
  if (FUNC_3(VAR_3)) {

   VAR_7 = FUNC_0(VAR_5, VAR_6);
   VAR_7 = FUNC_8(VAR_7, VAR_3->u.in.ack_start);
   VAR_3->u.in.ack_count -= VAR_7;
   if (VAR_3->u.in.ack_count <= 0) {
    VAR_3->u.in.polling = 0;
    VAR_3->u.in.ack_count = 0;
    goto set;
   }
   VAR_3->u.in.ack_start = FUNC_0(VAR_3->u.in.ack_start, VAR_7);
  }
  else

   VAR_3->u.in.polling = 0;
 }

set:
 VAR_6 = FUNC_7(VAR_3, VAR_5, VAR_1, VAR_6);
 FUNC_1(VAR_6, &VAR_3->nr_buf_used);

 if (FUNC_4(VAR_3))
  return FUNC_5(VAR_3);

 return 0;
}
