
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpaa_bp {size_t bpid; int pool; scalar_t__ free_buf_cb; int refs; } ;


 int FUNC_0 (int ) ;
 int ** VAR_0 ;
 int FUNC_1 (struct dpaa_bp*) ;
 struct dpaa_bp* FUNC_2 (size_t) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct dpaa_bp *VAR_1)
{
 struct dpaa_bp *VAR_2 = FUNC_2(VAR_1->bpid);





 if (!VAR_2)
  return;

 if (!FUNC_3(&VAR_2->refs))
  return;

 if (VAR_2->free_buf_cb)
  FUNC_1(VAR_2);

 VAR_0[VAR_2->bpid] = ((void*)0);
 FUNC_0(VAR_2->pool);
}
