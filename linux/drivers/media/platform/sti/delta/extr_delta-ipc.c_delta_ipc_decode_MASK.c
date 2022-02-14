
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpmsg_device {int ept; } ;
struct delta_ipc_param {scalar_t__ data; scalar_t__ size; } ;
struct delta_ipc_decode_msg {int param_size; int status_size; void* status_paddr; void* param_paddr; int header; } ;
struct delta_ipc_ctx {int cb_err; int done; TYPE_1__* ipc_buf; } ;
struct delta_dev {int dev; struct rpmsg_device* rpmsg_device; } ;
struct delta_ctx {int sys_errors; int name; struct delta_dev* dev; } ;
typedef int msg ;
struct TYPE_2__ {scalar_t__ size; scalar_t__ vaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct delta_ipc_ctx*,int ,int *) ;
 int FUNC_1 (int ,char*,int ,...) ;
 int FUNC_2 (struct delta_ipc_ctx*,scalar_t__,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct delta_ipc_decode_msg*,int) ;
 struct delta_ipc_ctx* FUNC_5 (void*) ;
 void* FUNC_6 (struct delta_ipc_ctx*,scalar_t__) ;
 struct delta_ctx* FUNC_7 (struct delta_ipc_ctx*) ;
 int FUNC_8 (int *,int ) ;

int FUNC_9(void *VAR_5, struct delta_ipc_param *VAR_6,
       struct delta_ipc_param *VAR_7)
{
 struct delta_ipc_ctx *VAR_8 = FUNC_5(VAR_5);
 struct delta_ctx *VAR_9 = FUNC_7(VAR_8);
 struct delta_dev *VAR_10 = VAR_9->dev;
 struct rpmsg_device *VAR_11 = VAR_10->rpmsg_device;
 struct delta_ipc_decode_msg VAR_12;
 int VAR_13;

 if (!VAR_5) {
  FUNC_1(VAR_10->dev,
   "%s   ipc: failed to decode, invalid ipc handle\n",
   VAR_9->name);
  return -VAR_1;
 }

 if (!VAR_11) {
  FUNC_1(VAR_10->dev,
   "%s   ipc: failed to decode, rpmsg is not initialized\n",
   VAR_9->name);
  return -VAR_1;
 }

 if (!VAR_6 || !VAR_6->data || !VAR_6->size) {
  FUNC_1(VAR_10->dev,
   "%s  ipc: failed to decode, empty parameter\n",
   VAR_9->name);
  return -VAR_1;
 }

 if (!VAR_7 || !VAR_7->data || !VAR_7->size) {
  FUNC_1(VAR_10->dev,
   "%s  ipc: failed to decode, empty status\n",
   VAR_9->name);
  return -VAR_1;
 }

 if (VAR_6->size + VAR_7->size > VAR_8->ipc_buf->size) {
  FUNC_1(VAR_10->dev,
   "%s   ipc: failed to decode, too large ipc parameter (%d bytes (param) + %d bytes (status) while max %d expected)\n",
   VAR_9->name,
   VAR_6->size,
   VAR_7->size,
   VAR_8->ipc_buf->size);
  return -VAR_1;
 }

 if (!FUNC_2(VAR_8, VAR_6->data, VAR_6->size)) {
  FUNC_1(VAR_10->dev,
   "%s   ipc: failed to decode, parameter is not in expected address range (size=%d, data=%p not in %p..%p)\n",
   VAR_9->name,
   VAR_6->size,
   VAR_6->data,
   VAR_8->ipc_buf->vaddr,
   VAR_8->ipc_buf->vaddr + VAR_8->ipc_buf->size - 1);
  return -VAR_1;
 }

 if (!FUNC_2(VAR_8, VAR_7->data, VAR_7->size)) {
  FUNC_1(VAR_10->dev,
   "%s   ipc: failed to decode, status is not in expected address range (size=%d, data=%p not in %p..%p)\n",
   VAR_9->name,
   VAR_7->size,
   VAR_7->data,
   VAR_8->ipc_buf->vaddr,
   VAR_8->ipc_buf->vaddr + VAR_8->ipc_buf->size - 1);
  return -VAR_1;
 }


 FUNC_0(VAR_8, VAR_0, &VAR_12.header);

 VAR_12.param_size = VAR_6->size;
 VAR_12.param_paddr = FUNC_6(VAR_8, VAR_6->data);

 VAR_12.status_size = VAR_7->size;
 VAR_12.status_paddr = FUNC_6(VAR_8, VAR_7->data);


 VAR_13 = FUNC_4(VAR_11->ept, &VAR_12, sizeof(VAR_12));
 if (VAR_13) {
  FUNC_1(VAR_10->dev,
   "%s   ipc: failed to decode, rpmsg_send failed (%d) for DELTA_IPC_DECODE (size=%d, data=%p)\n",
   VAR_9->name,
   VAR_13, VAR_6->size, VAR_6->data);
  VAR_9->sys_errors++;
  return VAR_13;
 }


 if (!FUNC_8
     (&VAR_8->done, FUNC_3(VAR_4))) {
  FUNC_1(VAR_10->dev,
   "%s   ipc: failed to decode, timeout waiting for DELTA_IPC_DECODE callback (size=%d, data=%p)\n",
   VAR_9->name,
   VAR_6->size, VAR_6->data);
  VAR_9->sys_errors++;
  return -VAR_3;
 }


 if (VAR_8->cb_err) {
  FUNC_1(VAR_10->dev,
   "%s   ipc: failed to decode, DELTA_IPC_DECODE completed but with error (%d) (size=%d, data=%p)\n",
   VAR_9->name,
   VAR_8->cb_err, VAR_6->size, VAR_6->data);
  VAR_9->sys_errors++;
  return -VAR_2;
 }

 return 0;
}
