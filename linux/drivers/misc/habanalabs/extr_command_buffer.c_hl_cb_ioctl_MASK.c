
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int op; int cb_handle; int cb_size; } ;
struct TYPE_5__ {int cb_handle; } ;
union hl_cb_args {TYPE_3__ in; TYPE_2__ out; } ;
typedef int u64 ;
struct hl_fpriv {int cb_mgr; TYPE_1__* ctx; struct hl_device* hdev; } ;
struct hl_device {int in_reset; int dev; } ;
struct TYPE_4__ {int asid; } ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (struct hl_device*,int *,int ,int *,int ) ;
 int FUNC_3 (struct hl_device*,int *,int ) ;
 scalar_t__ FUNC_4 (struct hl_device*) ;
 int FUNC_5 (union hl_cb_args*,int ,int) ;

int FUNC_6(struct hl_fpriv *VAR_2, void *VAR_3)
{
 union hl_cb_args *VAR_4 = VAR_3;
 struct hl_device *VAR_5 = VAR_2->hdev;
 u64 VAR_6;
 int VAR_7;

 if (FUNC_4(VAR_5)) {
  FUNC_1(VAR_5->dev,
   "Device is %s. Can't execute CB IOCTL\n",
   FUNC_0(&VAR_5->in_reset) ? "in_reset" : "disabled");
  return -VAR_0;
 }

 switch (VAR_4->in.op) {
 case 129:
  VAR_7 = FUNC_2(VAR_5, &VAR_2->cb_mgr, VAR_4->in.cb_size,
     &VAR_6, VAR_2->ctx->asid);
  FUNC_5(VAR_4, 0, sizeof(*VAR_4));
  VAR_4->out.cb_handle = VAR_6;
  break;
 case 128:
  VAR_7 = FUNC_3(VAR_5, &VAR_2->cb_mgr,
     VAR_4->in.cb_handle);
  break;
 default:
  VAR_7 = -VAR_1;
  break;
 }

 return VAR_7;
}
