
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtproc_info {unsigned int buf_size; int rvq; int endpoints_lock; int endpoints; } ;
struct scatterlist {int dummy; } ;
struct rpmsg_hdr {unsigned int len; int src; int data; int dst; int reserved; int flags; } ;
struct rpmsg_endpoint {int refcount; int cb_lock; int priv; int rpdev; int (* cb ) (int ,int ,unsigned int,int ,int ) ;} ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int ,int ,unsigned int,int ,int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (char*,int ,int,int,struct rpmsg_hdr*,int ,int) ;
 struct rpmsg_endpoint* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct scatterlist*,struct rpmsg_hdr*,unsigned int) ;
 int FUNC_10 (int ,int ,unsigned int,int ,int ) ;
 int FUNC_11 (int ,struct scatterlist*,int,struct rpmsg_hdr*,int ) ;

__attribute__((used)) static int FUNC_12(struct virtproc_info *VAR_4, struct device *VAR_5,
        struct rpmsg_hdr *VAR_6, unsigned int VAR_7)
{
 struct rpmsg_endpoint *VAR_8;
 struct scatterlist VAR_9;
 int VAR_10;

 FUNC_0(VAR_5, "From: 0x%x, To: 0x%x, Len: %d, Flags: %d, Reserved: %d\n",
  VAR_6->src, VAR_6->dst, VAR_6->len, VAR_6->flags, VAR_6->reserved);
 if (VAR_7 > VAR_4->buf_size ||
     VAR_6->len > (VAR_7 - sizeof(struct rpmsg_hdr))) {
  FUNC_2(VAR_5, "inbound msg too big: (%d, %d)\n", VAR_7, VAR_6->len);
  return -VAR_1;
 }


 FUNC_7(&VAR_4->endpoints_lock);

 VAR_8 = FUNC_4(&VAR_4->endpoints, VAR_6->dst);


 if (VAR_8)
  FUNC_5(&VAR_8->refcount);

 FUNC_8(&VAR_4->endpoints_lock);

 if (VAR_8) {

  FUNC_7(&VAR_8->cb_lock);

  if (VAR_8->cb)
   VAR_8->cb(VAR_8->rpdev, VAR_6->data, VAR_6->len, VAR_8->priv,
    VAR_6->src);

  FUNC_8(&VAR_8->cb_lock);


  FUNC_6(&VAR_8->refcount, VAR_3);
 } else
  FUNC_2(VAR_5, "msg received with no recipient\n");


 FUNC_9(&VAR_9, VAR_6, VAR_4->buf_size);


 VAR_10 = FUNC_11(VAR_4->rvq, &VAR_9, 1, VAR_6, VAR_2);
 if (VAR_10 < 0) {
  FUNC_1(VAR_5, "failed to add a virtqueue buffer: %d\n", VAR_10);
  return VAR_10;
 }

 return 0;
}
