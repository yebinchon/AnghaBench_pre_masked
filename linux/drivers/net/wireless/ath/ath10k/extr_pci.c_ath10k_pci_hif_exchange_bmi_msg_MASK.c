
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bmi_xfer {int wait_for_resp; scalar_t__ resp_len; } ;
struct ath10k_pci_pipe {struct ath10k_ce_pipe* ce_hdl; } ;
struct ath10k_pci {struct ath10k_pci_pipe* pipe_info; } ;
struct ath10k_ce_pipe {int dummy; } ;
struct ath10k {int dev; } ;
typedef int dma_addr_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ath10k_ce_pipe*,int *,int *,unsigned int*,unsigned int*) ;
 int FUNC_1 (struct ath10k_ce_pipe*,int *,int *) ;
 int FUNC_2 (struct ath10k_ce_pipe*,struct bmi_xfer*,int ) ;
 int FUNC_3 (struct ath10k_ce_pipe*,struct bmi_xfer*,int ,int ,int,int ) ;
 int FUNC_4 (struct ath10k*,struct ath10k_ce_pipe*,struct ath10k_ce_pipe*,struct bmi_xfer*) ;
 struct ath10k_pci* FUNC_5 (struct ath10k*) ;
 int FUNC_6 (int ,void*,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (void*) ;
 void* FUNC_10 (void*,int ,int ) ;
 void* FUNC_11 (int ,int ) ;
 int FUNC_12 (void*,void*,scalar_t__) ;
 int FUNC_13 () ;
 int FUNC_14 (int ,scalar_t__) ;

int FUNC_15(struct ath10k *VAR_8,
        void *VAR_9, u32 VAR_10,
        void *VAR_11, u32 *VAR_12)
{
 struct ath10k_pci *VAR_13 = FUNC_5(VAR_8);
 struct ath10k_pci_pipe *VAR_14 = &VAR_13->pipe_info[VAR_1];
 struct ath10k_pci_pipe *VAR_15 = &VAR_13->pipe_info[VAR_0];
 struct ath10k_ce_pipe *VAR_16 = VAR_14->ce_hdl;
 struct ath10k_ce_pipe *VAR_17 = VAR_15->ce_hdl;
 dma_addr_t VAR_18 = 0;
 dma_addr_t VAR_19 = 0;
 struct bmi_xfer VAR_20 = {};
 void *VAR_21, *VAR_22 = ((void*)0);
 int VAR_23 = 0;

 FUNC_13();

 if (VAR_11 && !VAR_12)
  return -VAR_4;

 if (VAR_11 && VAR_12 && *VAR_12 == 0)
  return -VAR_4;

 VAR_21 = FUNC_10(VAR_9, VAR_10, VAR_7);
 if (!VAR_21)
  return -VAR_6;

 VAR_18 = FUNC_6(VAR_8->dev, VAR_21, VAR_10, VAR_3);
 VAR_23 = FUNC_7(VAR_8->dev, VAR_18);
 if (VAR_23) {
  VAR_23 = -VAR_5;
  goto err_dma;
 }

 if (VAR_11 && VAR_12) {
  VAR_22 = FUNC_11(*VAR_12, VAR_7);
  if (!VAR_22) {
   VAR_23 = -VAR_6;
   goto err_req;
  }

  VAR_19 = FUNC_6(VAR_8->dev, VAR_22, *VAR_12,
         VAR_2);
  VAR_23 = FUNC_7(VAR_8->dev, VAR_19);
  if (VAR_23) {
   VAR_23 = -VAR_5;
   goto err_req;
  }

  VAR_20.wait_for_resp = 1;
  VAR_20.resp_len = 0;

  FUNC_2(VAR_17, &VAR_20, VAR_19);
 }

 VAR_23 = FUNC_3(VAR_16, &VAR_20, VAR_18, VAR_10, -1, 0);
 if (VAR_23)
  goto err_resp;

 VAR_23 = FUNC_4(VAR_8, VAR_16, VAR_17, &VAR_20);
 if (VAR_23) {
  dma_addr_t VAR_24;
  unsigned int VAR_25;
  unsigned int VAR_26;

  FUNC_0(VAR_16, ((void*)0), &VAR_24,
        &VAR_25, &VAR_26);
 } else {

  VAR_23 = 0;
 }

err_resp:
 if (VAR_11) {
  dma_addr_t VAR_27;

  FUNC_1(VAR_17, ((void*)0), &VAR_27);
  FUNC_8(VAR_8->dev, VAR_19,
     *VAR_12, VAR_2);
 }
err_req:
 FUNC_8(VAR_8->dev, VAR_18, VAR_10, VAR_3);

 if (VAR_23 == 0 && VAR_12) {
  *VAR_12 = FUNC_14(*VAR_12, VAR_20.resp_len);
  FUNC_12(VAR_11, VAR_22, VAR_20.resp_len);
 }
err_dma:
 FUNC_9(VAR_21);
 FUNC_9(VAR_22);

 return VAR_23;
}
