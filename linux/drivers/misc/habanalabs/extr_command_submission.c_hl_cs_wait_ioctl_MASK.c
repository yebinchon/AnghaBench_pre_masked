
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int status; } ;
struct TYPE_3__ {int timeout_us; int seq; } ;
union hl_wait_cs_args {TYPE_2__ out; TYPE_1__ in; } ;
typedef int u64 ;
struct hl_fpriv {int ctx; struct hl_device* hdev; } ;
struct hl_device {int dev; } ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 long FUNC_0 (struct hl_device*,int ,int ,int ) ;
 int FUNC_1 (int ,char*,long,int ) ;
 int FUNC_2 (union hl_wait_cs_args*,int ,int) ;

int FUNC_3(struct hl_fpriv *VAR_9, void *VAR_10)
{
 struct hl_device *VAR_11 = VAR_9->hdev;
 union hl_wait_cs_args *VAR_12 = VAR_10;
 u64 VAR_13 = VAR_12->in.seq;
 long VAR_14;

 VAR_14 = FUNC_0(VAR_11, VAR_9->ctx, VAR_12->in.timeout_us, VAR_13);

 FUNC_2(VAR_12, 0, sizeof(*VAR_12));

 if (VAR_14 < 0) {
  FUNC_1(VAR_11->dev, "Error %ld on waiting for CS handle %llu\n",
   VAR_14, VAR_13);
  if (VAR_14 == -VAR_2) {
   VAR_12->out.status = VAR_7;
   VAR_14 = -VAR_0;
  } else if (VAR_14 == -VAR_3) {
   VAR_12->out.status = VAR_8;
  } else if (VAR_14 == -VAR_1) {
   VAR_12->out.status = VAR_4;
  }
  return VAR_14;
 }

 if (VAR_14 == 0)
  VAR_12->out.status = VAR_5;
 else
  VAR_12->out.status = VAR_6;

 return 0;
}
