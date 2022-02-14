
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbatm_vcc_data {int * sarb; int list; } ;
struct TYPE_4__ {int tasklet; } ;
struct usbatm_data {int serialize; TYPE_2__ rx_channel; void* cached_vci; void* cached_vpi; struct usbatm_vcc_data* cached_vcc; } ;
struct atm_vcc {int flags; void* vci; void* vpi; struct usbatm_vcc_data* dev_data; TYPE_1__* dev; } ;
struct TYPE_3__ {struct usbatm_data* dev_data; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct usbatm_vcc_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct usbatm_data*,struct atm_vcc*) ;

__attribute__((used)) static void FUNC_9(struct atm_vcc *VAR_5)
{
 struct usbatm_data *VAR_6 = VAR_5->dev->dev_data;
 struct usbatm_vcc_data *VAR_7 = VAR_5->dev_data;

 if (!VAR_6 || !VAR_7)
  return;

 FUNC_8(VAR_6, VAR_5);

 FUNC_4(&VAR_6->serialize);

 FUNC_6(&VAR_6->rx_channel.tasklet);
 if (VAR_6->cached_vcc == VAR_7) {
  VAR_6->cached_vcc = ((void*)0);
  VAR_6->cached_vpi = VAR_4;
  VAR_6->cached_vci = VAR_0;
 }
 FUNC_3(&VAR_7->list);
 FUNC_7(&VAR_6->rx_channel.tasklet);

 FUNC_2(VAR_7->sarb);
 VAR_7->sarb = ((void*)0);

 FUNC_1(VAR_7);
 VAR_5->dev_data = ((void*)0);

 VAR_5->vpi = VAR_4;
 VAR_5->vci = VAR_0;
 FUNC_0(VAR_3, &VAR_5->flags);
 FUNC_0(VAR_2, &VAR_5->flags);
 FUNC_0(VAR_1, &VAR_5->flags);

 FUNC_5(&VAR_6->serialize);
}
