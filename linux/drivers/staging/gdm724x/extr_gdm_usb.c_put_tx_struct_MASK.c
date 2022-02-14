
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_tx_sdu {int list; } ;
struct tx_cxt {int avail_count; int free_list; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct tx_cxt *VAR_0, struct usb_tx_sdu *VAR_1)
{
 FUNC_0(&VAR_1->list, &VAR_0->free_list);
 VAR_0->avail_count++;
}
