
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rpmsg_device {int ept; } ;
struct delta_ipc_param {char const* data; scalar_t__ size; } ;
struct delta_ipc_open_msg {int param_size; int param_paddr; scalar_t__* name; int ipc_buf_paddr; scalar_t__ ipc_buf_size; int header; } ;
struct delta_buf {int paddr; scalar_t__* vaddr; int size; } ;
struct delta_ipc_ctx {int cb_err; struct delta_buf* ipc_buf; int done; struct delta_buf ipc_buf_struct; } ;
struct delta_dev {int dev; struct rpmsg_device* rpmsg_device; } ;
struct delta_ctx {int sys_errors; int name; struct delta_ipc_ctx ipc_ctx; struct delta_dev* dev; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct delta_ipc_ctx*,int ,int *) ;
 int FUNC_1 (int ,char*,int ,...) ;
 int FUNC_2 (struct delta_ctx*,scalar_t__,char*,struct delta_buf*) ;
 int FUNC_3 (struct delta_ctx*,struct delta_buf*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__*,char const*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,struct delta_ipc_open_msg*,int) ;
 int FUNC_8 (int *,int ) ;

int FUNC_9(struct delta_ctx *VAR_5, const char *VAR_6,
     struct delta_ipc_param *VAR_7, u32 VAR_8,
     struct delta_buf **VAR_9, void **VAR_10)
{
 struct delta_dev *VAR_11 = VAR_5->dev;
 struct rpmsg_device *VAR_12 = VAR_11->rpmsg_device;
 struct delta_ipc_ctx *VAR_13 = &VAR_5->ipc_ctx;
 struct delta_ipc_open_msg VAR_14;
 struct delta_buf *VAR_15 = &VAR_13->ipc_buf_struct;
 int VAR_16;

 if (!VAR_12) {
  FUNC_1(VAR_11->dev,
   "%s   ipc: failed to open, rpmsg is not initialized\n",
   VAR_5->name);
  VAR_5->sys_errors++;
  return -VAR_1;
 }

 if (!VAR_6) {
  FUNC_1(VAR_11->dev,
   "%s   ipc: failed to open, no name given\n",
   VAR_5->name);
  return -VAR_1;
 }

 if (!VAR_7 || !VAR_7->data || !VAR_7->size) {
  FUNC_1(VAR_11->dev,
   "%s  ipc: failed to open, empty parameter\n",
   VAR_5->name);
  return -VAR_1;
 }

 if (!VAR_8) {
  FUNC_1(VAR_11->dev,
   "%s   ipc: failed to open, no size given for ipc buffer\n",
   VAR_5->name);
  return -VAR_1;
 }

 if (VAR_7->size > VAR_8) {
  FUNC_1(VAR_11->dev,
   "%s   ipc: failed to open, too large ipc parameter (%d bytes while max %d expected)\n",
   VAR_5->name,
   VAR_7->size, VAR_13->ipc_buf->size);
  return -VAR_1;
 }


 FUNC_4(&VAR_13->done);






 VAR_16 = FUNC_2(VAR_5, VAR_8,
         "ipc data buffer", VAR_15);
 if (VAR_16)
  return VAR_16;
 VAR_13->ipc_buf = VAR_15;


 FUNC_0(VAR_13, VAR_0, &VAR_14.header);

 VAR_14.ipc_buf_size = VAR_8;
 VAR_14.ipc_buf_paddr = VAR_13->ipc_buf->paddr;

 FUNC_5(VAR_14.name, VAR_6, sizeof(VAR_14.name));
 VAR_14.name[sizeof(VAR_14.name) - 1] = 0;

 VAR_14.param_size = VAR_7->size;
 FUNC_5(VAR_13->ipc_buf->vaddr, VAR_7->data, VAR_14.param_size);
 VAR_14.param_paddr = VAR_13->ipc_buf->paddr;


 VAR_16 = FUNC_7(VAR_12->ept, &VAR_14, sizeof(VAR_14));
 if (VAR_16) {
  FUNC_1(VAR_11->dev,
   "%s   ipc: failed to open, rpmsg_send failed (%d) for DELTA_IPC_OPEN (name=%s, size=%d, data=%p)\n",
   VAR_5->name,
   VAR_16, VAR_6, VAR_7->size, VAR_7->data);
  goto err;
 }


 if (!FUNC_8
     (&VAR_13->done, FUNC_6(VAR_4))) {
  FUNC_1(VAR_11->dev,
   "%s   ipc: failed to open, timeout waiting for DELTA_IPC_OPEN callback (name=%s, size=%d, data=%p)\n",
   VAR_5->name,
   VAR_6, VAR_7->size, VAR_7->data);
  VAR_16 = -VAR_3;
  goto err;
 }


 if (VAR_13->cb_err) {
  FUNC_1(VAR_11->dev,
   "%s   ipc: failed to open, DELTA_IPC_OPEN completed but with error (%d) (name=%s, size=%d, data=%p)\n",
   VAR_5->name,
   VAR_13->cb_err, VAR_6, VAR_7->size, VAR_7->data);
  VAR_16 = -VAR_2;
  goto err;
 }

 *VAR_9 = VAR_13->ipc_buf;
 *VAR_10 = (void *)VAR_13;

 return 0;

err:
 VAR_5->sys_errors++;
 FUNC_3(VAR_5, VAR_13->ipc_buf);
 VAR_13->ipc_buf = ((void*)0);

 return VAR_16;
}
