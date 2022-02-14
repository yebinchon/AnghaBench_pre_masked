
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc_dump_segment {int size; int da; scalar_t__ priv; } ;
struct rproc {struct q6v5* priv; } ;
struct q6v5 {unsigned long dump_segment_mask; unsigned long dump_complete_mask; scalar_t__ dump_mba_loaded; } ;


 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (void*,void*,int ) ;
 int FUNC_2 (void*,int,int ) ;
 int FUNC_3 (struct q6v5*) ;
 int FUNC_4 (struct q6v5*) ;
 void* FUNC_5 (struct rproc*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct rproc *VAR_0,
       struct rproc_dump_segment *VAR_1,
       void *VAR_2)
{
 int VAR_3 = 0;
 struct q6v5 *VAR_4 = VAR_0->priv;
 unsigned long VAR_5 = FUNC_0((unsigned long)VAR_1->priv);
 void *VAR_6 = FUNC_5(VAR_0, VAR_1->da, VAR_1->size);


 if (!VAR_4->dump_mba_loaded)
  VAR_3 = FUNC_3(VAR_4);

 if (!VAR_6 || VAR_3)
  FUNC_2(VAR_2, 0xff, VAR_1->size);
 else
  FUNC_1(VAR_2, VAR_6, VAR_1->size);

 VAR_4->dump_segment_mask |= VAR_5;


 if (VAR_4->dump_segment_mask == VAR_4->dump_complete_mask) {
  if (VAR_4->dump_mba_loaded)
   FUNC_4(VAR_4);
 }
}
