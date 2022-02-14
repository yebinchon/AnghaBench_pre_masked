
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ intparm; scalar_t__ mbi; scalar_t__ isc; scalar_t__ ena; scalar_t__ mme; scalar_t__ mp; scalar_t__ csense; scalar_t__ mbfc; scalar_t__ mba; } ;
struct subchannel {TYPE_2__ config; } ;
struct TYPE_3__ {scalar_t__ intparm; scalar_t__ mbi; scalar_t__ isc; scalar_t__ ena; scalar_t__ mme; scalar_t__ mp; scalar_t__ csense; scalar_t__ mbfc; } ;
struct schib {scalar_t__ mba; TYPE_1__ pmcw; } ;



__attribute__((used)) static int FUNC_0(struct subchannel *VAR_0, struct schib *VAR_1)
{
 return (VAR_1->pmcw.intparm == VAR_0->config.intparm) &&
  (VAR_1->pmcw.mbi == VAR_0->config.mbi) &&
  (VAR_1->pmcw.isc == VAR_0->config.isc) &&
  (VAR_1->pmcw.ena == VAR_0->config.ena) &&
  (VAR_1->pmcw.mme == VAR_0->config.mme) &&
  (VAR_1->pmcw.mp == VAR_0->config.mp) &&
  (VAR_1->pmcw.csense == VAR_0->config.csense) &&
  (VAR_1->pmcw.mbfc == VAR_0->config.mbfc) &&
  (!VAR_0->config.mbfc || (VAR_1->mba == VAR_0->config.mba));
}
