
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int queue; } ;
struct iscsi_tcp_task {int queue2pool; struct iscsi_r2t_info* r2t; int r2tqueue; TYPE_1__ r2tpool; } ;
struct iscsi_r2t_info {scalar_t__ data_length; scalar_t__ sent; } ;
struct iscsi_task {int conn; struct iscsi_r2t_info unsol_r2t; struct iscsi_tcp_task* dd_data; } ;


 int FUNC_0 (int ,char*,struct iscsi_r2t_info*) ;
 scalar_t__ FUNC_1 (struct iscsi_task*) ;
 int FUNC_2 (int *,void*,int) ;
 int FUNC_3 (int *,void*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct iscsi_r2t_info *FUNC_6(struct iscsi_task *VAR_0)
{
 struct iscsi_tcp_task *VAR_1 = VAR_0->dd_data;
 struct iscsi_r2t_info *VAR_2 = ((void*)0);

 if (FUNC_1(VAR_0))
  VAR_2 = &VAR_0->unsol_r2t;
 else {
  FUNC_4(&VAR_1->queue2pool);
  if (VAR_1->r2t) {
   VAR_2 = VAR_1->r2t;

   if (VAR_2->data_length <= VAR_2->sent) {
    FUNC_0(VAR_0->conn,
           "  done with r2t %p\n", VAR_2);
    FUNC_2(&VAR_1->r2tpool.queue,
         (void *)&VAR_1->r2t,
         sizeof(void *));
    VAR_1->r2t = VAR_2 = ((void*)0);
   }
  }

  if (VAR_2 == ((void*)0)) {
   if (FUNC_3(&VAR_1->r2tqueue,
       (void *)&VAR_1->r2t, sizeof(void *)) !=
       sizeof(void *))
    VAR_2 = ((void*)0);
   else
    VAR_2 = VAR_1->r2t;
  }
  FUNC_5(&VAR_1->queue2pool);
 }

 return VAR_2;
}
