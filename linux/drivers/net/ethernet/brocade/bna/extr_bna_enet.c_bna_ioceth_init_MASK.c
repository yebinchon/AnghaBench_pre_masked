
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_5__ {TYPE_1__* mdl; } ;
struct TYPE_6__ {TYPE_2__ mem_info; } ;
struct bna_res_info {TYPE_3__ res_u; } ;
struct bna_ioceth {int * stop_cbarg; int * stop_cbfn; int ioc; struct bna* bna; } ;
struct bna {int msgq; int flash; int cee; int pcidev; } ;
struct TYPE_4__ {int * kva; int dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (struct bna_ioceth*,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *,int ,int ,struct bna*) ;
 int FUNC_6 (int *,int *,struct bna*) ;
 int FUNC_7 (int *,int *,int ) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int *,int *,struct bna*) ;
 int FUNC_10 (int *,int *,int ) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (int *,struct bna_ioceth*,int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *,int ) ;
 int FUNC_15 (int *,int *,int ) ;
 int FUNC_16 (struct bna_ioceth*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_17(struct bna_ioceth *VAR_8, struct bna *VAR_9,
  struct bna_res_info *VAR_10)
{
 u64 VAR_11;
 u8 *VAR_12;

 VAR_8->bna = VAR_9;






 FUNC_12(&VAR_8->ioc, VAR_8, &VAR_5);
 FUNC_15(&VAR_8->ioc, &VAR_9->pcidev, VAR_1);

 FUNC_0(
  &VAR_10[VAR_2].res_u.mem_info.mdl[0].dma, VAR_11);
 VAR_12 = VAR_10[VAR_2].res_u.mem_info.mdl[0].kva;
 FUNC_14(&VAR_8->ioc, VAR_12, VAR_11);

 VAR_12 = VAR_10[VAR_4].res_u.mem_info.mdl[0].kva;
 FUNC_13(&VAR_8->ioc, VAR_12);





 FUNC_0(
  &VAR_10[VAR_3].res_u.mem_info.mdl[0].dma, VAR_11);
 VAR_12 = VAR_10[VAR_3].res_u.mem_info.mdl[0].kva;
 FUNC_6(&VAR_9->cee, &VAR_8->ioc, VAR_9);
 FUNC_7(&VAR_9->cee, VAR_12, VAR_11);
 VAR_12 += FUNC_8();
 VAR_11 += FUNC_8();

 FUNC_9(&VAR_9->flash, &VAR_8->ioc, VAR_9);
 FUNC_10(&VAR_9->flash, VAR_12, VAR_11);
 VAR_12 += FUNC_11();
 VAR_11 += FUNC_11();

 FUNC_2(&VAR_9->msgq, &VAR_8->ioc);
 FUNC_3(&VAR_9->msgq, VAR_12, VAR_11);
 FUNC_5(&VAR_9->msgq, VAR_0, VAR_7, VAR_9);
 VAR_12 += FUNC_4();
 VAR_11 += FUNC_4();

 VAR_8->stop_cbfn = ((void*)0);
 VAR_8->stop_cbarg = ((void*)0);

 FUNC_16(VAR_8);

 FUNC_1(VAR_8, VAR_6);
}
