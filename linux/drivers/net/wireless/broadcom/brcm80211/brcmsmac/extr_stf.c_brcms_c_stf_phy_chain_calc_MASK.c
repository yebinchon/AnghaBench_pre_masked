
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
struct ssb_sprom {int txchain; int rxchain; } ;
struct brcms_c_info {TYPE_4__* stf; int band; TYPE_3__* hw; } ;
struct TYPE_8__ {int hw_txchain; int hw_rxchain; int txchain; int rxchain; int spatial_policy; int txcore; void* rxstreams; void* txstreams; } ;
struct TYPE_7__ {TYPE_2__* d11core; } ;
struct TYPE_6__ {TYPE_1__* bus; } ;
struct TYPE_5__ {struct ssb_sprom sprom; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct brcms_c_info*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_5 ;

void FUNC_4(struct brcms_c_info *VAR_6)
{
 struct ssb_sprom *VAR_7 = &VAR_6->hw->d11core->bus->sprom;


 VAR_6->stf->hw_txchain = VAR_7->txchain;
 VAR_6->stf->hw_rxchain = VAR_7->rxchain;


 if (VAR_6->stf->hw_txchain == 0 || VAR_6->stf->hw_txchain == 0xf) {
  if (FUNC_0(VAR_6->band))
   VAR_6->stf->hw_txchain = VAR_4;
  else
   VAR_6->stf->hw_txchain = VAR_3;
 }

 VAR_6->stf->txchain = VAR_6->stf->hw_txchain;
 VAR_6->stf->txstreams = (u8) FUNC_2(VAR_6->stf->hw_txchain);

 if (VAR_6->stf->hw_rxchain == 0 || VAR_6->stf->hw_rxchain == 0xf) {
  if (FUNC_0(VAR_6->band))
   VAR_6->stf->hw_rxchain = VAR_2;
  else
   VAR_6->stf->hw_rxchain = VAR_1;
 }

 VAR_6->stf->rxchain = VAR_6->stf->hw_rxchain;
 VAR_6->stf->rxstreams = (u8) FUNC_2(VAR_6->stf->hw_rxchain);


 FUNC_3(VAR_6->stf->txcore, VAR_5, sizeof(VAR_6->stf->txcore));


 VAR_6->stf->spatial_policy = VAR_0;
 FUNC_1(VAR_6, VAR_0);
}
