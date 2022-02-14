
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmsg_device {int ept; } ;
struct delta_ipc_ctx {int cb_err; int done; int * ipc_buf; } ;
struct delta_ipc_close_msg {int header; } ;
struct delta_dev {int dev; struct rpmsg_device* rpmsg_device; } ;
struct delta_ctx {int sys_errors; int name; struct delta_dev* dev; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct delta_ipc_ctx*,int ,int *) ;
 int FUNC_1 (int ,char*,int ,...) ;
 int FUNC_2 (struct delta_ctx*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct delta_ipc_close_msg*,int) ;
 struct delta_ipc_ctx* FUNC_5 (void*) ;
 struct delta_ctx* FUNC_6 (struct delta_ipc_ctx*) ;
 int FUNC_7 (int *,int ) ;

void FUNC_8(void *VAR_2)
{
 struct delta_ipc_ctx *VAR_3 = FUNC_5(VAR_2);
 struct delta_ctx *VAR_4 = FUNC_6(VAR_3);
 struct delta_dev *VAR_5 = VAR_4->dev;
 struct rpmsg_device *VAR_6 = VAR_5->rpmsg_device;
 struct delta_ipc_close_msg VAR_7;
 int VAR_8;

 if (!VAR_2) {
  FUNC_1(VAR_5->dev,
   "%s   ipc: failed to close, invalid ipc handle\n",
   VAR_4->name);
  return;
 }

 if (VAR_3->ipc_buf) {
  FUNC_2(VAR_4, VAR_3->ipc_buf);
  VAR_3->ipc_buf = ((void*)0);
 }

 if (!VAR_6) {
  FUNC_1(VAR_5->dev,
   "%s   ipc: failed to close, rpmsg is not initialized\n",
   VAR_4->name);
  return;
 }


 FUNC_0(VAR_3, VAR_0, &VAR_7.header);


 VAR_8 = FUNC_4(VAR_6->ept, &VAR_7, sizeof(VAR_7));
 if (VAR_8) {
  FUNC_1(VAR_5->dev,
   "%s   ipc: failed to close, rpmsg_send failed (%d) for DELTA_IPC_CLOSE\n",
   VAR_4->name, VAR_8);
  VAR_4->sys_errors++;
  return;
 }


 if (!FUNC_7
     (&VAR_3->done, FUNC_3(VAR_1))) {
  FUNC_1(VAR_5->dev,
   "%s   ipc: failed to close, timeout waiting for DELTA_IPC_CLOSE callback\n",
   VAR_4->name);
  VAR_4->sys_errors++;
  return;
 }


 if (VAR_3->cb_err) {
  FUNC_1(VAR_5->dev,
   "%s   ipc: failed to close, DELTA_IPC_CLOSE completed but with error (%d)\n",
   VAR_4->name, VAR_3->cb_err);
  VAR_4->sys_errors++;
 }
}
