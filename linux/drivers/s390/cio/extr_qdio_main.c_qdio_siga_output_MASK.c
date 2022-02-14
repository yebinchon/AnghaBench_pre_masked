
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef unsigned long u32 ;
struct qdio_q {TYPE_1__* irq_ptr; int nr; int mask; } ;
struct TYPE_2__ {unsigned long sch_token; int schid; } ;


 int FUNC_0 (int ,TYPE_1__*,char*,int,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct qdio_q*) ;
 int FUNC_2 (unsigned long,int ,unsigned int*,unsigned int,unsigned long) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (struct qdio_q*) ;
 scalar_t__ FUNC_5 (unsigned int) ;

__attribute__((used)) static int FUNC_6(struct qdio_q *VAR_5, unsigned int *VAR_6,
 unsigned long VAR_7)
{
 unsigned long VAR_8 = *((u32 *) &VAR_5->irq_ptr->schid);
 unsigned int VAR_9 = VAR_3;
 u64 VAR_10 = 0;
 int VAR_11 = 0, VAR_12;
 unsigned long VAR_13 = 0;

 if (VAR_7) {
  VAR_9 = VAR_4;
  VAR_13 = VAR_7;
 }

 if (FUNC_4(VAR_5)) {
  VAR_8 = VAR_5->irq_ptr->sch_token;
  VAR_9 |= VAR_2;
 }
again:
 VAR_12 = FUNC_2(VAR_8, VAR_5->mask, VAR_6, VAR_9, VAR_13);


 if (FUNC_5(*VAR_6)) {
  VAR_11++;

  if (!VAR_10) {
   VAR_10 = FUNC_3();
   goto again;
  }
  if (FUNC_3() - VAR_10 < VAR_1)
   goto again;
 }
 if (VAR_11) {
  FUNC_0(VAR_0, VAR_5->irq_ptr,
         "%4x cc2 BB1:%1d", FUNC_1(VAR_5), VAR_5->nr);
  FUNC_0(VAR_0, VAR_5->irq_ptr, "count:%u", VAR_11);
 }
 return VAR_12;
}
