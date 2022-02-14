
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct brcmu_chan {int chspec; int bw; int chnum; } ;
struct brcmf_p2p_info {TYPE_4__* cfg; TYPE_2__* bss_idx; } ;
struct brcmf_if {int dummy; } ;
struct brcmf_bss_info_le {int chanspec; } ;
typedef int __le32 ;
struct TYPE_7__ {int (* encchspec ) (struct brcmu_chan*) ;} ;
struct TYPE_8__ {TYPE_3__ d11inf; } ;
struct TYPE_6__ {TYPE_1__* vif; } ;
struct TYPE_5__ {struct brcmf_if* ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct brcmf_if*,int ,int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct brcmu_chan*) ;

__attribute__((used)) static void FUNC_6(struct brcmf_p2p_info *VAR_8,
        u16 *VAR_9)
{
 struct brcmf_if *VAR_10;
 u8 VAR_11[VAR_4];
 struct brcmu_chan VAR_12;
 struct brcmf_bss_info_le *VAR_13;
 u8 *VAR_14;

 VAR_10 = VAR_8->bss_idx[VAR_6].vif->ifp;

 if (FUNC_0(VAR_10, VAR_0, VAR_11,
       VAR_4) == 0) {
  VAR_14 = FUNC_3(VAR_7, VAR_5);
  if (VAR_14 != ((void*)0)) {
   *(__le32 *)VAR_14 = FUNC_1(VAR_7);
   if (FUNC_0(VAR_10, VAR_1,
         VAR_14, VAR_7) == 0) {
    VAR_13 = (struct brcmf_bss_info_le *)(VAR_14 + 4);
    *VAR_9 = FUNC_4(VAR_13->chanspec);
    FUNC_2(VAR_14);
    return;
   }
   FUNC_2(VAR_14);
  }
 }

 VAR_12.chnum = VAR_2;
 VAR_12.bw = VAR_3;
 VAR_8->cfg->d11inf.encchspec(&VAR_12);
 *VAR_9 = VAR_12.chspec;
}
