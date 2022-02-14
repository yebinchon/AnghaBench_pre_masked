
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef void* u32 ;
typedef int u16 ;
struct TYPE_6__ {TYPE_2__* ext_info; } ;
struct ath10k_sdio {void** mbox_size; void** mbox_addr; TYPE_3__ mbox_info; scalar_t__ swap_mbox; } ;
struct ath10k_htc {TYPE_1__* endpoint; } ;
struct ath10k {struct ath10k_htc htc; } ;
typedef enum ath10k_htc_ep_id { ____Placeholder_ath10k_htc_ep_id } ath10k_htc_ep_id ;
struct TYPE_5__ {void* htc_ext_sz; void* htc_ext_addr; } ;
struct TYPE_4__ {int service_id; int eid; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (struct ath10k*,int ,char*,void*,void*) ;
 struct ath10k_sdio* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct ath10k *VAR_3,
            u16 VAR_4,
            u8 *VAR_5, u8 *VAR_6)
{
 struct ath10k_sdio *VAR_7 = FUNC_1(VAR_3);
 struct ath10k_htc *VAR_8 = &VAR_3->htc;
 u32 VAR_9, VAR_10, VAR_11, VAR_12;
 enum ath10k_htc_ep_id VAR_13;
 bool VAR_14 = 0;
 int VAR_15;






 for (VAR_15 = 0; VAR_15 < VAR_1; VAR_15++) {
  if (VAR_8->endpoint[VAR_15].service_id == VAR_4) {
   VAR_13 = VAR_8->endpoint[VAR_15].eid;
   VAR_14 = 1;
   break;
  }
 }

 if (!VAR_14)
  return -VAR_2;




 *VAR_5 = *VAR_6 = (u8)VAR_13;






 if (VAR_7->swap_mbox) {
  VAR_9 = VAR_7->mbox_info.ext_info[0].htc_ext_addr;
  VAR_10 = VAR_7->mbox_info.ext_info[1].htc_ext_addr;
  VAR_11 = VAR_7->mbox_info.ext_info[0].htc_ext_sz;
  VAR_12 = VAR_7->mbox_info.ext_info[1].htc_ext_sz;
 } else {
  VAR_9 = VAR_7->mbox_info.ext_info[1].htc_ext_addr;
  VAR_10 = VAR_7->mbox_info.ext_info[0].htc_ext_addr;
  VAR_11 = VAR_7->mbox_info.ext_info[1].htc_ext_sz;
  VAR_12 = VAR_7->mbox_info.ext_info[0].htc_ext_sz;
 }

 switch (VAR_4) {
 case 129:



  break;
 case 128:
  VAR_7->mbox_addr[VAR_13] = VAR_10;
  VAR_7->mbox_size[VAR_13] = VAR_12;
  FUNC_0(VAR_3, VAR_0,
      "sdio wmi ctrl mbox_addr 0x%x mbox_size %d\n",
      VAR_7->mbox_addr[VAR_13], VAR_7->mbox_size[VAR_13]);
  break;
 case 130:
  VAR_7->mbox_addr[VAR_13] = VAR_9;
  VAR_7->mbox_size[VAR_13] = VAR_11;
  FUNC_0(VAR_3, VAR_0,
      "sdio htt data mbox_addr 0x%x mbox_size %d\n",
      VAR_7->mbox_addr[VAR_13], VAR_7->mbox_size[VAR_13]);
  break;
 default:
  FUNC_2(VAR_3, "unsupported HTC service id: %d\n",
       VAR_4);
  return -VAR_2;
 }

 return 0;
}
