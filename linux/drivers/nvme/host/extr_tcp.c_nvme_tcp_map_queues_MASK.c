
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvmf_ctrl_options {scalar_t__ nr_poll_queues; scalar_t__ nr_write_queues; } ;
struct TYPE_3__ {int device; struct nvmf_ctrl_options* opts; } ;
struct nvme_tcp_ctrl {scalar_t__* io_queues; TYPE_1__ ctrl; } ;
struct blk_mq_tag_set {TYPE_2__* map; struct nvme_tcp_ctrl* driver_data; } ;
struct TYPE_4__ {scalar_t__ queue_offset; scalar_t__ nr_queues; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct blk_mq_tag_set *VAR_3)
{
 struct nvme_tcp_ctrl *VAR_4 = VAR_3->driver_data;
 struct nvmf_ctrl_options *VAR_5 = VAR_4->ctrl.opts;

 if (VAR_5->nr_write_queues && VAR_4->io_queues[VAR_2]) {

  VAR_3->map[VAR_0].nr_queues =
   VAR_4->io_queues[VAR_0];
  VAR_3->map[VAR_0].queue_offset = 0;
  VAR_3->map[VAR_2].nr_queues =
   VAR_4->io_queues[VAR_2];
  VAR_3->map[VAR_2].queue_offset =
   VAR_4->io_queues[VAR_0];
 } else {

  VAR_3->map[VAR_0].nr_queues =
   VAR_4->io_queues[VAR_0];
  VAR_3->map[VAR_0].queue_offset = 0;
  VAR_3->map[VAR_2].nr_queues =
   VAR_4->io_queues[VAR_0];
  VAR_3->map[VAR_2].queue_offset = 0;
 }
 FUNC_0(&VAR_3->map[VAR_0]);
 FUNC_0(&VAR_3->map[VAR_2]);

 if (VAR_5->nr_poll_queues && VAR_4->io_queues[VAR_1]) {

  VAR_3->map[VAR_1].nr_queues =
    VAR_4->io_queues[VAR_1];
  VAR_3->map[VAR_1].queue_offset =
   VAR_4->io_queues[VAR_0] +
   VAR_4->io_queues[VAR_2];
  FUNC_0(&VAR_3->map[VAR_1]);
 }

 FUNC_1(VAR_4->ctrl.device,
  "mapped %d/%d/%d default/read/poll queues.\n",
  VAR_4->io_queues[VAR_0],
  VAR_4->io_queues[VAR_2],
  VAR_4->io_queues[VAR_1]);

 return 0;
}
