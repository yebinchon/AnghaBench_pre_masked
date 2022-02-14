
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int data; scalar_t__ (* notify_link_chg ) (struct cgx_link_event*,int ) ;} ;
struct cgx_link_user_info {int speed; scalar_t__ link_up; } ;
struct lmac {int event_cb_lock; TYPE_2__ event_cb; int lmac_id; struct cgx_link_user_info link_info; struct cgx* cgx; } ;
struct device {int dummy; } ;
struct cgx_link_event {struct cgx_link_user_info link_uinfo; int lmac_id; int cgx_id; } ;
struct cgx {int cgx_id; TYPE_1__* pdev; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*,int ,int ) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*,int ,int ,char*,int ) ;
 int FUNC_4 (int ,struct cgx_link_user_info*,struct cgx*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct cgx_link_event*,int ) ;

__attribute__((used)) static inline void FUNC_8(u64 VAR_2,
        struct lmac *VAR_3)
{
 struct cgx_link_user_info *VAR_4;
 struct cgx *VAR_5 = VAR_3->cgx;
 struct cgx_link_event VAR_6;
 struct device *VAR_7;
 int VAR_8;

 VAR_7 = &VAR_5->pdev->dev;

 FUNC_4(VAR_2, &VAR_6.link_uinfo, VAR_5, VAR_3->lmac_id);
 VAR_8 = FUNC_0(VAR_1, VAR_2);

 VAR_6.cgx_id = VAR_5->cgx_id;
 VAR_6.lmac_id = VAR_3->lmac_id;


 VAR_3->link_info = VAR_6.link_uinfo;
 VAR_4 = &VAR_3->link_info;


 FUNC_5(&VAR_3->event_cb_lock);

 if (!VAR_3->event_cb.notify_link_chg) {
  FUNC_1(VAR_7, "cgx port %d:%d Link change handler null",
   VAR_5->cgx_id, VAR_3->lmac_id);
  if (VAR_8 != VAR_0) {
   FUNC_2(VAR_7, "cgx port %d:%d Link error %d\n",
    VAR_5->cgx_id, VAR_3->lmac_id, VAR_8);
  }
  FUNC_3(VAR_7, "cgx port %d:%d Link is %s %d Mbps\n",
    VAR_5->cgx_id, VAR_3->lmac_id,
    VAR_4->link_up ? "UP" : "DOWN", VAR_4->speed);
  goto err;
 }

 if (VAR_3->event_cb.notify_link_chg(&VAR_6, VAR_3->event_cb.data))
  FUNC_2(VAR_7, "event notification failure\n");
err:
 FUNC_6(&VAR_3->event_cb_lock);
}
