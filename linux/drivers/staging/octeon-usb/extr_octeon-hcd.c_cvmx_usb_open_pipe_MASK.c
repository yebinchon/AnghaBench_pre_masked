
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_hcd {int frame_number; int idle_pipes; } ;
struct cvmx_usb_pipe {int device_addr; int endpoint_num; int device_speed; int max_packet; int transfer_type; int transfer_dir; int interval; int next_tx_frame; int multi_count; int hub_device_addr; int hub_port; int split_sc_frame; int node; scalar_t__ pid_toggle; int transactions; int flags; } ;
typedef enum cvmx_usb_transfer { ____Placeholder_cvmx_usb_transfer } cvmx_usb_transfer ;
typedef enum cvmx_usb_speed { ____Placeholder_cvmx_usb_speed } cvmx_usb_speed ;
typedef enum cvmx_usb_direction { ____Placeholder_cvmx_usb_direction } cvmx_usb_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct octeon_hcd*,struct cvmx_usb_pipe*) ;
 struct cvmx_usb_pipe* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static struct cvmx_usb_pipe *FUNC_4(struct octeon_hcd *VAR_5,
      int VAR_6,
      int VAR_7,
      enum cvmx_usb_speed
       VAR_8,
      int VAR_9,
      enum cvmx_usb_transfer
       VAR_10,
      enum cvmx_usb_direction
       VAR_11,
      int VAR_12, int VAR_13,
      int VAR_14,
      int VAR_15)
{
 struct cvmx_usb_pipe *VAR_16;

 VAR_16 = FUNC_2(sizeof(*VAR_16), VAR_4);
 if (!VAR_16)
  return ((void*)0);
 if ((VAR_8 == VAR_2) &&
     (VAR_11 == VAR_0) &&
     (VAR_10 == VAR_3))
  VAR_16->flags |= VAR_1;
 VAR_16->device_addr = VAR_6;
 VAR_16->endpoint_num = VAR_7;
 VAR_16->device_speed = VAR_8;
 VAR_16->max_packet = VAR_9;
 VAR_16->transfer_type = VAR_10;
 VAR_16->transfer_dir = VAR_11;
 FUNC_0(&VAR_16->transactions);





 if (!VAR_12)
  VAR_12 = 1;
 if (FUNC_1(VAR_5, VAR_16)) {
  VAR_16->interval = VAR_12 * 8;

  VAR_16->next_tx_frame = ((VAR_5->frame_number + 7) & ~7) +
     VAR_16->interval;
 } else {
  VAR_16->interval = VAR_12;
  VAR_16->next_tx_frame = VAR_5->frame_number + VAR_16->interval;
 }
 VAR_16->multi_count = VAR_13;
 VAR_16->hub_device_addr = VAR_14;
 VAR_16->hub_port = VAR_15;
 VAR_16->pid_toggle = 0;
 VAR_16->split_sc_frame = -1;
 FUNC_3(&VAR_16->node, &VAR_5->idle_pipes);






 return VAR_16;
}
