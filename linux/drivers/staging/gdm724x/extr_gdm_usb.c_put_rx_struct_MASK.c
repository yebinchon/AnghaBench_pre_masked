
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_rx {int free_list; } ;
struct rx_cxt {int rx_lock; int avail_count; int free_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct rx_cxt *VAR_0, struct usb_rx *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->rx_lock, VAR_2);

 FUNC_0(&VAR_1->free_list, &VAR_0->free_list);
 VAR_0->avail_count++;

 FUNC_2(&VAR_0->rx_lock, VAR_2);
}
