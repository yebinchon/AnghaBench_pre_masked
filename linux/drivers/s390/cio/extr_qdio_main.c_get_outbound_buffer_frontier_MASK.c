
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int nr_sbal_nop; } ;
struct TYPE_6__ {int use_cq; } ;
struct TYPE_7__ {TYPE_1__ out; } ;
struct qdio_q {int nr; TYPE_4__* irq_ptr; TYPE_3__ q_stats; int nr_buf_used; TYPE_2__ u; int timestamp; } ;
struct TYPE_9__ {int perf_stat_enabled; } ;


 int FUNC_0 (int ,TYPE_4__*,char*,int ,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;






 int FUNC_1 (int) ;
 int FUNC_2 (struct qdio_q*,int) ;
 int FUNC_3 (struct qdio_q*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (struct qdio_q*,unsigned int,unsigned char*,int,int ,int ) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (struct qdio_q*) ;
 scalar_t__ FUNC_9 (struct qdio_q*) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (struct qdio_q*,unsigned int,int) ;
 int FUNC_12 (struct qdio_q*) ;
 scalar_t__ FUNC_13 (struct qdio_q*) ;

__attribute__((used)) static int FUNC_14(struct qdio_q *VAR_2, unsigned int VAR_3)
{
 unsigned char VAR_4 = 0;
 int VAR_5;

 VAR_2->timestamp = FUNC_7();

 if (FUNC_9(VAR_2))
  if (((FUNC_13(VAR_2) != VAR_1) &&
      !FUNC_10(VAR_2->irq_ptr)) ||
      (FUNC_13(VAR_2) == VAR_1 &&
      FUNC_8(VAR_2)))
   FUNC_12(VAR_2);

 VAR_5 = FUNC_4(&VAR_2->nr_buf_used);
 if (!VAR_5)
  return 0;

 VAR_5 = FUNC_6(VAR_2, VAR_3, &VAR_4, VAR_5, 0, VAR_2->u.out.use_cq);
 if (!VAR_5)
  return 0;

 switch (VAR_4) {
 case 132:
 case 128:

  FUNC_0(VAR_0, VAR_2->irq_ptr,
   "out empty:%1d %02x", VAR_2->nr, VAR_5);

  FUNC_5(VAR_5, &VAR_2->nr_buf_used);
  if (VAR_2->irq_ptr->perf_stat_enabled)
   FUNC_2(VAR_2, VAR_5);
  return VAR_5;
 case 131:
  FUNC_11(VAR_2, VAR_3, VAR_5);
  FUNC_5(VAR_5, &VAR_2->nr_buf_used);
  if (VAR_2->irq_ptr->perf_stat_enabled)
   FUNC_3(VAR_2, VAR_5);
  return VAR_5;
 case 133:

  if (VAR_2->irq_ptr->perf_stat_enabled)
   VAR_2->q_stats.nr_sbal_nop++;
  FUNC_0(VAR_0, VAR_2->irq_ptr, "out primed:%1d",
         VAR_2->nr);
  return 0;
 case 129:
 case 130:
  return 0;
 default:
  FUNC_1(1);
  return 0;
 }
}
