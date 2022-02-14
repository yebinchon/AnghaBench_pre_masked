
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {size_t num_inputs; scalar_t__* input_type; size_t num_outputs; scalar_t__* output_type; unsigned int* cec_output2bus_map; int edid_blocks; scalar_t__ edid; struct cec_adapter** cec_tx_adap; int * display_present; struct cec_adapter* cec_rx_adap; } ;
struct video_device {scalar_t__ vfl_dir; } ;
struct v4l2_edid {size_t pad; int start_block; int blocks; int edid; int reserved; } ;
struct file {int dummy; } ;
struct cec_adapter {int phys_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (scalar_t__,int,int ) ;
 struct video_device* FUNC_3 (struct file*) ;
 struct vivid_dev* FUNC_4 (struct file*) ;

int FUNC_5(struct file *VAR_4, void *VAR_5,
    struct v4l2_edid *VAR_6)
{
 struct vivid_dev *VAR_7 = FUNC_4(VAR_4);
 struct video_device *VAR_8 = FUNC_3(VAR_4);
 struct cec_adapter *VAR_9;

 FUNC_1(VAR_6->reserved, 0, sizeof(VAR_6->reserved));
 if (VAR_8->vfl_dir == VAR_3) {
  if (VAR_6->pad >= VAR_7->num_inputs)
   return -VAR_0;
  if (VAR_7->input_type[VAR_6->pad] != VAR_2)
   return -VAR_0;
  VAR_9 = VAR_7->cec_rx_adap;
 } else {
  unsigned int VAR_10;

  if (VAR_6->pad >= VAR_7->num_outputs)
   return -VAR_0;
  if (VAR_7->output_type[VAR_6->pad] != VAR_2)
   return -VAR_0;
  if (!VAR_7->display_present[VAR_6->pad])
   return -VAR_1;
  VAR_10 = VAR_7->cec_output2bus_map[VAR_6->pad];
  VAR_9 = VAR_7->cec_tx_adap[VAR_10];
 }
 if (VAR_6->start_block == 0 && VAR_6->blocks == 0) {
  VAR_6->blocks = VAR_7->edid_blocks;
  return 0;
 }
 if (VAR_7->edid_blocks == 0)
  return -VAR_1;
 if (VAR_6->start_block >= VAR_7->edid_blocks)
  return -VAR_0;
 if (VAR_6->blocks > VAR_7->edid_blocks - VAR_6->start_block)
  VAR_6->blocks = VAR_7->edid_blocks - VAR_6->start_block;
 if (VAR_9)
  FUNC_2(VAR_7->edid, VAR_7->edid_blocks * 128, VAR_9->phys_addr);
 FUNC_0(VAR_6->edid, VAR_7->edid + VAR_6->start_block * 128, VAR_6->blocks * 128);
 return 0;
}
