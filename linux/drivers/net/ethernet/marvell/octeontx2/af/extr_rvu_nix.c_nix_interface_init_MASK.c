
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rvu_pfvf {int rx_chan_cnt; int tx_chan_cnt; void* minlen; void* maxlen; void* rx_chan_base; int mac_addr; void* tx_chan_base; int cgx_lmac; } ;
struct rvu {int dev; int * pf2cgxlmac_map; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* FUNC_0 (int ,int ,int ) ;
 void* FUNC_1 (int ,int) ;


 int VAR_2 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct rvu*,int) ;
 int FUNC_5 (struct rvu*,int,int) ;
 int FUNC_6 (int ,struct rvu*) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (int) ;
 struct rvu_pfvf* FUNC_9 (struct rvu*,int) ;
 int FUNC_10 (struct rvu*,int) ;
 int FUNC_11 (struct rvu*,int,int,void*) ;
 int FUNC_12 (struct rvu*,int,int,void*,int) ;
 int FUNC_13 (struct rvu*,int,int,void*,int ) ;
 int FUNC_14 (struct rvu*,int,struct rvu_pfvf*) ;

__attribute__((used)) static int FUNC_15(struct rvu *VAR_3, u16 VAR_4, int VAR_5, int VAR_6)
{
 struct rvu_pfvf *VAR_7 = FUNC_9(VAR_3, VAR_4);
 u8 VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12;
 int VAR_13;

 VAR_11 = FUNC_8(VAR_4);
 if (!FUNC_4(VAR_3, VAR_11) && VAR_5 != 128)
  return 0;

 switch (VAR_5) {
 case 129:
  VAR_7->cgx_lmac = VAR_3->pf2cgxlmac_map[VAR_11];
  FUNC_7(VAR_7->cgx_lmac, &VAR_8, &VAR_9);

  VAR_10 = FUNC_10(VAR_3, VAR_11);
  if (VAR_10 < 0) {
   FUNC_3(VAR_3->dev,
    "PF_Func 0x%x: Invalid pkind\n", VAR_4);
   return -VAR_0;
  }
  VAR_7->rx_chan_base = FUNC_0(VAR_8, VAR_9, 0);
  VAR_7->tx_chan_base = VAR_7->rx_chan_base;
  VAR_7->rx_chan_cnt = 1;
  VAR_7->tx_chan_cnt = 1;
  FUNC_2(FUNC_6(VAR_8, VAR_3), VAR_9, VAR_10);
  FUNC_14(VAR_3, VAR_10, VAR_7);
  break;
 case 128:
  VAR_12 = (VAR_4 & VAR_2) - 1;
  VAR_7->rx_chan_base = FUNC_1(0, VAR_12);
  VAR_7->tx_chan_base = VAR_12 & 0x1 ? FUNC_1(0, VAR_12 - 1) :
      FUNC_1(0, VAR_12 + 1);
  VAR_7->rx_chan_cnt = 1;
  VAR_7->tx_chan_cnt = 1;
  FUNC_12(VAR_3, VAR_4, VAR_6,
           VAR_7->rx_chan_base, 0);
  break;
 }




 FUNC_13(VAR_3, VAR_4, VAR_6,
        VAR_7->rx_chan_base, VAR_7->mac_addr);


 VAR_13 = FUNC_5(VAR_3, VAR_4, 1);
 if (VAR_13) {
  FUNC_3(VAR_3->dev,
   "Bcast list, failed to enable PF_FUNC 0x%x\n",
   VAR_4);
  return VAR_13;
 }

 FUNC_11(VAR_3, VAR_4,
       VAR_6, VAR_7->rx_chan_base);
 VAR_7->maxlen = VAR_1;
 VAR_7->minlen = VAR_1;

 return 0;
}
