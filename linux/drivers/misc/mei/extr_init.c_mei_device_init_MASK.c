
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_hw_ops {int dummy; } ;
struct mei_device {struct device* dev; struct mei_hw_ops const* ops; int pg_event; int host_clients_map; scalar_t__ open_handle_count; int bus_rescan_work; int reset_work; int timer_work; int tx_queue_limit; int ctrl_rd_list; int ctrl_wr_list; int write_waiting_list; int write_list; scalar_t__ reset_count; int dev_state; int wait_hbm_start; int wait_pg; int wait_hw_ready; int cl_bus_lock; int me_clients_rwsem; int device_lock; int me_clients; int device_list; int file_list; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int *) ;

void FUNC_8(struct mei_device *VAR_7,
       struct device *VAR_8,
       const struct mei_hw_ops *VAR_9)
{

 FUNC_1(&VAR_7->file_list);
 FUNC_1(&VAR_7->device_list);
 FUNC_1(&VAR_7->me_clients);
 FUNC_7(&VAR_7->device_lock);
 FUNC_5(&VAR_7->me_clients_rwsem);
 FUNC_7(&VAR_7->cl_bus_lock);
 FUNC_6(&VAR_7->wait_hw_ready);
 FUNC_6(&VAR_7->wait_pg);
 FUNC_6(&VAR_7->wait_hbm_start);
 VAR_7->dev_state = VAR_1;
 VAR_7->reset_count = 0;

 FUNC_1(&VAR_7->write_list);
 FUNC_1(&VAR_7->write_waiting_list);
 FUNC_1(&VAR_7->ctrl_wr_list);
 FUNC_1(&VAR_7->ctrl_rd_list);
 VAR_7->tx_queue_limit = VAR_3;

 FUNC_0(&VAR_7->timer_work, VAR_6);
 FUNC_2(&VAR_7->reset_work, VAR_5);
 FUNC_2(&VAR_7->bus_rescan_work, VAR_4);

 FUNC_4(VAR_7->host_clients_map, VAR_0);
 VAR_7->open_handle_count = 0;





 FUNC_3(VAR_7->host_clients_map, 0, 1);

 VAR_7->pg_event = VAR_2;
 VAR_7->ops = VAR_9;
 VAR_7->dev = VAR_8;
}
