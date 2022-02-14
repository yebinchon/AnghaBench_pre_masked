
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct renesas_usb3 {int disabled_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct renesas_usb3*,int ,int ) ;
 int FUNC_1 (struct renesas_usb3*,int) ;

__attribute__((used)) static void FUNC_2(struct renesas_usb3 *VAR_3)
{
 VAR_3->disabled_count++;
 FUNC_0(VAR_3, VAR_1, VAR_0);
 FUNC_0(VAR_3, VAR_2, VAR_0);
 FUNC_1(VAR_3, 1);
}
