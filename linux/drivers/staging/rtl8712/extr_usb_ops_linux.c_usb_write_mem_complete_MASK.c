
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int status; scalar_t__ context; } ;
struct intf_hdl {scalar_t__ adapter; struct intf_priv* pintfpriv; } ;
struct io_queue {struct intf_hdl intf; } ;
struct intf_priv {int io_retevt_comp; } ;
struct _adapter {int driver_stopped; int surprise_removed; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct urb *VAR_1)
{
 struct io_queue *VAR_2 = (struct io_queue *)VAR_1->context;
 struct intf_hdl *VAR_3 = &(VAR_2->intf);
 struct intf_priv *VAR_4 = VAR_3->pintfpriv;
 struct _adapter *VAR_5 = (struct _adapter *)VAR_3->adapter;

 if (VAR_1->status != 0) {
  if (VAR_1->status == (-VAR_0))
   VAR_5->driver_stopped = 1;
  else
   VAR_5->surprise_removed = 1;
 }
 FUNC_0(&VAR_4->io_retevt_comp);
}
