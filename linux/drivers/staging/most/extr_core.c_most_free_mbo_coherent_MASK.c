
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__ extra_len; scalar_t__ buffer_size; } ;
struct most_channel {int cleanup; int mbo_ref; TYPE_2__* iface; TYPE_1__ cfg; } ;
struct mbo {struct mbo* virt_address; struct most_channel* context; } ;
struct TYPE_4__ {int (* dma_free ) (struct mbo*,scalar_t__ const) ;} ;


 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mbo*) ;
 int FUNC_3 (struct mbo*,scalar_t__ const) ;

__attribute__((used)) static void FUNC_4(struct mbo *VAR_0)
{
 struct most_channel *VAR_1 = VAR_0->context;
 u16 const VAR_2 = VAR_1->cfg.buffer_size + VAR_1->cfg.extra_len;

 if (VAR_1->iface->dma_free)
  VAR_1->iface->dma_free(VAR_0, VAR_2);
 else
  FUNC_2(VAR_0->virt_address);
 FUNC_2(VAR_0);
 if (FUNC_0(1, &VAR_1->mbo_ref))
  FUNC_1(&VAR_1->cleanup);
}
