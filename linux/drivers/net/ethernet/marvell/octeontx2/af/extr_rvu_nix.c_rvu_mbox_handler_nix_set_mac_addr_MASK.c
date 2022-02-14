
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct rvu_pfvf {int rx_chan_base; int mac_addr; int nixlf; } ;
struct rvu_hwinfo {int * block; } ;
struct rvu {struct rvu_hwinfo* hw; } ;
struct TYPE_2__ {int pcifunc; } ;
struct nix_set_mac_addr {int mac_addr; TYPE_1__ hdr; } ;
struct msg_rsp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct rvu*,int ,int ) ;
 int FUNC_2 (struct rvu*,int *,int ,int ) ;
 struct rvu_pfvf* FUNC_3 (struct rvu*,int ) ;
 int FUNC_4 (struct rvu*,int ,int,int ,int ) ;
 int FUNC_5 (struct rvu*,int ,int) ;

int FUNC_6(struct rvu *VAR_2,
          struct nix_set_mac_addr *VAR_3,
          struct msg_rsp *VAR_4)
{
 struct rvu_hwinfo *VAR_5 = VAR_2->hw;
 u16 VAR_6 = VAR_3->hdr.pcifunc;
 struct rvu_pfvf *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_3(VAR_2, VAR_6);
 VAR_8 = FUNC_1(VAR_2, VAR_0, VAR_6);
 if (!VAR_7->nixlf || VAR_8 < 0)
  return VAR_1;

 VAR_9 = FUNC_2(VAR_2, &VAR_5->block[VAR_8], VAR_6, 0);
 if (VAR_9 < 0)
  return VAR_1;

 FUNC_0(VAR_7->mac_addr, VAR_3->mac_addr);

 FUNC_4(VAR_2, VAR_6, VAR_9,
        VAR_7->rx_chan_base, VAR_3->mac_addr);

 FUNC_5(VAR_2, VAR_6, VAR_9);

 return 0;
}
