
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_ctrl {TYPE_1__* opts; } ;
struct TYPE_2__ {int nr_poll_queues; int nr_write_queues; int nr_io_queues; } ;


 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static unsigned int FUNC_2(struct nvme_ctrl *VAR_0)
{
 unsigned int VAR_1;

 VAR_1 = FUNC_0(VAR_0->opts->nr_io_queues, FUNC_1());
 VAR_1 += FUNC_0(VAR_0->opts->nr_write_queues, FUNC_1());
 VAR_1 += FUNC_0(VAR_0->opts->nr_poll_queues, FUNC_1());

 return VAR_1;
}
