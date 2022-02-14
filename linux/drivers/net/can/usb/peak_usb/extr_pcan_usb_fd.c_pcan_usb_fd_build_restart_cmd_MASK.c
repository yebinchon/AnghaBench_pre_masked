
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pucan_wr_err_cnt {scalar_t__ rx_counter; scalar_t__ tx_counter; void* sel_mask; void* opcode_channel; } ;
struct pucan_options {scalar_t__ unused; void* options; void* opcode_channel; } ;
struct pucan_command {void* opcode_channel; } ;
struct TYPE_2__ {int ctrlmode_supported; int ctrlmode; } ;
struct peak_usb_device {TYPE_1__ can; int ctrl_idx; } ;


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
 void* FUNC_0 (int) ;
 void* FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct peak_usb_device *VAR_10, u8 *VAR_11)
{
 struct pucan_wr_err_cnt *VAR_12;
 struct pucan_command *VAR_13;
 u8 *VAR_14 = VAR_11;


 VAR_12 = (struct pucan_wr_err_cnt *)VAR_14;
 VAR_12->opcode_channel = FUNC_1(VAR_10->ctrl_idx,
             VAR_6);


 VAR_12->sel_mask = FUNC_0(VAR_9|VAR_8);


 VAR_12->tx_counter = 0;
 VAR_12->rx_counter = 0;


 VAR_14 += sizeof(struct pucan_wr_err_cnt);


 if (VAR_10->can.ctrlmode_supported & VAR_0) {
  struct pucan_options *VAR_15 = (struct pucan_options *)VAR_14;

  VAR_15->opcode_channel =
   (VAR_10->can.ctrlmode & VAR_0) ?
   FUNC_1(VAR_10->ctrl_idx,
       VAR_2) :
   FUNC_1(VAR_10->ctrl_idx,
       VAR_5);

  VAR_15->options = FUNC_0(VAR_7);




  VAR_15->unused = 0;


  VAR_14 += sizeof(struct pucan_options);
 }


 VAR_13 = (struct pucan_command *)VAR_14;
 VAR_13->opcode_channel = FUNC_1(VAR_10->ctrl_idx,
    (VAR_10->can.ctrlmode & VAR_1) ?
      VAR_3 :
      VAR_4);
 VAR_14 += sizeof(struct pucan_command);

 return VAR_14 - VAR_11;
}
