
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sisusb_usb_data {void* font_backup; scalar_t__ scrbuf; scalar_t__ haveconsole; scalar_t__* havethisconsole; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int,int,int ) ;
 int VAR_1 ;
 int FUNC_3 (void*) ;

void
FUNC_4(struct sisusb_usb_data *VAR_2)
{
 int VAR_3;
 if (VAR_2->haveconsole) {
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
   if (VAR_2->havethisconsole[VAR_3]) {
    FUNC_0();
    FUNC_2(&VAR_1, VAR_3, VAR_3, 0);
    FUNC_1();



   }
  VAR_2->haveconsole = 0;
 }

 FUNC_3((void *)VAR_2->scrbuf);
 VAR_2->scrbuf = 0;

 FUNC_3(VAR_2->font_backup);
 VAR_2->font_backup = ((void*)0);
}
