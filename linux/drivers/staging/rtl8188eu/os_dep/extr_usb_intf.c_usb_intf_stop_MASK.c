
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int bSurpriseRemoved; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*) ;

void FUNC_3(struct adapter *VAR_2)
{
 FUNC_0(VAR_1, VAR_0, ("+usb_intf_stop\n"));


 if (!VAR_2->bSurpriseRemoved) {


  FUNC_0(VAR_1, VAR_0,
    ("SurpriseRemoved == false\n"));
 }


 FUNC_1(VAR_2);


 FUNC_2(VAR_2);



 FUNC_0(VAR_1, VAR_0, ("-usb_intf_stop\n"));
}
