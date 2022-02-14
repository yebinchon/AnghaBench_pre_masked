
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct vivid_dev {size_t num_inputs; scalar_t__* input_type; int edid_blocks; int edid_max_blocks; unsigned int num_outputs; scalar_t__* output_type; int* display_present; scalar_t__* cec_tx_adap; scalar_t__ cec_rx_adap; int ctrl_tx_hotplug; int ctrl_tx_edid_present; int edid; int vb_vid_cap_q; } ;
struct v4l2_edid {size_t pad; int blocks; int edid; scalar_t__ start_block; int reserved; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int ,int,int *) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (int ,int *,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 struct vivid_dev* FUNC_8 (struct file*) ;

int FUNC_9(struct file *VAR_6, void *VAR_7,
    struct v4l2_edid *VAR_8)
{
 struct vivid_dev *VAR_9 = FUNC_8(VAR_6);
 u16 VAR_10;
 u32 VAR_11 = 0;
 unsigned int VAR_12, VAR_13;
 int VAR_14;

 FUNC_3(VAR_8->reserved, 0, sizeof(VAR_8->reserved));
 if (VAR_8->pad >= VAR_9->num_inputs)
  return -VAR_3;
 if (VAR_9->input_type[VAR_8->pad] != VAR_4 || VAR_8->start_block)
  return -VAR_3;
 if (VAR_8->blocks == 0) {
  VAR_9->edid_blocks = 0;
  FUNC_4(VAR_9->ctrl_tx_edid_present, 0);
  FUNC_4(VAR_9->ctrl_tx_hotplug, 0);
  VAR_10 = VAR_0;
  goto set_phys_addr;
 }
 if (VAR_8->blocks > VAR_9->edid_max_blocks) {
  VAR_8->blocks = VAR_9->edid_max_blocks;
  return -VAR_1;
 }
 VAR_10 = FUNC_0(VAR_8->edid, VAR_8->blocks * 128, ((void*)0));
 VAR_14 = FUNC_6(VAR_10, &VAR_10, ((void*)0));
 if (VAR_14)
  return VAR_14;

 if (FUNC_7(&VAR_9->vb_vid_cap_q))
  return -VAR_2;

 VAR_9->edid_blocks = VAR_8->blocks;
 FUNC_2(VAR_9->edid, VAR_8->edid, VAR_8->blocks * 128);

 for (VAR_12 = 0, VAR_13 = 0; VAR_12 < VAR_9->num_outputs; VAR_12++)
  if (VAR_9->output_type[VAR_12] == VAR_4)
   VAR_11 |=
    VAR_9->display_present[VAR_12] << VAR_13++;

 FUNC_4(VAR_9->ctrl_tx_edid_present, VAR_11);
 FUNC_4(VAR_9->ctrl_tx_hotplug, VAR_11);

set_phys_addr:

 FUNC_1(VAR_9->cec_rx_adap, VAR_10, 0);

 for (VAR_12 = 0; VAR_12 < VAR_5 && VAR_9->cec_tx_adap[VAR_12]; VAR_12++)
  FUNC_1(VAR_9->cec_tx_adap[VAR_12],
    VAR_9->display_present[VAR_12] ?
    FUNC_5(VAR_10, VAR_12 + 1) :
    VAR_0,
    0);
 return 0;
}
