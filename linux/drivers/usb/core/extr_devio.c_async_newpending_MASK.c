
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_dev_state {int lock; int async_pending; } ;
struct async {int asynclist; struct usb_dev_state* ps; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct async *VAR_0)
{
 struct usb_dev_state *VAR_1 = VAR_0->ps;
 unsigned long VAR_2;

 FUNC_1(&VAR_1->lock, VAR_2);
 FUNC_0(&VAR_0->asynclist, &VAR_1->async_pending);
 FUNC_2(&VAR_1->lock, VAR_2);
}
