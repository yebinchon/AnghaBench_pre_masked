
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_com_io_sq {scalar_t__ direction; size_t qid; int idx; int tx_max_header_size; int mem_queue_type; int q_depth; int msix_vector; } ;
struct ena_com_io_cq {scalar_t__ direction; size_t qid; int idx; int tx_max_header_size; int mem_queue_type; int q_depth; int msix_vector; } ;
struct ena_com_dev {int tx_max_header_size; struct ena_com_io_sq* io_cq_queues; struct ena_com_io_sq* io_sq_queues; } ;
struct ena_com_create_io_ctx {size_t qid; scalar_t__ direction; int mem_queue_type; int queue_size; int msix_vector; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ena_com_dev*,struct ena_com_io_sq*) ;
 int FUNC_1 (struct ena_com_dev*,struct ena_com_io_sq*,int ) ;
 int FUNC_2 (struct ena_com_dev*,struct ena_com_io_sq*) ;
 int FUNC_3 (struct ena_com_dev*,struct ena_com_create_io_ctx*,struct ena_com_io_sq*) ;
 int FUNC_4 (struct ena_com_dev*,struct ena_com_create_io_ctx*,struct ena_com_io_sq*) ;
 int FUNC_5 (struct ena_com_dev*,struct ena_com_io_sq*,struct ena_com_io_sq*) ;
 int FUNC_6 (struct ena_com_io_sq*,int,int) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (char*,size_t,size_t) ;
 int VAR_4 ;

int FUNC_9(struct ena_com_dev *VAR_5,
       struct ena_com_create_io_ctx *VAR_6)
{
 struct ena_com_io_sq *VAR_7;
 struct ena_com_io_cq *VAR_8;
 int VAR_9;

 if (VAR_6->qid >= VAR_2) {
  FUNC_8("Qid (%d) is bigger than max num of queues (%d)\n",
         VAR_6->qid, VAR_2);
  return -VAR_0;
 }

 VAR_7 = &VAR_5->io_sq_queues[VAR_6->qid];
 VAR_8 = &VAR_5->io_cq_queues[VAR_6->qid];

 FUNC_6(VAR_7, 0x0, sizeof(*VAR_7));
 FUNC_6(VAR_8, 0x0, sizeof(*VAR_8));


 VAR_8->q_depth = VAR_6->queue_size;
 VAR_8->direction = VAR_6->direction;
 VAR_8->qid = VAR_6->qid;

 VAR_8->msix_vector = VAR_6->msix_vector;

 VAR_7->q_depth = VAR_6->queue_size;
 VAR_7->direction = VAR_6->direction;
 VAR_7->qid = VAR_6->qid;

 VAR_7->mem_queue_type = VAR_6->mem_queue_type;

 if (VAR_6->direction == VAR_1)

  VAR_7->tx_max_header_size =
   FUNC_7(VAR_4, VAR_5->tx_max_header_size, VAR_3);

 VAR_9 = FUNC_4(VAR_5, VAR_6, VAR_7);
 if (VAR_9)
  goto error;
 VAR_9 = FUNC_3(VAR_5, VAR_6, VAR_8);
 if (VAR_9)
  goto error;

 VAR_9 = FUNC_0(VAR_5, VAR_8);
 if (VAR_9)
  goto error;

 VAR_9 = FUNC_1(VAR_5, VAR_7, VAR_8->idx);
 if (VAR_9)
  goto destroy_io_cq;

 return 0;

destroy_io_cq:
 FUNC_2(VAR_5, VAR_8);
error:
 FUNC_5(VAR_5, VAR_7, VAR_8);
 return VAR_9;
}
