
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int type; } ;
struct TYPE_4__ {TYPE_2__ ret; } ;
struct virtio_pmem_request {int done; int wq_buf_avail; TYPE_1__ resp; int host_acked; int wq_buf; int list; TYPE_2__ req; } ;
struct virtio_pmem {int pmem_lock; int req_vq; int req_list; } ;
struct virtio_device {int dev; struct virtio_pmem* priv; } ;
struct scatterlist {int dummy; } ;
struct nd_region {struct virtio_device* provider_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct virtio_pmem_request*) ;
 struct virtio_pmem_request* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_2__) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (struct scatterlist*,TYPE_2__*,int) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int ,struct scatterlist**,int,int,struct virtio_pmem_request*,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int) ;

__attribute__((used)) static int FUNC_15(struct nd_region *VAR_6)
{
 struct virtio_device *VAR_7 = VAR_6->provider_data;
 struct virtio_pmem *VAR_8 = VAR_7->priv;
 struct virtio_pmem_request *VAR_9;
 struct scatterlist *VAR_10[2], VAR_11, VAR_12;
 unsigned long VAR_13;
 int VAR_14, VAR_15;

 FUNC_8();
 VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_4);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->done = 0;
 FUNC_3(&VAR_9->host_acked);
 FUNC_3(&VAR_9->wq_buf);
 FUNC_0(&VAR_9->list);
 VAR_9->req.type = FUNC_1(VAR_5);
 FUNC_9(&VAR_11, &VAR_9->req, sizeof(VAR_9->req));
 VAR_10[0] = &VAR_11;
 FUNC_9(&VAR_12, &VAR_9->resp.ret, sizeof(VAR_9->resp));
 VAR_10[1] = &VAR_12;

 FUNC_10(&VAR_8->pmem_lock, VAR_13);






 while ((VAR_14 = FUNC_12(VAR_8->req_vq, VAR_10, 1, 1, VAR_9,
     VAR_3)) == -VAR_2) {

  FUNC_2(&VAR_7->dev, "failed to send command to virtio pmem device, no free slots in the virtqueue\n");
  VAR_9->wq_buf_avail = 0;
  FUNC_7(&VAR_9->list, &VAR_8->req_list);
  FUNC_11(&VAR_8->pmem_lock, VAR_13);


  FUNC_14(VAR_9->wq_buf, VAR_9->wq_buf_avail);
  FUNC_10(&VAR_8->pmem_lock, VAR_13);
 }
 VAR_15 = FUNC_13(VAR_8->req_vq);
 FUNC_11(&VAR_8->pmem_lock, VAR_13);




 if (VAR_14 || !VAR_15) {
  FUNC_2(&VAR_7->dev, "failed to send command to virtio pmem device\n");
  VAR_14 = -VAR_0;
 } else {

  FUNC_14(VAR_9->host_acked, VAR_9->done);
  VAR_14 = FUNC_6(VAR_9->resp.ret);
 }

 FUNC_4(VAR_9);
 return VAR_14;
}
