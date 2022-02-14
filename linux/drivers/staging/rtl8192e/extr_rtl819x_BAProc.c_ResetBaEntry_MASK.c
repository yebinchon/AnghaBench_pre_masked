
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ShortData; } ;
struct TYPE_3__ {scalar_t__ shortData; } ;
struct ba_record {int bValid; TYPE_2__ BaStartSeqCtrl; scalar_t__ DialogToken; scalar_t__ BaTimeoutValue; TYPE_1__ BaParamSet; } ;



void FUNC_0(struct ba_record *VAR_0)
{
 VAR_0->bValid = 0;
 VAR_0->BaParamSet.shortData = 0;
 VAR_0->BaTimeoutValue = 0;
 VAR_0->DialogToken = 0;
 VAR_0->BaStartSeqCtrl.ShortData = 0;
}
