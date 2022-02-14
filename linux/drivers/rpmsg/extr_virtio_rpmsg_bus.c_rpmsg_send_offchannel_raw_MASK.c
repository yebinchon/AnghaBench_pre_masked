
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct virtproc_info {int buf_size; int tx_lock; int svq; int sendq; } ;
struct virtio_rpmsg_channel {struct virtproc_info* vrp; } ;
struct scatterlist {int dummy; } ;
struct rpmsg_hdr {int len; scalar_t__ reserved; scalar_t__ flags; void* dst; void* src; int data; } ;
struct device {int dummy; } ;
struct rpmsg_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (struct device*,char*,void*,void*,int,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (char*,int ,int,int,struct rpmsg_hdr*,int,int) ;
 struct rpmsg_hdr* FUNC_3 (struct virtproc_info*) ;
 int FUNC_4 (int ,void*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct virtproc_info*) ;
 int FUNC_9 (struct scatterlist*,struct rpmsg_hdr*,int) ;
 int FUNC_10 (struct virtproc_info*) ;
 struct virtio_rpmsg_channel* FUNC_11 (struct rpmsg_device*) ;
 int FUNC_12 (int ,struct scatterlist*,int,struct rpmsg_hdr*,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,struct rpmsg_hdr*,int ) ;

__attribute__((used)) static int FUNC_15(struct rpmsg_device *VAR_7,
         u32 VAR_8, u32 VAR_9,
         void *VAR_10, int VAR_11, bool VAR_12)
{
 struct virtio_rpmsg_channel *VAR_13 = FUNC_11(VAR_7);
 struct virtproc_info *VAR_14 = VAR_13->vrp;
 struct device *VAR_15 = &VAR_7->dev;
 struct scatterlist VAR_16;
 struct rpmsg_hdr *VAR_17;
 int VAR_18;


 if (VAR_8 == VAR_6 || VAR_9 == VAR_6) {
  FUNC_1(VAR_15, "invalid addr (src 0x%x, dst 0x%x)\n", VAR_8, VAR_9);
  return -VAR_1;
 }
 if (VAR_11 > VAR_14->buf_size - sizeof(struct rpmsg_hdr)) {
  FUNC_1(VAR_15, "message is too big (%d)\n", VAR_11);
  return -VAR_2;
 }


 VAR_17 = FUNC_3(VAR_14);
 if (!VAR_17 && !VAR_12)
  return -VAR_3;


 while (!VAR_17) {

  FUNC_10(VAR_14);







  VAR_18 = FUNC_14(VAR_14->sendq,
     (VAR_17 = FUNC_3(VAR_14)),
     FUNC_5(15000));


  FUNC_8(VAR_14);


  if (!VAR_18) {
   FUNC_1(VAR_15, "timeout waiting for a tx buffer\n");
   return -VAR_4;
  }
 }

 VAR_17->len = VAR_11;
 VAR_17->flags = 0;
 VAR_17->src = VAR_8;
 VAR_17->dst = VAR_9;
 VAR_17->reserved = 0;
 FUNC_4(VAR_17->data, VAR_10, VAR_11);

 FUNC_0(VAR_15, "TX From 0x%x, To 0x%x, Len %d, Flags %d, Reserved %d\n",
  VAR_17->src, VAR_17->dst, VAR_17->len, VAR_17->flags, VAR_17->reserved);





 FUNC_9(&VAR_16, VAR_17, sizeof(*VAR_17) + VAR_11);

 FUNC_6(&VAR_14->tx_lock);


 VAR_18 = FUNC_12(VAR_14->svq, &VAR_16, 1, VAR_17, VAR_5);
 if (VAR_18) {





  FUNC_1(VAR_15, "virtqueue_add_outbuf failed: %d\n", VAR_18);
  goto out;
 }


 FUNC_13(VAR_14->svq);
out:
 FUNC_7(&VAR_14->tx_lock);
 return VAR_18;
}
