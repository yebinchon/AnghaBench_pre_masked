
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bfi_cee_get_req {int dma_addr; int mh; } ;
struct bfa_cee_attr {int dummy; } ;
struct TYPE_6__ {scalar_t__ msg; } ;
struct TYPE_5__ {int pa; } ;
struct TYPE_4__ {void* get_attr_cbarg; int get_attr_cbfn; } ;
struct bfa_cee {int get_attr_pending; TYPE_3__ get_cfg_mb; int * ioc; TYPE_2__ attr_dma; TYPE_1__ cbfn; struct bfa_cee_attr* attr; } ;
typedef enum bfa_status { ____Placeholder_bfa_status } bfa_status ;
typedef int bfa_cee_get_attr_cbfn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_3__*,int *,int *) ;
 int FUNC_5 (int ,int ,int ,int ) ;

enum bfa_status
FUNC_6(struct bfa_cee *VAR_5, struct bfa_cee_attr *VAR_6,
      bfa_cee_get_attr_cbfn_t VAR_7, void *VAR_8)
{
 struct bfi_cee_get_req *VAR_9;

 FUNC_0(!((VAR_5 != ((void*)0)) && (VAR_5->ioc != ((void*)0))));
 if (!FUNC_3(VAR_5->ioc))
  return VAR_1;

 if (VAR_5->get_attr_pending)
  return VAR_0;

 VAR_5->get_attr_pending = 1;
 VAR_9 = (struct bfi_cee_get_req *) VAR_5->get_cfg_mb.msg;
 VAR_5->attr = VAR_6;
 VAR_5->cbfn.get_attr_cbfn = VAR_7;
 VAR_5->cbfn.get_attr_cbarg = VAR_8;
 FUNC_5(VAR_9->mh, VAR_4, VAR_3,
      FUNC_2(VAR_5->ioc));
 FUNC_1(VAR_9->dma_addr, VAR_5->attr_dma.pa);
 FUNC_4(VAR_5->ioc, &VAR_5->get_cfg_mb, ((void*)0), ((void*)0));

 return VAR_2;
}
