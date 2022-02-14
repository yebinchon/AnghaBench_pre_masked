
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct perf_output_handle {scalar_t__ head; unsigned long size; scalar_t__ wakeup; TYPE_1__* event; } ;
struct arm_spe_pmu_buf {unsigned long nr_pages; } ;
struct arm_spe_pmu {int align; } ;
struct TYPE_2__ {int pmu; } ;


 int FUNC_0 (unsigned long,int ) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_1 (scalar_t__,struct arm_spe_pmu_buf*) ;
 int FUNC_2 (struct perf_output_handle*,unsigned long) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (struct perf_output_handle*,int ) ;
 int FUNC_5 (struct perf_output_handle*,int ) ;
 struct arm_spe_pmu_buf* FUNC_6 (struct perf_output_handle*) ;
 unsigned long FUNC_7 (unsigned long,unsigned long) ;
 unsigned long FUNC_8 (unsigned long,unsigned long) ;
 unsigned long FUNC_9 (unsigned long,int ) ;
 struct arm_spe_pmu* FUNC_10 (int ) ;

__attribute__((used)) static u64 FUNC_11(struct perf_output_handle *VAR_2)
{
 struct arm_spe_pmu *VAR_3 = FUNC_10(VAR_2->event->pmu);
 struct arm_spe_pmu_buf *VAR_4 = FUNC_6(VAR_2);
 const u64 VAR_5 = VAR_4->nr_pages * VAR_0;
 u64 VAR_6 = VAR_5;
 u64 VAR_7, VAR_8, VAR_9;
 VAR_7 = FUNC_1(VAR_2->head, VAR_4);
 if (!FUNC_0(VAR_7, VAR_3->align)) {
  unsigned long VAR_10 = FUNC_9(VAR_7, VAR_3->align) - VAR_7;

  VAR_10 = FUNC_3(VAR_10, VAR_2->size);
  FUNC_2(VAR_2, VAR_10);
  VAR_7 = FUNC_1(VAR_2->head, VAR_4);
 }


 if (!VAR_2->size)
  goto no_space;


 VAR_8 = FUNC_1(VAR_2->head + VAR_2->size, VAR_4);
 VAR_9 = FUNC_1(VAR_2->wakeup, VAR_4);







 if (VAR_7 < VAR_8)
  VAR_6 = FUNC_7(VAR_8, VAR_0);
 if (VAR_2->wakeup < (VAR_2->head + VAR_2->size) && VAR_7 <= VAR_9)
  VAR_6 = FUNC_3(VAR_6, FUNC_8(VAR_9, VAR_0));

 if (VAR_6 > VAR_7)
  return VAR_6;

 FUNC_2(VAR_2, VAR_2->size);
no_space:
 FUNC_5(VAR_2, VAR_1);
 FUNC_4(VAR_2, 0);
 return 0;
}
