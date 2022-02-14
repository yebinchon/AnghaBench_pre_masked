
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbb_charger {int status; int usb_psy; int edev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct smbb_charger*,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct smbb_charger *VAR_5 = VAR_4;

 FUNC_2(VAR_5, VAR_3, VAR_2);
 FUNC_0(VAR_5->edev, VAR_0,
    VAR_5->status & VAR_2);
 FUNC_1(VAR_5->usb_psy);

 return VAR_1;
}
