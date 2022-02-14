
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct brcmu_chan {scalar_t__ chspec; scalar_t__ chnum; int bw; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_p2p_info {TYPE_2__* cfg; } ;
typedef int s32 ;
struct TYPE_3__ {int (* encchspec ) (struct brcmu_chan*) ;} ;
struct TYPE_4__ {TYPE_1__ d11inf; struct brcmf_pub* pub; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct brcmf_pub*,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct brcmf_p2p_info*,size_t,scalar_t__*,int ,int ) ;
 scalar_t__* FUNC_3 (size_t,int,int ) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (struct brcmu_chan*) ;
 int FUNC_6 (struct brcmu_chan*) ;
 int FUNC_7 (struct brcmu_chan*) ;
 int FUNC_8 (struct brcmu_chan*) ;

__attribute__((used)) static s32 FUNC_9(struct brcmf_p2p_info *VAR_11, u16 VAR_12)
{
 struct brcmf_pub *VAR_13 = VAR_11->cfg->pub;
 s32 VAR_14;
 u32 VAR_15;
 u16 *VAR_16;
 u32 VAR_17;
 struct brcmu_chan VAR_18;

 FUNC_1(VAR_9, "Enter\n");

 if (VAR_12)
  VAR_15 = VAR_0;
 else
  VAR_15 = VAR_8;
 VAR_16 = FUNC_3(VAR_15, sizeof(*VAR_16),
        VAR_3);
 if (VAR_16 == ((void*)0)) {
  FUNC_0(VAR_13, "channel list allocation failed\n");
  VAR_14 = -VAR_2;
  goto exit;
 }
 VAR_18.bw = VAR_1;
 if (VAR_12) {
  VAR_18.chnum = VAR_12;
  VAR_11->cfg->d11inf.encchspec(&VAR_18);

  for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++)
   VAR_16[VAR_17] = VAR_18.chspec;
 } else {
  VAR_18.chnum = VAR_5;
  VAR_11->cfg->d11inf.encchspec(&VAR_18);
  VAR_16[0] = VAR_18.chspec;
  VAR_18.chnum = VAR_6;
  VAR_11->cfg->d11inf.encchspec(&VAR_18);
  VAR_16[1] = VAR_18.chspec;
  VAR_18.chnum = VAR_7;
  VAR_11->cfg->d11inf.encchspec(&VAR_18);
  VAR_16[2] = VAR_18.chspec;
 }
 VAR_14 = FUNC_2(VAR_11, VAR_15, VAR_16,
         VAR_10, VAR_4);
 FUNC_4(VAR_16);
exit:
 return VAR_14;
}
