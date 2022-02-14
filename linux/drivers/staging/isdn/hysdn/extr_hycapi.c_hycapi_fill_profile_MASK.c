
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int goptions; int support1; int support2; int support3; int nbchannel; int ncontroller; } ;
struct TYPE_6__ {int majorversion; int majormanuversion; int minormanuversion; scalar_t__ minorversion; } ;
struct capi_ctr {TYPE_2__ profile; TYPE_1__ version; int manu; } ;
struct TYPE_8__ {scalar_t__ faxchans; int bchans; int myid; TYPE_4__* hyctrlinfo; } ;
typedef TYPE_3__ hysdn_card ;
struct TYPE_9__ {struct capi_ctr capi_ctrl; } ;
typedef TYPE_4__ hycapictrl_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(hysdn_card *VAR_13)
{
 hycapictrl_info *VAR_14 = ((void*)0);
 struct capi_ctr *VAR_15 = ((void*)0);
 VAR_14 = VAR_13->hyctrlinfo;
 if (!VAR_14) return;
 VAR_15 = &VAR_14->capi_ctrl;
 FUNC_0(VAR_15->manu, "Hypercope");
 VAR_15->version.majorversion = 2;
 VAR_15->version.minorversion = 0;
 VAR_15->version.majormanuversion = 3;
 VAR_15->version.minormanuversion = 2;
 VAR_15->profile.ncontroller = VAR_13->myid;
 VAR_15->profile.nbchannel = VAR_13->bchans;
 VAR_15->profile.goptions = VAR_12 |
  VAR_11;
 VAR_15->profile.support1 = VAR_0 |
  (VAR_13->faxchans ? VAR_2 : 0) |
  VAR_1;
 VAR_15->profile.support2 = VAR_3 |
  (VAR_13->faxchans ? VAR_4 : 0) |
  VAR_5;
 VAR_15->profile.support3 = VAR_10 |
  VAR_9 |
  (VAR_13->faxchans ? VAR_7 : 0) |
  (VAR_13->faxchans ? VAR_8 : 0) |
  VAR_6;
}
