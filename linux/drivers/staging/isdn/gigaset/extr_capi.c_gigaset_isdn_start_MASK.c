
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int goptions; int support1; int support2; int support3; int nbchannel; } ;
struct TYPE_4__ {int majorversion; int minormanuversion; int majormanuversion; scalar_t__ minorversion; } ;
struct TYPE_6__ {int serial; TYPE_2__ profile; TYPE_1__ version; int manu; } ;
struct gigaset_capi_ctr {TYPE_3__ ctr; } ;
struct cardstate {int channels; int * fwver; struct gigaset_capi_ctr* iif; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(struct cardstate *VAR_0)
{
 struct gigaset_capi_ctr *VAR_1 = VAR_0->iif;


 FUNC_1(VAR_1->ctr.manu, "Siemens");

 VAR_1->ctr.version.majorversion = 2;
 VAR_1->ctr.version.minorversion = 0;

 VAR_1->ctr.version.majormanuversion = VAR_0->fwver[0];
 VAR_1->ctr.version.minormanuversion = VAR_0->fwver[1];

 VAR_1->ctr.profile.nbchannel = VAR_0->channels;

 VAR_1->ctr.profile.goptions = 0x11;

 VAR_1->ctr.profile.support1 = 0x03;


 VAR_1->ctr.profile.support2 = 0x02;

 VAR_1->ctr.profile.support3 = 0x01;

 FUNC_1(VAR_1->ctr.serial, "0");
 FUNC_0(&VAR_1->ctr);
}
