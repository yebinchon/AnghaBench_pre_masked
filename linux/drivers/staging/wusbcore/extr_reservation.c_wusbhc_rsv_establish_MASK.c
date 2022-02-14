
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wusbhc {struct uwb_rsv* rsv; scalar_t__ cluster_id; struct uwb_rc* uwb_rc; } ;
struct uwb_dev_addr {scalar_t__* data; } ;
struct TYPE_2__ {struct uwb_dev_addr devaddr; int type; } ;
struct uwb_rsv {int max_mas; int min_mas; int max_interval; int is_multicast; int type; TYPE_1__ target; } ;
struct uwb_rc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct uwb_rsv* FUNC_0 (struct uwb_rc*,int ,struct wusbhc*) ;
 int FUNC_1 (struct uwb_rsv*) ;
 int FUNC_2 (struct uwb_rsv*) ;
 int VAR_4 ;

int FUNC_3(struct wusbhc *VAR_5)
{
 struct uwb_rc *VAR_6 = VAR_5->uwb_rc;
 struct uwb_rsv *VAR_7;
 struct uwb_dev_addr VAR_8;
 int VAR_9;

 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_6, VAR_4, VAR_5);
 if (VAR_7 == ((void*)0))
  return -VAR_1;

 VAR_8.data[0] = VAR_5->cluster_id;
 VAR_8.data[1] = 0;

 VAR_7->target.type = VAR_3;
 VAR_7->target.devaddr = VAR_8;
 VAR_7->type = VAR_2;
 VAR_7->max_mas = 256;
 VAR_7->min_mas = 15;
 VAR_7->max_interval = 1;
 VAR_7->is_multicast = 1;

 VAR_9 = FUNC_2(VAR_7);
 if (VAR_9 == 0)
  VAR_5->rsv = VAR_7;
 else
  FUNC_1(VAR_7);
 return VAR_9;
}
