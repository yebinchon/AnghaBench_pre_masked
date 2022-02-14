
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mei_msg_hdr {size_t length; int msg_complete; int dma_ring; } ;
struct mei_msg_data {size_t size; void* data; } ;
struct list_head {int dummy; } ;
struct mei_device {struct list_head write_waiting_list; } ;
struct mei_cl_cb {scalar_t__ buf_idx; int list; struct mei_msg_data buf; } ;
struct mei_cl {int status; int writing_state; struct mei_device* dev; } ;
typedef int mei_hdr ;
typedef int dma_len ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mei_device*,struct mei_cl*,char*) ;
 int FUNC_2 (int *,struct list_head*) ;
 int FUNC_3 (struct mei_cl*) ;
 scalar_t__ FUNC_4 (struct mei_cl*) ;
 scalar_t__ FUNC_5 (struct mei_device*) ;
 int FUNC_6 (struct mei_device*,void*,size_t) ;
 scalar_t__ FUNC_7 (struct mei_device*) ;
 int FUNC_8 (struct mei_device*) ;
 int FUNC_9 (struct mei_msg_hdr*,struct mei_cl_cb*) ;
 size_t FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct mei_device*,struct mei_msg_hdr*,size_t,void const*,size_t) ;

int FUNC_12(struct mei_cl *VAR_4, struct mei_cl_cb *VAR_5,
       struct list_head *VAR_6)
{
 struct mei_device *VAR_7;
 struct mei_msg_data *VAR_8;
 struct mei_msg_hdr VAR_9;
 size_t VAR_10 = sizeof(VAR_9);
 size_t VAR_11;
 size_t VAR_12, VAR_13;
 int VAR_14;
 u32 VAR_15;
 u32 VAR_16;
 int VAR_17;
 bool VAR_18;
 const void *VAR_19;

 if (FUNC_0(!VAR_4 || !VAR_4->dev))
  return -VAR_1;

 VAR_7 = VAR_4->dev;

 VAR_8 = &VAR_5->buf;

 VAR_18 = VAR_5->buf_idx == 0;

 VAR_17 = VAR_18 ? FUNC_3(VAR_4) : 1;
 if (VAR_17 < 0)
  goto err;

 if (VAR_17 == 0) {
  FUNC_1(VAR_7, VAR_4, "No flow control credentials: not sending.\n");
  return 0;
 }

 VAR_11 = VAR_8->size - VAR_5->buf_idx;
 VAR_19 = VAR_8->data + VAR_5->buf_idx;
 VAR_14 = FUNC_8(VAR_7);
 if (VAR_14 < 0) {
  VAR_17 = -VAR_2;
  goto err;
 }

 VAR_12 = FUNC_10(VAR_14);
 VAR_15 = FUNC_5(VAR_7);
 VAR_13 = FUNC_10(VAR_15);

 FUNC_9(&VAR_9, VAR_5);





 if (VAR_11 + VAR_10 <= VAR_12) {
  VAR_9.length = VAR_11;
  VAR_9.msg_complete = 1;
 } else if (VAR_15 && VAR_12 >= VAR_10 + sizeof(VAR_16)) {
  VAR_9.dma_ring = 1;
  if (VAR_11 > VAR_13)
   VAR_11 = VAR_13;
  else
   VAR_9.msg_complete = 1;

  VAR_9.length = sizeof(VAR_16);
  VAR_16 = VAR_11;
  VAR_19 = &VAR_16;
 } else if ((u32)VAR_14 == FUNC_7(VAR_7)) {
  VAR_11 = VAR_12 - VAR_10;
  VAR_9.length = VAR_11;
 } else {
  return 0;
 }

 if (VAR_9.dma_ring)
  FUNC_6(VAR_7, VAR_8->data + VAR_5->buf_idx, VAR_11);

 VAR_17 = FUNC_11(VAR_7, &VAR_9, VAR_10, VAR_19, VAR_9.length);
 if (VAR_17)
  goto err;

 VAR_4->status = 0;
 VAR_4->writing_state = VAR_3;
 VAR_5->buf_idx += VAR_11;

 if (VAR_18) {
  if (FUNC_4(VAR_4)) {
   VAR_17 = -VAR_0;
   goto err;
  }
 }

 if (VAR_9.msg_complete)
  FUNC_2(&VAR_5->list, &VAR_7->write_waiting_list);

 return 0;

err:
 VAR_4->status = VAR_17;
 FUNC_2(&VAR_5->list, VAR_6);
 return VAR_17;
}
