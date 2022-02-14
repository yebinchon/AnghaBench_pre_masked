
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct sk_buff {scalar_t__ data; } ;
struct pucan_tx_msg {void* size; int d; int channel_dlc; void* flags; void* can_id; void* type; } ;
struct peak_usb_device {int ctrl_idx; } ;
struct canfd_frame {int can_id; int flags; scalar_t__ len; int data; } ;


 size_t FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_1 (int ,scalar_t__) ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 void* FUNC_4 (size_t) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct peak_usb_device *VAR_12,
      struct sk_buff *VAR_13, u8 *VAR_14, size_t *VAR_15)
{
 struct pucan_tx_msg *VAR_16 = (struct pucan_tx_msg *)VAR_14;
 struct canfd_frame *VAR_17 = (struct canfd_frame *)VAR_13->data;
 u16 VAR_18, VAR_19;
 u8 VAR_20;

 VAR_18 = FUNC_0(sizeof(struct pucan_tx_msg) + VAR_17->len, 4);
 VAR_16->size = FUNC_4(VAR_18);
 VAR_16->type = FUNC_4(VAR_7);

 VAR_19 = 0;
 if (VAR_17->can_id & VAR_2) {
  VAR_19 |= VAR_10;
  VAR_16->can_id = FUNC_5(VAR_17->can_id & VAR_3);
 } else {
  VAR_16->can_id = FUNC_5(VAR_17->can_id & VAR_5);
 }

 if (FUNC_2(VAR_13)) {

  VAR_20 = FUNC_3(VAR_17->len);

  VAR_19 |= VAR_9;

  if (VAR_17->flags & VAR_0)
   VAR_19 |= VAR_6;

  if (VAR_17->flags & VAR_1)
   VAR_19 |= VAR_8;
 } else {

  VAR_20 = VAR_17->len;

  if (VAR_17->can_id & VAR_4)
   VAR_19 |= VAR_11;
 }

 VAR_16->flags = FUNC_4(VAR_19);
 VAR_16->channel_dlc = FUNC_1(VAR_12->ctrl_idx, VAR_20);
 FUNC_6(VAR_16->d, VAR_17->data, VAR_17->len);



 VAR_16 = (struct pucan_tx_msg *)(VAR_14 + VAR_18);

 VAR_16->size = 0;


 *VAR_15 = VAR_18 + sizeof(u32);

 return 0;
}
