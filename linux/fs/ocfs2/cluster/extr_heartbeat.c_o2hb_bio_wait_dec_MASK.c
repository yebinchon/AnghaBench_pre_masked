
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2hb_bio_wait_ctxt {int wc_io_complete; int wc_num_reqs; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct o2hb_bio_wait_ctxt *VAR_0,
         unsigned int VAR_1)
{


 while(VAR_1--) {
  if (FUNC_1(&VAR_0->wc_num_reqs)) {
   FUNC_0(VAR_1 > 0);
   FUNC_2(&VAR_0->wc_io_complete);
  }
 }
}
