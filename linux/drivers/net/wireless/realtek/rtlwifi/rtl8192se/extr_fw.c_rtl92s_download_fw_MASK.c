
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_priv {scalar_t__ max_fw_size; } ;
struct rtl_hal {scalar_t__ pfirmware; } ;
struct rt_firmware {int* sz_fw_tmpbuffer; int* fw_imem; int fw_imem_len; int* fw_emem; int fw_emem_len; void* fwstatus; struct fw_hdr* pfwheader; int firmwareversion; } ;
struct ieee80211_hw {int dummy; } ;
struct fw_priv {int hci_sel; } ;
struct fw_hdr {int img_imem_size; int img_sram_size; struct fw_priv fwpriv; int dmem_size; int version; int signature; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int ,int ,int ,int,int) ;
 int FUNC_1 (struct ieee80211_hw*,int) ;
 int FUNC_2 (struct ieee80211_hw*,int*,int) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct ieee80211_hw*,struct fw_priv*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int*,int*,int) ;
 int FUNC_7 (char*) ;
 struct rtl_hal* FUNC_8 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_9 (struct ieee80211_hw*) ;

int FUNC_10(struct ieee80211_hw *VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_9(VAR_6);
 struct rtl_hal *VAR_8 = FUNC_8(FUNC_9(VAR_6));
 struct rt_firmware *VAR_9 = ((void*)0);
 struct fw_hdr *VAR_10;
 struct fw_priv *VAR_11 = ((void*)0);
 u8 *VAR_12 = ((void*)0);
 u32 VAR_13 = 0;
 u8 VAR_14 = VAR_5;
 u8 VAR_15 = VAR_2;
 bool VAR_16 = 1;

 if (VAR_7->max_fw_size == 0 || !VAR_8->pfirmware)
  return 1;

 VAR_9 = (struct rt_firmware *)VAR_8->pfirmware;
 VAR_9->fwstatus = VAR_2;

 VAR_12 = VAR_9->sz_fw_tmpbuffer;


 VAR_9->pfwheader = (struct fw_hdr *) VAR_12;
 VAR_10 = VAR_9->pfwheader;
 VAR_9->firmwareversion = FUNC_5(VAR_10->version, 0);
 VAR_9->pfwheader->fwpriv.hci_sel = 1;

 FUNC_0(VAR_7, VAR_0, VAR_1,
   "signature:%x, version:%x, size:%x, imemsize:%x, sram size:%x\n",
   VAR_10->signature,
   VAR_10->version, VAR_10->dmem_size,
   VAR_10->img_imem_size, VAR_10->img_sram_size);


 if ((VAR_10->img_imem_size == 0) || (VAR_10->img_imem_size >
     sizeof(VAR_9->fw_imem))) {
  FUNC_7("memory for data image is less than IMEM required\n");
  goto fail;
 } else {
  VAR_12 += VAR_14;

  FUNC_6(VAR_9->fw_imem, VAR_12,
         VAR_10->img_imem_size);
  VAR_9->fw_imem_len = VAR_10->img_imem_size;
 }


 if (VAR_10->img_sram_size > sizeof(VAR_9->fw_emem)) {
  FUNC_7("memory for data image is less than EMEM required\n");
  goto fail;
 } else {
  VAR_12 += VAR_9->fw_imem_len;

  FUNC_6(VAR_9->fw_emem, VAR_12,
         VAR_10->img_sram_size);
  VAR_9->fw_emem_len = VAR_10->img_sram_size;
 }


 VAR_15 = FUNC_3(VAR_9->fwstatus);
 while (VAR_15 != VAR_3) {

  switch (VAR_15) {
  case 128:
   VAR_12 = VAR_9->fw_imem;
   VAR_13 = VAR_9->fw_imem_len;
   break;
  case 129:
   VAR_12 = VAR_9->fw_emem;
   VAR_13 = VAR_9->fw_emem_len;
   break;
  case 130:

   VAR_10 = VAR_9->pfwheader;
   VAR_11 = &VAR_10->fwpriv;
   FUNC_4(VAR_6, VAR_11);
   VAR_12 = (u8 *)(VAR_9->pfwheader) +
     VAR_4;
   VAR_13 = VAR_14 -
     VAR_4;
   break;
  default:
   FUNC_7("Unexpected Download step!!\n");
   goto fail;
  }


  VAR_16 = FUNC_2(VAR_6, VAR_12,
    VAR_13);

  if (!VAR_16) {
   FUNC_7("fail!\n");
   goto fail;
  }


  VAR_16 = FUNC_1(VAR_6, VAR_15);
  if (!VAR_16) {
   FUNC_7("rtl8192se: firmware fail!\n");
   goto fail;
  }

  VAR_15 = FUNC_3(VAR_9->fwstatus);
 }

 return VAR_16;
fail:
 return 0;
}
