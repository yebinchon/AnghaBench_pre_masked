
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_usb_tx {scalar_t__ submitted_urbs; int lock; int submitted_skbs; int submitted; int enabled; } ;
struct zd_usb {struct zd_usb_tx tx; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct zd_usb *VAR_0)
{
 struct zd_usb_tx *VAR_1 = &VAR_0->tx;
 unsigned long VAR_2;

 FUNC_1(&VAR_1->enabled, 0);


 FUNC_5(&VAR_1->submitted);

 FUNC_3(&VAR_1->lock, VAR_2);
 FUNC_0(!FUNC_2(&VAR_1->submitted_skbs));
 FUNC_0(VAR_1->submitted_urbs != 0);
 VAR_1->submitted_urbs = 0;
 FUNC_4(&VAR_1->lock, VAR_2);




}
