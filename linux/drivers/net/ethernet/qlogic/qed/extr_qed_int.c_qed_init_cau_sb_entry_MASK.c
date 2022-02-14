
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct qed_hwfn {struct qed_dev* cdev; } ;
struct qed_dev {scalar_t__ int_coalescing_mode; int rx_coalesce_usecs; int tx_coalesce_usecs; } ;
struct cau_sb_entry {int data; int params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct cau_sb_entry*,int ,int) ;

void FUNC_2(struct qed_hwfn *VAR_14,
      struct cau_sb_entry *VAR_15,
      u8 VAR_16, u16 VAR_17, u8 VAR_18)
{
 struct qed_dev *VAR_19 = VAR_14->cdev;
 u32 VAR_20;
 u8 VAR_21;

 FUNC_1(VAR_15, 0, sizeof(*VAR_15));

 FUNC_0(VAR_15->params, VAR_2, VAR_16);
 FUNC_0(VAR_15->params, VAR_9, VAR_17);
 FUNC_0(VAR_15->params, VAR_10, VAR_18);
 FUNC_0(VAR_15->params, VAR_3, 0x7F);
 FUNC_0(VAR_15->params, VAR_4, 0x7F);

 VAR_20 = VAR_0;

 if (VAR_19->int_coalescing_mode == VAR_13) {
  VAR_20 = VAR_1;
  if (!VAR_19->rx_coalesce_usecs)
   VAR_19->rx_coalesce_usecs = VAR_11;
  if (!VAR_19->tx_coalesce_usecs)
   VAR_19->tx_coalesce_usecs = VAR_12;
 }


 if (VAR_19->rx_coalesce_usecs <= 0x7F)
  VAR_21 = 0;
 else if (VAR_19->rx_coalesce_usecs <= 0xFF)
  VAR_21 = 1;
 else
  VAR_21 = 2;
 FUNC_0(VAR_15->params, VAR_7, VAR_21);

 if (VAR_19->tx_coalesce_usecs <= 0x7F)
  VAR_21 = 0;
 else if (VAR_19->tx_coalesce_usecs <= 0xFF)
  VAR_21 = 1;
 else
  VAR_21 = 2;
 FUNC_0(VAR_15->params, VAR_8, VAR_21);

 FUNC_0(VAR_15->data, VAR_5, VAR_20);
 FUNC_0(VAR_15->data, VAR_6, VAR_20);
}
