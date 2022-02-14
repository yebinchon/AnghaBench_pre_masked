
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mei_msg_hdr {size_t length; int msg_complete; int dma_ring; } ;
struct mei_msg_data {size_t size; void* data; } ;
struct mei_device {int dev; int device_lock; int write_list; int write_waiting_list; } ;
struct mei_cl_cb {int blocking; size_t buf_idx; struct mei_msg_data buf; } ;
struct mei_cl {scalar_t__ writing_state; int tx_wait; struct mei_device* dev; } ;
typedef size_t ssize_t ;
typedef int mei_hdr ;
typedef int dma_len ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mei_device*,struct mei_cl*,char*,...) ;
 int FUNC_2 (struct mei_device*,struct mei_cl*,char*,size_t) ;
 int VAR_9 ;
 int FUNC_3 (struct mei_cl*) ;
 size_t FUNC_4 (struct mei_cl*) ;
 size_t FUNC_5 (struct mei_cl*) ;
 int FUNC_6 (struct mei_device*) ;
 int FUNC_7 (struct mei_device*,void*,size_t) ;
 int FUNC_8 (struct mei_device*) ;
 int FUNC_9 (struct mei_device*) ;
 int FUNC_10 (struct mei_cl_cb*) ;
 int FUNC_11 (struct mei_msg_hdr*,struct mei_cl_cb*) ;
 size_t FUNC_12 (int) ;
 int FUNC_13 (struct mei_cl_cb*,int *) ;
 size_t FUNC_14 (struct mei_device*,struct mei_msg_hdr*,size_t,void const*,size_t) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 size_t FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int ) ;
 size_t FUNC_22 (int ,int) ;

ssize_t FUNC_23(struct mei_cl *VAR_10, struct mei_cl_cb *VAR_11)
{
 struct mei_device *VAR_12;
 struct mei_msg_data *VAR_13;
 struct mei_msg_hdr VAR_14;
 size_t VAR_15 = sizeof(VAR_14);
 size_t VAR_16, VAR_17, VAR_18;
 int VAR_19;
 u32 VAR_20;
 u32 VAR_21;
 ssize_t VAR_22;
 bool VAR_23;
 const void *VAR_24;

 if (FUNC_0(!VAR_10 || !VAR_10->dev))
  return -VAR_4;

 if (FUNC_0(!VAR_11))
  return -VAR_3;

 VAR_12 = VAR_10->dev;

 VAR_13 = &VAR_11->buf;
 VAR_16 = VAR_13->size;

 FUNC_1(VAR_12, VAR_10, "len=%zd\n", VAR_16);

 VAR_23 = VAR_11->blocking;
 VAR_24 = VAR_13->data;

 VAR_22 = FUNC_17(VAR_12->dev);
 if (VAR_22 < 0 && VAR_22 != -VAR_1) {
  FUNC_20(VAR_12->dev);
  FUNC_2(VAR_12, VAR_10, "rpm: get failed %zd\n", VAR_22);
  goto free;
 }

 VAR_11->buf_idx = 0;
 VAR_10->writing_state = VAR_6;


 VAR_22 = FUNC_4(VAR_10);
 if (VAR_22 < 0)
  goto err;

 FUNC_11(&VAR_14, VAR_11);

 if (VAR_22 == 0) {
  FUNC_1(VAR_12, VAR_10, "No flow control credentials: not sending.\n");
  VAR_22 = VAR_16;
  goto out;
 }

 if (!FUNC_8(VAR_12)) {
  FUNC_1(VAR_12, VAR_10, "Cannot acquire the host buffer: not sending.\n");
  VAR_22 = VAR_16;
  goto out;
 }

 VAR_19 = FUNC_9(VAR_12);
 if (VAR_19 < 0) {
  VAR_22 = -VAR_5;
  goto out;
 }

 VAR_17 = FUNC_12(VAR_19);
 VAR_20 = FUNC_6(VAR_12);
 VAR_18 = FUNC_12(VAR_20);

 if (VAR_16 + VAR_15 <= VAR_17) {
  VAR_14.length = VAR_16;
  VAR_14.msg_complete = 1;
 } else if (VAR_20 && VAR_17 >= VAR_15 + sizeof(VAR_21)) {
  VAR_14.dma_ring = 1;
  if (VAR_16 > VAR_18)
   VAR_16 = VAR_18;
  else
   VAR_14.msg_complete = 1;

  VAR_14.length = sizeof(VAR_21);
  VAR_21 = VAR_16;
  VAR_24 = &VAR_21;
 } else {
  VAR_16 = VAR_17 - VAR_15;
  VAR_14.length = VAR_16;
 }

 if (VAR_14.dma_ring)
  FUNC_7(VAR_12, VAR_13->data, VAR_16);

 VAR_22 = FUNC_14(VAR_12, &VAR_14, VAR_15,
     VAR_24, VAR_14.length);
 if (VAR_22)
  goto err;

 VAR_22 = FUNC_5(VAR_10);
 if (VAR_22)
  goto err;

 VAR_10->writing_state = VAR_8;
 VAR_11->buf_idx = VAR_16;

 VAR_16 = VAR_13->size;

out:
 if (VAR_14.msg_complete)
  FUNC_13(VAR_11, &VAR_12->write_waiting_list);
 else
  FUNC_13(VAR_11, &VAR_12->write_list);

 VAR_11 = ((void*)0);
 if (VAR_23 && VAR_10->writing_state != VAR_7) {

  FUNC_16(&VAR_12->device_lock);
  VAR_22 = FUNC_22(VAR_10->tx_wait,
    VAR_10->writing_state == VAR_7 ||
    (!FUNC_3(VAR_10)));
  FUNC_15(&VAR_12->device_lock);

  if (VAR_22) {
   if (FUNC_21(VAR_9))
    VAR_22 = -VAR_2;
   goto err;
  }
  if (VAR_10->writing_state != VAR_7) {
   VAR_22 = -VAR_0;
   goto err;
  }
 }

 VAR_22 = VAR_16;
err:
 FUNC_1(VAR_12, VAR_10, "rpm: autosuspend\n");
 FUNC_18(VAR_12->dev);
 FUNC_19(VAR_12->dev);
free:
 FUNC_10(VAR_11);

 return VAR_22;
}
