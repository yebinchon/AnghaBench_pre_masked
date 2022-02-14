
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nr_sbal_nop; } ;
struct qdio_q {int nr; TYPE_2__* irq_ptr; TYPE_1__ q_stats; int nr_buf_used; int timestamp; } ;
struct TYPE_4__ {int perf_stat_enabled; } ;


 int FUNC_0 (int ,TYPE_2__*,char*,int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;





 int FUNC_1 (int) ;
 int FUNC_2 (struct qdio_q*,int) ;
 int FUNC_3 (struct qdio_q*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (struct qdio_q*,unsigned int,unsigned char*,int,int,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (struct qdio_q*,unsigned int,int) ;
 int VAR_2 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct qdio_q*,unsigned int,int) ;
 int FUNC_11 (struct qdio_q*,int ) ;

__attribute__((used)) static int FUNC_12(struct qdio_q *VAR_3, unsigned int VAR_4)
{
 unsigned char VAR_5 = 0;
 int VAR_6;

 VAR_3->timestamp = FUNC_7();





 VAR_6 = FUNC_9(FUNC_4(&VAR_3->nr_buf_used), VAR_1);
 if (!VAR_6)
  return 0;





 VAR_6 = FUNC_6(VAR_3, VAR_4, &VAR_5, VAR_6, 1, 0);
 if (!VAR_6)
  return 0;

 switch (VAR_5) {
 case 128:
  FUNC_8(VAR_3, VAR_4, VAR_6);
  if (FUNC_5(VAR_6, &VAR_3->nr_buf_used) == 0)
   FUNC_11(VAR_3, VAR_2);
  if (VAR_3->irq_ptr->perf_stat_enabled)
   FUNC_2(VAR_3, VAR_6);
  return VAR_6;
 case 130:
  FUNC_10(VAR_3, VAR_4, VAR_6);
  if (FUNC_5(VAR_6, &VAR_3->nr_buf_used) == 0)
   FUNC_11(VAR_3, VAR_2);
  if (VAR_3->irq_ptr->perf_stat_enabled)
   FUNC_3(VAR_3, VAR_6);
  return VAR_6;
 case 132:
 case 129:
 case 131:
  if (VAR_3->irq_ptr->perf_stat_enabled)
   VAR_3->q_stats.nr_sbal_nop++;
  FUNC_0(VAR_0, VAR_3->irq_ptr, "in nop:%1d %#02x",
         VAR_3->nr, VAR_4);
  return 0;
 default:
  FUNC_1(1);
  return 0;
 }
}
