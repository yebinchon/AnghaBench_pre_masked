
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmf_ctrl_options {unsigned int nr_write_queues; unsigned int nr_io_queues; unsigned int nr_poll_queues; } ;
struct nvme_tcp_ctrl {unsigned int* io_queues; } ;
struct nvme_ctrl {struct nvmf_ctrl_options* opts; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 void* FUNC_0 (unsigned int,unsigned int) ;
 struct nvme_tcp_ctrl* FUNC_1 (struct nvme_ctrl*) ;

__attribute__((used)) static void FUNC_2(struct nvme_ctrl *VAR_3,
  unsigned int VAR_4)
{
 struct nvme_tcp_ctrl *VAR_5 = FUNC_1(VAR_3);
 struct nvmf_ctrl_options *VAR_6 = VAR_3->opts;

 if (VAR_6->nr_write_queues && VAR_6->nr_io_queues < VAR_4) {





  VAR_5->io_queues[VAR_2] = VAR_6->nr_io_queues;
  VAR_4 -= VAR_5->io_queues[VAR_2];
  VAR_5->io_queues[VAR_0] =
   FUNC_0(VAR_6->nr_write_queues, VAR_4);
  VAR_4 -= VAR_5->io_queues[VAR_0];
 } else {





  VAR_5->io_queues[VAR_0] =
   FUNC_0(VAR_6->nr_io_queues, VAR_4);
  VAR_4 -= VAR_5->io_queues[VAR_0];
 }

 if (VAR_6->nr_poll_queues && VAR_4) {

  VAR_5->io_queues[VAR_1] =
   FUNC_0(VAR_6->nr_poll_queues, VAR_4);
 }
}
