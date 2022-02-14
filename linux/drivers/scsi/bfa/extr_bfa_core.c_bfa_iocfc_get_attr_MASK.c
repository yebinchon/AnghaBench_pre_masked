
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bfa_iocfc_s {int cfg; TYPE_5__* cfgrsp; TYPE_3__* cfginfo; } ;
struct bfa_s {struct bfa_iocfc_s iocfc; } ;
struct TYPE_6__ {void* latency; void* delay; int coalesce; } ;
struct bfa_iocfc_attr_s {int config; TYPE_1__ intr_attr; } ;
struct TYPE_9__ {scalar_t__ latency; scalar_t__ delay; } ;
struct TYPE_10__ {TYPE_4__ intr_attr; } ;
struct TYPE_7__ {scalar_t__ latency; scalar_t__ delay; int coalesce; } ;
struct TYPE_8__ {TYPE_2__ intr_attr; } ;


 void* FUNC_0 (scalar_t__) ;

void
FUNC_1(struct bfa_s *VAR_0, struct bfa_iocfc_attr_s *VAR_1)
{
 struct bfa_iocfc_s *VAR_2 = &VAR_0->iocfc;

 VAR_1->intr_attr.coalesce = VAR_2->cfginfo->intr_attr.coalesce;

 VAR_1->intr_attr.delay = VAR_2->cfginfo->intr_attr.delay ?
    FUNC_0(VAR_2->cfginfo->intr_attr.delay) :
    FUNC_0(VAR_2->cfgrsp->intr_attr.delay);

 VAR_1->intr_attr.latency = VAR_2->cfginfo->intr_attr.latency ?
   FUNC_0(VAR_2->cfginfo->intr_attr.latency) :
   FUNC_0(VAR_2->cfgrsp->intr_attr.latency);

 VAR_1->config = VAR_2->cfg;
}
