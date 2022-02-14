
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wusbhc {int gtk_tkid; } ;
struct wusb_dev {int addr; int port_idx; } ;
struct TYPE_2__ {int ptk_tkid; } ;


 TYPE_1__* FUNC_0 (struct wusbhc*,int ) ;

__attribute__((used)) static u32 FUNC_1(struct wusbhc *VAR_0, struct wusb_dev *VAR_1)
{
 u32 *VAR_2;
 u32 VAR_3;

 if (VAR_1 == ((void*)0)) {
  VAR_2 = &VAR_0->gtk_tkid;
  VAR_3 = 0;
 } else {
  VAR_2 = &FUNC_0(VAR_0, VAR_1->port_idx)->ptk_tkid;
  VAR_3 = VAR_1->addr & 0x7f;
 }

 *VAR_2 = (VAR_3 << 8) | ((*VAR_2 + 1) & 0xff);

 return *VAR_2;
}
