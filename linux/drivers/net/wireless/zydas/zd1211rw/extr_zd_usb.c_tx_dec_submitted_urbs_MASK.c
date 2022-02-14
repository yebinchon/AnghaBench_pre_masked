
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_usb_tx {scalar_t__ submitted_urbs; int lock; scalar_t__ stopped; } ;
struct zd_usb {struct zd_usb_tx tx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct zd_usb*) ;

__attribute__((used)) static void FUNC_4(struct zd_usb *VAR_1)
{
 struct zd_usb_tx *VAR_2 = &VAR_1->tx;
 unsigned long VAR_3;

 FUNC_1(&VAR_2->lock, VAR_3);
 --VAR_2->submitted_urbs;
 if (VAR_2->stopped && VAR_2->submitted_urbs <= VAR_0) {
  FUNC_0(FUNC_3(VAR_1));
  VAR_2->stopped = 0;
 }
 FUNC_2(&VAR_2->lock, VAR_3);
}
