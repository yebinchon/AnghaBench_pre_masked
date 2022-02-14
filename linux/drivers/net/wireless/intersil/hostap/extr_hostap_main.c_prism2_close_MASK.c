
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int flags; int name; } ;
struct hostap_interface {TYPE_2__* local; } ;
struct TYPE_6__ {scalar_t__ iw_mode; int num_dev_open; struct net_device* dev; scalar_t__ master_dev_auto_open; int hw_module; int comms_qual_update; int info_queue; int set_tim_queue; int set_multicast_list_queue; int reset_queue; TYPE_1__* func; scalar_t__ ap; scalar_t__ hw_ready; int hostapd; struct net_device* ddev; } ;
typedef TYPE_2__ local_info_t ;
struct TYPE_5__ {int (* hw_shutdown ) (struct net_device*,int ) ;scalar_t__ (* card_present ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,scalar_t__,int) ;
 int FUNC_4 (int ) ;
 struct hostap_interface* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_5)
{
 struct hostap_interface *VAR_6;
 local_info_t *VAR_7;

 FUNC_0(VAR_0, "%s: prism2_close\n", VAR_5->name);

 VAR_6 = FUNC_5(VAR_5);
 VAR_7 = VAR_6->local;

 if (VAR_5 == VAR_7->ddev) {
  FUNC_9(VAR_7, VAR_4);
 }

 if (!VAR_7->hostapd && VAR_5 == VAR_7->dev &&
     (!VAR_7->func->card_present || VAR_7->func->card_present(VAR_7)) &&
     VAR_7->hw_ready && VAR_7->ap && VAR_7->iw_mode == VAR_3)
  FUNC_3(VAR_5, VAR_7->ap, 1);


 if (VAR_5 == VAR_7->dev) {
  VAR_7->func->hw_shutdown(VAR_5, VAR_1);
 }

 if (FUNC_7(VAR_5)) {
  FUNC_8(VAR_5);
  FUNC_6(VAR_5);
 }

 FUNC_1(&VAR_7->reset_queue);
 FUNC_1(&VAR_7->set_multicast_list_queue);
 FUNC_1(&VAR_7->set_tim_queue);

 FUNC_1(&VAR_7->info_queue);

 FUNC_1(&VAR_7->comms_qual_update);

 FUNC_4(VAR_7->hw_module);

 VAR_7->num_dev_open--;

 if (VAR_5 != VAR_7->dev && VAR_7->dev->flags & VAR_2 &&
     VAR_7->master_dev_auto_open && VAR_7->num_dev_open == 1) {



  FUNC_2(VAR_7->dev);
 }

 return 0;
}
