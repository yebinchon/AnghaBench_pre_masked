
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ring_buffer {int aux_nr_pages; int aux_overwrite; long aux_watermark; int aux_pgoff; int aux_refcount; int aux_priv; int * aux_pages; int free_aux; } ;
struct perf_event {int cpu; TYPE_1__* pmu; } ;
struct page {int dummy; } ;
typedef int pgoff_t ;
struct TYPE_2__ {int capabilities; int (* setup_aux ) (struct perf_event*,int *,int,int) ;int free_aux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ring_buffer*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct perf_event*) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (int,int,int ,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct page*) ;
 struct page* FUNC_8 (int,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (struct perf_event*,int *,int,int) ;
 struct page* FUNC_11 (int ) ;

int FUNC_12(struct ring_buffer *VAR_7, struct perf_event *VAR_8,
   pgoff_t VAR_9, int VAR_10, long VAR_11, int VAR_12)
{
 bool VAR_13 = !(VAR_12 & VAR_6);
 int VAR_14 = (VAR_8->cpu == -1) ? -1 : FUNC_1(VAR_8->cpu);
 int VAR_15 = -VAR_1, VAR_16;

 if (!FUNC_2(VAR_8))
  return -VAR_2;





 VAR_16 = FUNC_3(VAR_10);





 if (!VAR_13) {
  if (!VAR_16)
   return -VAR_0;

  VAR_16--;
 }

 VAR_7->aux_pages = FUNC_4(VAR_10, sizeof(void *), VAR_3,
         VAR_14);
 if (!VAR_7->aux_pages)
  return -VAR_1;

 VAR_7->free_aux = VAR_8->pmu->free_aux;
 for (VAR_7->aux_nr_pages = 0; VAR_7->aux_nr_pages < VAR_10;) {
  struct page *VAR_17;
  int VAR_18, VAR_19;

  VAR_19 = FUNC_5(VAR_16, FUNC_3(VAR_10 - VAR_7->aux_nr_pages));
  VAR_17 = FUNC_8(VAR_14, VAR_19);
  if (!VAR_17)
   goto out;

  for (VAR_18 = VAR_7->aux_nr_pages + (1 << FUNC_7(VAR_17));
       VAR_18 > VAR_7->aux_nr_pages; VAR_7->aux_nr_pages++)
   VAR_7->aux_pages[VAR_7->aux_nr_pages] = FUNC_6(VAR_17++);
 }







 if ((VAR_8->pmu->capabilities & VAR_5) &&
     VAR_13) {
  struct page *VAR_20 = FUNC_11(VAR_7->aux_pages[0]);

  if (FUNC_7(VAR_20) != VAR_16)
   goto out;
 }

 VAR_7->aux_priv = VAR_8->pmu->setup_aux(VAR_8, VAR_7->aux_pages, VAR_10,
          VAR_13);
 if (!VAR_7->aux_priv)
  goto out;

 VAR_15 = 0;







 FUNC_9(&VAR_7->aux_refcount, 1);

 VAR_7->aux_overwrite = VAR_13;
 VAR_7->aux_watermark = VAR_11;

 if (!VAR_7->aux_watermark && !VAR_7->aux_overwrite)
  VAR_7->aux_watermark = VAR_10 << (VAR_4 - 1);

out:
 if (!VAR_15)
  VAR_7->aux_pgoff = VAR_9;
 else
  FUNC_0(VAR_7);

 return VAR_15;
}
