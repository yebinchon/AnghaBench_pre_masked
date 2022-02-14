
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct renesas_usb3 {int workaround_for_vbus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct renesas_usb3*,int ) ;
 int FUNC_1 (struct renesas_usb3*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct renesas_usb3 *VAR_2)
{
 FUNC_1(VAR_2, ~0, VAR_0);
 if (!VAR_2->workaround_for_vbus)
  FUNC_0(VAR_2, VAR_1);
}
