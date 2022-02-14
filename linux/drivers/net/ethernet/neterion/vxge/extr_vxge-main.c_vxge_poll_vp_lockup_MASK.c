
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vxgedev {int no_of_vpath; int vp_lockup_timer; struct vxge_vpath* vpaths; int vp_reset; } ;
struct TYPE_3__ {int txq; } ;
struct TYPE_4__ {unsigned long prev_rx_frms; int rx_frms; } ;
struct vxge_ring {int last_status; TYPE_2__ stats; int handle; } ;
struct vxge_vpath {TYPE_1__ fifo; struct vxge_ring ring; } ;
struct timer_list {int dummy; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct vxgedev* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int *) ;
 struct vxgedev* VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct vxgedev*,int) ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_6)
{
 struct vxgedev *VAR_7 = FUNC_1(VAR_7, VAR_6, VAR_5);
 enum vxge_hw_status VAR_8 = VAR_2;
 struct vxge_vpath *VAR_9;
 struct vxge_ring *VAR_10;
 int VAR_11;
 unsigned long VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_7->no_of_vpath; VAR_11++) {
  VAR_10 = &VAR_7->vpaths[VAR_11].ring;


  VAR_12 = FUNC_0(VAR_10->stats.rx_frms);


  if (VAR_10->stats.prev_rx_frms == VAR_12) {
   VAR_8 = FUNC_5(VAR_10->handle);


   if ((VAR_1 == VAR_8) &&
    (VAR_1 == VAR_10->last_status)) {


    if (!FUNC_4(VAR_11, &VAR_7->vp_reset)) {
     VAR_9 = &VAR_7->vpaths[VAR_11];


     FUNC_6(VAR_7, VAR_11);


     FUNC_3(VAR_9->fifo.txq);
     continue;
    }
   }
  }
  VAR_10->stats.prev_rx_frms = VAR_12;
  VAR_10->last_status = VAR_8;
 }


 FUNC_2(&VAR_7->vp_lockup_timer, VAR_3 + VAR_0 / 1000);
}
