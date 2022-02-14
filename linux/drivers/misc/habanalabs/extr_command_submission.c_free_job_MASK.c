
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hl_device {int dummy; } ;
struct hl_cs_job {scalar_t__ ext_queue; int cs_node; TYPE_1__* patched_cb; int userptr_list; struct hl_cs* cs; } ;
struct hl_cs {int job_lock; } ;
struct TYPE_2__ {int lock; int cs_cnt; } ;


 int FUNC_0 (struct hl_cs*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct hl_device*,struct hl_cs_job*) ;
 int FUNC_3 (struct hl_device*,int *) ;
 int FUNC_4 (struct hl_cs_job*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct hl_device *VAR_0, struct hl_cs_job *VAR_1)
{
 struct hl_cs *VAR_2 = VAR_1->cs;

 if (VAR_1->ext_queue) {
  FUNC_3(VAR_0, &VAR_1->userptr_list);





  if (VAR_1->patched_cb) {
   FUNC_6(&VAR_1->patched_cb->lock);
   VAR_1->patched_cb->cs_cnt--;
   FUNC_7(&VAR_1->patched_cb->lock);

   FUNC_1(VAR_1->patched_cb);
  }
 }





 FUNC_6(&VAR_2->job_lock);
 FUNC_5(&VAR_1->cs_node);
 FUNC_7(&VAR_2->job_lock);

 FUNC_2(VAR_0, VAR_1);

 if (VAR_1->ext_queue)
  FUNC_0(VAR_2);

 FUNC_4(VAR_1);
}
