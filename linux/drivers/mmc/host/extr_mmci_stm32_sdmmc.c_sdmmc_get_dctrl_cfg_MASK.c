
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct mmci_host {TYPE_1__* mrq; TYPE_3__* data; TYPE_2__* mmc; } ;
struct TYPE_6__ {int blocks; scalar_t__ stop; } ;
struct TYPE_5__ {scalar_t__ card; } ;
struct TYPE_4__ {int sbc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mmci_host*) ;

__attribute__((used)) static u32 FUNC_2(struct mmci_host *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_3);

 if (VAR_3->mmc->card && FUNC_0(VAR_3->mmc->card) &&
     VAR_3->data->blocks == 1)
  VAR_4 |= VAR_2;
 else if (VAR_3->data->stop && !VAR_3->mrq->sbc)
  VAR_4 |= VAR_1;
 else
  VAR_4 |= VAR_0;

 return VAR_4;
}
