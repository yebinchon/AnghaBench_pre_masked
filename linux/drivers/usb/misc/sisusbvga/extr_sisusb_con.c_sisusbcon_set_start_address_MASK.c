
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_visible_origin; } ;
struct sisusb_usb_data {int cur_start_addr; int scrbuf; } ;


 int VAR_0 ;
 int FUNC_0 (struct sisusb_usb_data*,int ,int,int) ;

__attribute__((used)) static inline void
FUNC_1(struct sisusb_usb_data *VAR_1, struct vc_data *VAR_2)
{
 VAR_1->cur_start_addr = (VAR_2->vc_visible_origin - VAR_1->scrbuf) / 2;

 FUNC_0(VAR_1, VAR_0, 0x0c, (VAR_1->cur_start_addr >> 8));
 FUNC_0(VAR_1, VAR_0, 0x0d, (VAR_1->cur_start_addr & 0xff));
}
