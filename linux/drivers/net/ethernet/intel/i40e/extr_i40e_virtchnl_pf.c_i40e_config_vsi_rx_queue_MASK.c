
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct virtchnl_rxq_info {int dma_ring_addr; int hdr_size; int databuffer_size; int max_pkt_size; scalar_t__ splithdr_enabled; int ring_len; } ;
struct i40e_vf {struct i40e_pf* pf; } ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {TYPE_1__* pdev; struct i40e_hw hw; } ;
struct i40e_hmc_obj_rxq {int base; int hsplit_0; int hbuff; int dbuff; int rxmax; int dsize; int lrxqthresh; int crcstrip; int prefena; int l2tsel; int dtype; int qlen; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (struct i40e_hw*,int ) ;
 int FUNC_2 (struct i40e_hw*,int ,struct i40e_hmc_obj_rxq*) ;
 int FUNC_3 (struct i40e_vf*,int ,int ) ;
 int FUNC_4 (struct i40e_hmc_obj_rxq*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct i40e_vf *VAR_9, u16 VAR_10,
        u16 VAR_11,
        struct virtchnl_rxq_info *VAR_12)
{
 struct i40e_pf *VAR_13 = VAR_9->pf;
 struct i40e_hw *VAR_14 = &VAR_13->hw;
 struct i40e_hmc_obj_rxq VAR_15;
 u16 VAR_16;
 int VAR_17 = 0;

 VAR_16 = FUNC_3(VAR_9, VAR_10, VAR_11);


 FUNC_4(&VAR_15, 0, sizeof(struct i40e_hmc_obj_rxq));


 VAR_15.base = VAR_12->dma_ring_addr / 128;
 VAR_15.qlen = VAR_12->ring_len;

 if (VAR_12->splithdr_enabled) {
  VAR_15.hsplit_0 = VAR_6 |
      VAR_5 |
      VAR_8 |
      VAR_7;

  if (VAR_12->hdr_size > ((2 * 1024) - 64)) {
   VAR_17 = -VAR_0;
   goto error_param;
  }
  VAR_15.hbuff = VAR_12->hdr_size >> VAR_3;


  VAR_15.dtype = VAR_4;
 }


 if (VAR_12->databuffer_size > ((16 * 1024) - 128)) {
  VAR_17 = -VAR_0;
  goto error_param;
 }
 VAR_15.dbuff = VAR_12->databuffer_size >> VAR_2;


 if (VAR_12->max_pkt_size >= (16 * 1024) || VAR_12->max_pkt_size < 64) {
  VAR_17 = -VAR_0;
  goto error_param;
 }
 VAR_15.rxmax = VAR_12->max_pkt_size;


 VAR_15.dsize = 1;


 VAR_15.lrxqthresh = 1;
 VAR_15.crcstrip = 1;
 VAR_15.prefena = 1;
 VAR_15.l2tsel = 1;


 VAR_17 = FUNC_1(VAR_14, VAR_16);
 if (VAR_17) {
  FUNC_0(&VAR_13->pdev->dev,
   "Failed to clear VF LAN Rx queue context %d, error: %d\n",
   VAR_16, VAR_17);
  VAR_17 = -VAR_1;
  goto error_param;
 }


 VAR_17 = FUNC_2(VAR_14, VAR_16, &VAR_15);
 if (VAR_17) {
  FUNC_0(&VAR_13->pdev->dev,
   "Failed to set VF LAN Rx queue context %d error: %d\n",
   VAR_16, VAR_17);
  VAR_17 = -VAR_1;
  goto error_param;
 }

error_param:
 return VAR_17;
}
