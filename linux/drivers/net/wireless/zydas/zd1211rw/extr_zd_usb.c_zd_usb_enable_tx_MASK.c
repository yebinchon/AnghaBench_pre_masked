
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_usb_tx {int lock; scalar_t__ stopped; scalar_t__ submitted_urbs; int enabled; } ;
struct zd_usb {struct zd_usb_tx tx; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct zd_usb*) ;

void FUNC_5(struct zd_usb *VAR_0)
{
 unsigned long VAR_1;
 struct zd_usb_tx *VAR_2 = &VAR_0->tx;

 FUNC_2(&VAR_2->lock, VAR_1);
 FUNC_0(&VAR_2->enabled, 1);
 VAR_2->submitted_urbs = 0;
 FUNC_1(FUNC_4(VAR_0));
 VAR_2->stopped = 0;
 FUNC_3(&VAR_2->lock, VAR_1);
}
