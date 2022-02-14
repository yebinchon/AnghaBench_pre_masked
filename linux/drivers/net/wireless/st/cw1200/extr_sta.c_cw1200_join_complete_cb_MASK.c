
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsm_join_complete {int status; } ;
struct cw1200_common {int join_complete_work; int workqueue; int join_complete_status; int join_timeout; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct cw1200_common *VAR_0,
        struct wsm_join_complete *VAR_1)
{
 FUNC_1("[STA] cw1200_join_complete_cb called, status=%d.\n",
   VAR_1->status);

 if (FUNC_0(&VAR_0->join_timeout)) {
  VAR_0->join_complete_status = VAR_1->status;
  FUNC_2(VAR_0->workqueue, &VAR_0->join_complete_work);
 }
}
