
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {int cack_count; } ;
struct wusb_dev {int cack_node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct wusbhc*) ;

__attribute__((used)) static void FUNC_2(struct wusbhc *VAR_0, struct wusb_dev *VAR_1)
{
 FUNC_0(&VAR_1->cack_node);
 VAR_0->cack_count--;
 FUNC_1(VAR_0);
}
