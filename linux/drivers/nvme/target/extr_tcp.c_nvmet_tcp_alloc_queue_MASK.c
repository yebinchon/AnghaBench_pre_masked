
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct nvmet_tcp_queue {int idx; int connect; int nvme_sq; int queue_list; int io_work; int cpu; int resp_send_list; int resp_list; int free_list; int state; int state_lock; scalar_t__ nr_cmds; struct nvmet_tcp_port* port; struct socket* sock; int release_work; } ;
struct nvmet_tcp_port {int last_cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct nvmet_tcp_queue*) ;
 struct nvmet_tcp_queue* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct nvmet_tcp_queue*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct nvmet_tcp_queue*,int *) ;
 int FUNC_16 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_17 (struct nvmet_tcp_queue*) ;
 int VAR_9 ;
 int FUNC_18 (int ,int ,int *) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(struct nvmet_tcp_port *VAR_10,
  struct socket *VAR_11)
{
 struct nvmet_tcp_queue *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_7(sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 FUNC_1(&VAR_12->release_work, VAR_8);
 FUNC_1(&VAR_12->io_work, VAR_4);
 VAR_12->sock = VAR_11;
 VAR_12->port = VAR_10;
 VAR_12->nr_cmds = 0;
 FUNC_19(&VAR_12->state_lock);
 VAR_12->state = VAR_2;
 FUNC_0(&VAR_12->free_list);
 FUNC_5(&VAR_12->resp_list);
 FUNC_0(&VAR_12->resp_send_list);

 VAR_12->idx = FUNC_3(&VAR_5, 0, 0, VAR_1);
 if (VAR_12->idx < 0) {
  VAR_13 = VAR_12->idx;
  goto out_free_queue;
 }

 VAR_13 = FUNC_15(VAR_12, &VAR_12->connect);
 if (VAR_13)
  goto out_ida_remove;

 VAR_13 = FUNC_14(&VAR_12->nvme_sq);
 if (VAR_13)
  goto out_free_connect;

 VAR_10->last_cpu = FUNC_2(VAR_10->last_cpu,
    VAR_3, -1, 0);
 VAR_12->cpu = VAR_10->last_cpu;
 FUNC_12(VAR_12);

 FUNC_10(&VAR_7);
 FUNC_8(&VAR_12->queue_list, &VAR_6);
 FUNC_11(&VAR_7);

 VAR_13 = FUNC_17(VAR_12);
 if (VAR_13)
  goto out_destroy_sq;

 FUNC_18(VAR_12->cpu, VAR_9, &VAR_12->io_work);

 return 0;
out_destroy_sq:
 FUNC_10(&VAR_7);
 FUNC_9(&VAR_12->queue_list);
 FUNC_11(&VAR_7);
 FUNC_13(&VAR_12->nvme_sq);
out_free_connect:
 FUNC_16(&VAR_12->connect);
out_ida_remove:
 FUNC_4(&VAR_5, VAR_12->idx);
out_free_queue:
 FUNC_6(VAR_12);
 return VAR_13;
}
