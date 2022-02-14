
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_2__ {struct list_head* next; } ;
struct wil6210_priv {int wmi_ev_lock; TYPE_1__ pending_wmi_ev; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static struct list_head *FUNC_4(struct wil6210_priv *VAR_0)
{
 ulong VAR_1;
 struct list_head *VAR_2 = ((void*)0);

 FUNC_2(&VAR_0->wmi_ev_lock, VAR_1);

 if (!FUNC_1(&VAR_0->pending_wmi_ev)) {
  VAR_2 = VAR_0->pending_wmi_ev.next;
  FUNC_0(VAR_2);
 }

 FUNC_3(&VAR_0->wmi_ev_lock, VAR_1);

 return VAR_2;
}
