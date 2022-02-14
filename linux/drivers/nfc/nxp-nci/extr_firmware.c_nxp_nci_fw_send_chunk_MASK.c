
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct sk_buff {int data; } ;
struct nxp_nci_fw_info {size_t frame_size; size_t written; size_t data; } ;
struct nxp_nci_info {size_t max_payload; int phy_id; TYPE_1__* phy_ops; int ndev; struct nxp_nci_fw_info fw_info; } ;
struct TYPE_2__ {int (* write ) (int ,struct sk_buff*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int ,size_t,int ) ;
 size_t FUNC_2 (int ,size_t) ;
 int FUNC_3 (size_t,int ) ;
 int FUNC_4 (struct sk_buff*,size_t) ;
 int FUNC_5 (struct sk_buff*,size_t,size_t) ;
 int FUNC_6 (int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct nxp_nci_info *VAR_6)
{
 struct nxp_nci_fw_info *VAR_7 = &VAR_6->fw_info;
 u16 VAR_8, VAR_9;
 struct sk_buff *VAR_10;
 size_t VAR_11;
 size_t VAR_12;
 int VAR_13;

 VAR_10 = FUNC_1(VAR_6->ndev, VAR_6->max_payload, VAR_1);
 if (!VAR_10) {
  VAR_13 = -VAR_0;
  goto chunk_exit;
 }

 VAR_11 = VAR_6->max_payload - VAR_5 - VAR_3;
 VAR_12 = VAR_7->frame_size - VAR_7->written;

 if (VAR_12 > VAR_11) {
  VAR_8 = VAR_2;
 } else {
  VAR_11 = VAR_12;
  VAR_8 = 0x0000;
 }

 VAR_8 |= VAR_11 & VAR_4;
 FUNC_3(VAR_8, FUNC_4(VAR_10, VAR_5));

 FUNC_5(VAR_10, VAR_7->data + VAR_7->written, VAR_11);

 VAR_9 = FUNC_2(VAR_10->data, VAR_11 + VAR_5);
 FUNC_3(VAR_9, FUNC_4(VAR_10, VAR_3));

 VAR_13 = VAR_6->phy_ops->write(VAR_6->phy_id, VAR_10);
 if (VAR_13 >= 0)
  VAR_13 = VAR_11;

 FUNC_0(VAR_10);

chunk_exit:
 return VAR_13;
}
