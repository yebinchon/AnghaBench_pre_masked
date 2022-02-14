
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpmsg_device {int ept; } ;
struct delta_ipc_set_stream_msg {int param_paddr; scalar_t__ param_size; int header; } ;
struct delta_ipc_param {int data; scalar_t__ size; } ;
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
 int FUNC_2 (struct delta_ipc_ctx*,int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct delta_ipc_set_stream_msg*,int) ;
 struct delta_ipc_ctx* FUNC_5 (void*) ;
 int FUNC_6 (struct delta_ipc_ctx*,int ) ;
 struct delta_ctx* FUNC_7 (struct delta_ipc_ctx*) ;
 int FUNC_8 (int *,int ) ;

int FUNC_9(void *VAR_5, struct delta_ipc_param *VAR_6)
{
 struct delta_ipc_ctx *VAR_7 = FUNC_5(VAR_5);
 struct delta_ctx *VAR_8 = FUNC_7(VAR_7);
 struct delta_dev *VAR_9 = VAR_8->dev;
 struct rpmsg_device *VAR_10 = VAR_9->rpmsg_device;
 struct delta_ipc_set_stream_msg VAR_11;
 int VAR_12;

 if (!VAR_5) {
  FUNC_1(VAR_9->dev,
   "%s   ipc: failed to set stream, invalid ipc handle\n",
   VAR_8->name);
  return -VAR_1;
 }

 if (!VAR_10) {
  FUNC_1(VAR_9->dev,
   "%s   ipc: failed to set stream, rpmsg is not initialized\n",
   VAR_8->name);
  return -VAR_1;
 }

 if (!VAR_6 || !VAR_6->data || !VAR_6->size) {
  FUNC_1(VAR_9->dev,
   "%s  ipc: failed to set stream, empty parameter\n",
   VAR_8->name);
  return -VAR_1;
 }

 if (VAR_6->size > VAR_7->ipc_buf->size) {
  FUNC_1(VAR_9->dev,
   "%s   ipc: failed to set stream, too large ipc parameter(%d bytes while max %d expected)\n",
   VAR_8->name,
   VAR_6->size, VAR_7->ipc_buf->size);
  return -VAR_1;
 }

 if (!FUNC_2(VAR_7, VAR_6->data, VAR_6->size)) {
  FUNC_1(VAR_9->dev,
   "%s   ipc: failed to set stream, parameter is not in expected address range (size=%d, data=%p not in %p..%p)\n",
   VAR_8->name,
   VAR_6->size,
   VAR_6->data,
   VAR_7->ipc_buf->vaddr,
   VAR_7->ipc_buf->vaddr + VAR_7->ipc_buf->size - 1);
  return -VAR_1;
 }


 FUNC_0(VAR_7, VAR_0, &VAR_11.header);

 VAR_11.param_size = VAR_6->size;
 VAR_11.param_paddr = FUNC_6(VAR_7, VAR_6->data);


 VAR_12 = FUNC_4(VAR_10->ept, &VAR_11, sizeof(VAR_11));
 if (VAR_12) {
  FUNC_1(VAR_9->dev,
   "%s   ipc: failed to set stream, rpmsg_send failed (%d) for DELTA_IPC_SET_STREAM (size=%d, data=%p)\n",
   VAR_8->name,
   VAR_12, VAR_6->size, VAR_6->data);
  VAR_8->sys_errors++;
  return VAR_12;
 }


 if (!FUNC_8
     (&VAR_7->done, FUNC_3(VAR_4))) {
  FUNC_1(VAR_9->dev,
   "%s   ipc: failed to set stream, timeout waiting for DELTA_IPC_SET_STREAM callback (size=%d, data=%p)\n",
   VAR_8->name,
   VAR_6->size, VAR_6->data);
  VAR_8->sys_errors++;
  return -VAR_3;
 }


 if (VAR_7->cb_err) {
  FUNC_1(VAR_9->dev,
   "%s   ipc: failed to set stream, DELTA_IPC_SET_STREAM completed but with error (%d) (size=%d, data=%p)\n",
   VAR_8->name,
   VAR_7->cb_err, VAR_6->size, VAR_6->data);
  VAR_8->sys_errors++;
  return -VAR_2;
 }

 return 0;
}
