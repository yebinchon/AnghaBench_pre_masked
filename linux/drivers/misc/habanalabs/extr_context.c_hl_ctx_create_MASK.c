
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_ctx_mgr {int ctx_lock; int ctx_handles; } ;
struct hl_fpriv {struct hl_ctx* ctx; struct hl_ctx_mgr ctx_mgr; } ;
struct hl_device {struct hl_ctx* compute_ctx; int dev; } ;
struct hl_ctx {int handle; struct hl_fpriv* hpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct hl_device*,struct hl_ctx*,int) ;
 int FUNC_2 (struct hl_fpriv*) ;
 int FUNC_3 (int *,struct hl_ctx*,int,int ,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct hl_ctx*) ;
 struct hl_ctx* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct hl_device *VAR_2, struct hl_fpriv *VAR_3)
{
 struct hl_ctx_mgr *VAR_4 = &VAR_3->ctx_mgr;
 struct hl_ctx *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_6(sizeof(*VAR_5), VAR_1);
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto out_err;
 }

 FUNC_7(&VAR_4->ctx_lock);
 VAR_6 = FUNC_3(&VAR_4->ctx_handles, VAR_5, 1, 0, VAR_1);
 FUNC_8(&VAR_4->ctx_lock);

 if (VAR_6 < 0) {
  FUNC_0(VAR_2->dev, "Failed to allocate IDR for a new CTX\n");
  goto free_ctx;
 }

 VAR_5->handle = VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_5, 0);
 if (VAR_6)
  goto remove_from_idr;

 FUNC_2(VAR_3);
 VAR_5->hpriv = VAR_3;


 VAR_3->ctx = VAR_5;


 VAR_2->compute_ctx = VAR_5;

 return 0;

remove_from_idr:
 FUNC_7(&VAR_4->ctx_lock);
 FUNC_4(&VAR_4->ctx_handles, VAR_5->handle);
 FUNC_8(&VAR_4->ctx_lock);
free_ctx:
 FUNC_5(VAR_5);
out_err:
 return VAR_6;
}
