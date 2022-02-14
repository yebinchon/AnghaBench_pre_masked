
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wusbhc {int ports_max; TYPE_1__* wuie_host_info; int keep_alive_timer; int mutex; TYPE_2__* port; } ;
struct TYPE_4__ {scalar_t__ wusb_dev; } ;
struct TYPE_3__ {int hdr; } ;


 int FUNC_0 (struct wusbhc*,TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct wusbhc*,int *) ;

void FUNC_6(struct wusbhc *VAR_0)
{
 int VAR_1;

 FUNC_3(&VAR_0->mutex);
 for (VAR_1 = 0; VAR_1 < VAR_0->ports_max; VAR_1++) {
  if (VAR_0->port[VAR_1].wusb_dev)
   FUNC_0(VAR_0, &VAR_0->port[VAR_1]);
 }
 FUNC_4(&VAR_0->mutex);

 FUNC_1(&VAR_0->keep_alive_timer);
 FUNC_5(VAR_0, &VAR_0->wuie_host_info->hdr);
 FUNC_2(VAR_0->wuie_host_info);
 VAR_0->wuie_host_info = ((void*)0);
}
