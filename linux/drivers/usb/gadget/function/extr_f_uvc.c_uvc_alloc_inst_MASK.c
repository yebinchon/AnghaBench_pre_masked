
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_processing_unit_descriptor {int bUnitID; int bSourceID; int bControlSize; int* bmControls; scalar_t__ iProcessing; void* wMaxMultiplier; int bDescriptorSubType; void* bDescriptorType; int bLength; } ;
struct uvc_output_terminal_descriptor {int bTerminalID; int bSourceID; scalar_t__ iTerminal; scalar_t__ bAssocTerminal; void* wTerminalType; int bDescriptorSubType; void* bDescriptorType; int bLength; } ;
struct uvc_descriptor_header {int dummy; } ;
struct uvc_color_matching_descriptor {int bColorPrimaries; int bTransferCharacteristics; int bMatrixCoefficients; int bDescriptorSubType; void* bDescriptorType; int bLength; } ;
struct uvc_camera_terminal_descriptor {int bTerminalID; int bControlSize; int* bmControls; void* wOcularFocalLength; void* wObjectiveFocalLengthMax; void* wObjectiveFocalLengthMin; scalar_t__ iTerminal; scalar_t__ bAssocTerminal; void* wTerminalType; int bDescriptorSubType; void* bDescriptorType; int bLength; } ;
struct usb_function_instance {int free_func_inst; } ;
struct f_uvc_opts {int streaming_interval; int streaming_maxpacket; struct usb_function_instance func_inst; struct uvc_descriptor_header const* const* ss_control; struct uvc_descriptor_header** uvc_ss_control_cls; struct uvc_descriptor_header const* const* fs_control; struct uvc_descriptor_header** uvc_fs_control_cls; struct uvc_color_matching_descriptor uvc_color_matching; struct uvc_output_terminal_descriptor uvc_output_terminal; struct uvc_processing_unit_descriptor uvc_processing; struct uvc_camera_terminal_descriptor uvc_camera_terminal; int lock; } ;


 int VAR_0 ;
 struct usb_function_instance* FUNC_0 (int) ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct f_uvc_opts*) ;
 struct f_uvc_opts* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int VAR_9 ;
 int FUNC_7 (struct f_uvc_opts*) ;

__attribute__((used)) static struct usb_function_instance *FUNC_8(void)
{
 struct f_uvc_opts *VAR_10;
 struct uvc_camera_terminal_descriptor *VAR_11;
 struct uvc_processing_unit_descriptor *VAR_12;
 struct uvc_output_terminal_descriptor *VAR_13;
 struct uvc_color_matching_descriptor *VAR_14;
 struct uvc_descriptor_header **VAR_15;
 int VAR_16;

 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return FUNC_0(-VAR_0);
 VAR_10->func_inst.free_func_inst = VAR_9;
 FUNC_6(&VAR_10->lock);

 VAR_11 = &VAR_10->uvc_camera_terminal;
 VAR_11->bLength = FUNC_1(3);
 VAR_11->bDescriptorType = VAR_2;
 VAR_11->bDescriptorSubType = VAR_5;
 VAR_11->bTerminalID = 1;
 VAR_11->wTerminalType = FUNC_3(0x0201);
 VAR_11->bAssocTerminal = 0;
 VAR_11->iTerminal = 0;
 VAR_11->wObjectiveFocalLengthMin = FUNC_3(0);
 VAR_11->wObjectiveFocalLengthMax = FUNC_3(0);
 VAR_11->wOcularFocalLength = FUNC_3(0);
 VAR_11->bControlSize = 3;
 VAR_11->bmControls[0] = 2;
 VAR_11->bmControls[1] = 0;
 VAR_11->bmControls[2] = 0;

 VAR_12 = &VAR_10->uvc_processing;
 VAR_12->bLength = FUNC_2(2);
 VAR_12->bDescriptorType = VAR_2;
 VAR_12->bDescriptorSubType = VAR_7;
 VAR_12->bUnitID = 2;
 VAR_12->bSourceID = 1;
 VAR_12->wMaxMultiplier = FUNC_3(16*1024);
 VAR_12->bControlSize = 2;
 VAR_12->bmControls[0] = 1;
 VAR_12->bmControls[1] = 0;
 VAR_12->iProcessing = 0;

 VAR_13 = &VAR_10->uvc_output_terminal;
 VAR_13->bLength = VAR_4;
 VAR_13->bDescriptorType = VAR_2;
 VAR_13->bDescriptorSubType = VAR_6;
 VAR_13->bTerminalID = 3;
 VAR_13->wTerminalType = FUNC_3(0x0101);
 VAR_13->bAssocTerminal = 0;
 VAR_13->bSourceID = 2;
 VAR_13->iTerminal = 0;

 VAR_14 = &VAR_10->uvc_color_matching;
 VAR_14->bLength = VAR_3;
 VAR_14->bDescriptorType = VAR_2;
 VAR_14->bDescriptorSubType = VAR_8;
 VAR_14->bColorPrimaries = 1;
 VAR_14->bTransferCharacteristics = 1;
 VAR_14->bMatrixCoefficients = 4;


 VAR_15 = VAR_10->uvc_fs_control_cls;
 VAR_15[0] = ((void*)0);
 VAR_15[1] = (struct uvc_descriptor_header *)VAR_11;
 VAR_15[2] = (struct uvc_descriptor_header *)VAR_12;
 VAR_15[3] = (struct uvc_descriptor_header *)VAR_13;
 VAR_15[4] = ((void*)0);
 VAR_10->fs_control =
  (const struct uvc_descriptor_header * const *)VAR_15;


 VAR_15 = VAR_10->uvc_ss_control_cls;
 VAR_15[0] = ((void*)0);
 VAR_15[1] = (struct uvc_descriptor_header *)VAR_11;
 VAR_15[2] = (struct uvc_descriptor_header *)VAR_12;
 VAR_15[3] = (struct uvc_descriptor_header *)VAR_13;
 VAR_15[4] = ((void*)0);
 VAR_10->ss_control =
  (const struct uvc_descriptor_header * const *)VAR_15;

 VAR_10->streaming_interval = 1;
 VAR_10->streaming_maxpacket = 1024;

 VAR_16 = FUNC_7(VAR_10);
 if (VAR_16 < 0) {
  FUNC_4(VAR_10);
  return FUNC_0(VAR_16);
 }

 return &VAR_10->func_inst;
}
