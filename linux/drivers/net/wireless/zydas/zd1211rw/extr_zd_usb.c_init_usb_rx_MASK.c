
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long data; int func; } ;
struct zd_usb_rx {int usb_packet_size; scalar_t__ fragment_length; TYPE_1__ reset_timer_tasklet; int idle_work; int setup_mutex; int lock; } ;
struct zd_usb {int intf; struct zd_usb_rx rx; } ;
struct TYPE_4__ {scalar_t__ speed; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_5(struct zd_usb *VAR_3)
{
 struct zd_usb_rx *VAR_4 = &VAR_3->rx;

 FUNC_4(&VAR_4->lock);
 FUNC_3(&VAR_4->setup_mutex);
 if (FUNC_2(VAR_3->intf)->speed == VAR_0) {
  VAR_4->usb_packet_size = 512;
 } else {
  VAR_4->usb_packet_size = 64;
 }
 FUNC_1(VAR_4->fragment_length == 0);
 FUNC_0(&VAR_4->idle_work, VAR_1);
 VAR_4->reset_timer_tasklet.func = VAR_2;
 VAR_4->reset_timer_tasklet.data = (unsigned long)VAR_3;
}
