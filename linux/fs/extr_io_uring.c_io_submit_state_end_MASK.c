
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_submit_state {size_t cur_req; int * reqs; scalar_t__ free_reqs; int plug; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct io_submit_state*) ;
 int FUNC_2 (int ,scalar_t__,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct io_submit_state *VAR_1)
{
 FUNC_0(&VAR_1->plug);
 FUNC_1(VAR_1);
 if (VAR_1->free_reqs)
  FUNC_2(VAR_0, VAR_1->free_reqs,
     &VAR_1->reqs[VAR_1->cur_req]);
}
