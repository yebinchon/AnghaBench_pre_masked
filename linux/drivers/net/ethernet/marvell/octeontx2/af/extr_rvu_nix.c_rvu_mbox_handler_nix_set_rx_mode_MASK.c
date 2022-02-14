
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct rvu_pfvf {int rx_chan_base; int nixlf; } ;
struct rvu_hwinfo {int * block; } ;
struct rvu {struct rvu_hwinfo* hw; } ;
struct TYPE_2__ {int pcifunc; } ;
struct nix_rx_mode {int mode; TYPE_1__ hdr; } ;
struct msg_rsp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rvu*,int ,int ) ;
 int FUNC_1 (struct rvu*,int *,int ,int ) ;
 struct rvu_pfvf* FUNC_2 (struct rvu*,int ) ;
 int FUNC_3 (struct rvu*,int ,int) ;
 int FUNC_4 (struct rvu*,int ,int,int ,int) ;
 int FUNC_5 (struct rvu*,int ,int) ;

int FUNC_6(struct rvu *VAR_4, struct nix_rx_mode *VAR_5,
         struct msg_rsp *VAR_6)
{
 bool VAR_7 = 0, VAR_8 = 0;
 struct rvu_hwinfo *VAR_9 = VAR_4->hw;
 u16 VAR_10 = VAR_5->hdr.pcifunc;
 struct rvu_pfvf *VAR_11;
 int VAR_12, VAR_13;

 VAR_11 = FUNC_2(VAR_4, VAR_10);
 VAR_12 = FUNC_0(VAR_4, VAR_0, VAR_10);
 if (!VAR_11->nixlf || VAR_12 < 0)
  return VAR_1;

 VAR_13 = FUNC_1(VAR_4, &VAR_9->block[VAR_12], VAR_10, 0);
 if (VAR_13 < 0)
  return VAR_1;

 if (VAR_5->mode & VAR_3)
  VAR_7 = 0;
 else if (VAR_5->mode & VAR_2)
  VAR_7 = 1;
 else
  VAR_8 = 1;

 if (VAR_8)
  FUNC_3(VAR_4, VAR_10, VAR_13);
 else
  FUNC_4(VAR_4, VAR_10, VAR_13,
           VAR_11->rx_chan_base, VAR_7);

 FUNC_5(VAR_4, VAR_10, VAR_13);

 return 0;
}
