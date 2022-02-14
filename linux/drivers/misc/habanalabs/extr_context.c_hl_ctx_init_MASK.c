
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {int dev; } ;
struct hl_ctx {int cs_sequence; scalar_t__ asid; scalar_t__ thread_ctx_switch_wait_token; int thread_ctx_switch_token; int cs_lock; int refcount; struct hl_device* hdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct hl_device*) ;
 int FUNC_3 (struct hl_device*,scalar_t__) ;
 int FUNC_4 (struct hl_ctx*) ;
 int FUNC_5 (struct hl_ctx*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct hl_device *VAR_2, struct hl_ctx *VAR_3, bool VAR_4)
{
 int VAR_5 = 0;

 VAR_3->hdev = VAR_2;

 FUNC_6(&VAR_3->refcount);

 VAR_3->cs_sequence = 1;
 FUNC_7(&VAR_3->cs_lock);
 FUNC_0(&VAR_3->thread_ctx_switch_token, 1);
 VAR_3->thread_ctx_switch_wait_token = 0;

 if (VAR_4) {
  VAR_3->asid = VAR_1;
  VAR_5 = FUNC_4(VAR_3);
  if (VAR_5) {
   FUNC_1(VAR_2->dev, "Failed to init mmu ctx module\n");
   goto mem_ctx_err;
  }
 } else {
  VAR_3->asid = FUNC_2(VAR_2);
  if (!VAR_3->asid) {
   FUNC_1(VAR_2->dev, "No free ASID, failed to create context\n");
   return -VAR_0;
  }

  VAR_5 = FUNC_5(VAR_3);
  if (VAR_5) {
   FUNC_1(VAR_2->dev, "Failed to init mem ctx module\n");
   VAR_5 = -VAR_0;
   goto mem_ctx_err;
  }
 }

 return 0;

mem_ctx_err:
 if (VAR_3->asid != VAR_1)
  FUNC_3(VAR_2, VAR_3->asid);

 return VAR_5;
}
