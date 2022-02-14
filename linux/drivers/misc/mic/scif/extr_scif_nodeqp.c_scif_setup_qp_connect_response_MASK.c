
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_10__ {void* rb_base; int size; scalar_t__ current_read_offset; } ;
struct scif_qp {TYPE_4__ inbound_q; int local_write; TYPE_3__* remote_qp; scalar_t__ local_read; TYPE_4__ outbound_q; } ;
struct scif_dev {int node; TYPE_1__* sdev; } ;
typedef int phys_addr_t ;
struct TYPE_12__ {int node; } ;
struct TYPE_11__ {size_t nodeid; } ;
struct TYPE_8__ {int size; } ;
struct TYPE_9__ {scalar_t__ magic; scalar_t__ local_read; int local_write; TYPE_2__ inbound_q; int local_buf; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (int) ;
 TYPE_6__* VAR_4 ;
 TYPE_5__ VAR_5 ;
 void* FUNC_2 (int ,int,struct scif_dev*) ;
 int FUNC_3 (TYPE_4__*,scalar_t__*,int *,void*,int ) ;

int FUNC_4(struct scif_dev *VAR_6,
       struct scif_qp *VAR_7, u64 VAR_8)
{
 int VAR_9 = 0;
 void *VAR_10;
 int VAR_11;
 phys_addr_t VAR_12;

 VAR_7->remote_qp = FUNC_2(VAR_8, sizeof(struct scif_qp), VAR_6);

 if (!VAR_7->remote_qp) {
  VAR_9 = -VAR_2;
  goto error;
 }

 if (VAR_7->remote_qp->magic != VAR_3) {
  FUNC_0(&VAR_6->sdev->dev,
   "SCIFEP_MAGIC mismatch between self %d remote %d\n",
   VAR_4[VAR_5.nodeid].node, VAR_6->node);
  VAR_9 = -VAR_1;
  goto error;
 }

 VAR_12 = VAR_7->remote_qp->local_buf;
 VAR_11 = VAR_7->remote_qp->inbound_q.size;
 VAR_10 = FUNC_2(VAR_12, VAR_11, VAR_6);

 if (!VAR_10)
  return -VAR_0;

 VAR_7->local_read = 0;
 FUNC_3(&VAR_7->outbound_q,
       &VAR_7->local_read,
       &VAR_7->remote_qp->local_write,
       VAR_10,
       FUNC_1(VAR_11));




 VAR_7->remote_qp->local_read = VAR_7->inbound_q.current_read_offset;




 FUNC_3(&VAR_7->inbound_q,
       &VAR_7->remote_qp->local_read,
       &VAR_7->local_write,
       VAR_7->inbound_q.rb_base,
       FUNC_1(VAR_7->inbound_q.size));
error:
 return VAR_9;
}
