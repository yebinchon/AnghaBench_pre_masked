
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct bfi_flash_query_req {int alen; int mh; } ;
struct bfa_flash_attr {int dummy; } ;
struct TYPE_2__ {scalar_t__ msg; } ;
struct bfa_flash {int op_busy; TYPE_1__ mb; int ioc; int dbuf_pa; int * ubuf; void* cbarg; int cbfn; } ;
typedef enum bfa_status { ____Placeholder_bfa_status } bfa_status ;
typedef int bfa_cb_flash ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*,int *,int *) ;
 int FUNC_4 (int ,int ,int ,int ) ;

enum bfa_status
FUNC_5(struct bfa_flash *VAR_5, struct bfa_flash_attr *VAR_6,
        bfa_cb_flash VAR_7, void *VAR_8)
{
 struct bfi_flash_query_req *VAR_9 =
   (struct bfi_flash_query_req *) VAR_5->mb.msg;

 if (!FUNC_2(VAR_5->ioc))
  return VAR_1;

 if (VAR_5->op_busy)
  return VAR_0;

 VAR_5->op_busy = 1;
 VAR_5->cbfn = VAR_7;
 VAR_5->cbarg = VAR_8;
 VAR_5->ubuf = (u8 *) VAR_6;

 FUNC_4(VAR_9->mh, VAR_4, VAR_3,
      FUNC_1(VAR_5->ioc));
 FUNC_0(&VAR_9->alen, sizeof(struct bfa_flash_attr), VAR_5->dbuf_pa);
 FUNC_3(VAR_5->ioc, &VAR_5->mb, ((void*)0), ((void*)0));

 return VAR_2;
}
