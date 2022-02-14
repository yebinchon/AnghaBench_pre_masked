
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fman_mac {scalar_t__ max_speed; scalar_t__ addr; int event_cb; int exception_cb; TYPE_1__* dtsec_drv_param; } ;
struct TYPE_2__ {scalar_t__ rx_prepend; scalar_t__ non_back_to_back_ipg1; scalar_t__ non_back_to_back_ipg2; scalar_t__ back_to_back_ipg; scalar_t__ halfdup_retransmit; scalar_t__ halfdup_coll_window; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static int FUNC_1(struct fman_mac *VAR_6)
{
 if (VAR_6->max_speed >= VAR_5) {
  FUNC_0("1G MAC driver supports 1G or lower speeds\n");
  return -VAR_0;
 }
 if (VAR_6->addr == 0) {
  FUNC_0("Ethernet MAC Must have a valid MAC Address\n");
  return -VAR_0;
 }
 if ((VAR_6->dtsec_drv_param)->rx_prepend >
     VAR_3) {
  FUNC_0("packetAlignmentPadding can't be > than %d\n",
         VAR_3);
  return -VAR_0;
 }
 if (((VAR_6->dtsec_drv_param)->non_back_to_back_ipg1 >
      VAR_2) ||
     ((VAR_6->dtsec_drv_param)->non_back_to_back_ipg2 >
      VAR_2) ||
      ((VAR_6->dtsec_drv_param)->back_to_back_ipg >
       VAR_2)) {
  FUNC_0("Inter packet gap can't be greater than %d\n",
         VAR_2);
  return -VAR_0;
 }
 if ((VAR_6->dtsec_drv_param)->halfdup_retransmit >
     VAR_4) {
  FUNC_0("maxRetransmission can't be greater than %d\n",
         VAR_4);
  return -VAR_0;
 }
 if ((VAR_6->dtsec_drv_param)->halfdup_coll_window >
     VAR_1) {
  FUNC_0("collisionWindow can't be greater than %d\n",
         VAR_1);
  return -VAR_0;



 }
 if (!VAR_6->exception_cb) {
  FUNC_0("uninitialized exception_cb\n");
  return -VAR_0;
 }
 if (!VAR_6->event_cb) {
  FUNC_0("uninitialized event_cb\n");
  return -VAR_0;
 }

 return 0;
}
