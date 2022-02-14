
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy {int chg_work; int chg_state; int chg_type; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct usb_phy*) ;

__attribute__((used)) static void FUNC_2(struct usb_phy *VAR_3)
{
 VAR_3->chg_type = VAR_0;
 VAR_3->chg_state = VAR_1;
 FUNC_1(VAR_3);
 FUNC_0(&VAR_3->chg_work, VAR_2);
}
