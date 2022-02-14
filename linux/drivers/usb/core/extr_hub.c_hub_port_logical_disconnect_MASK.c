
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hub {int change_bits; TYPE_1__** ports; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct usb_hub*,int,int) ;
 int FUNC_2 (struct usb_hub*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct usb_hub *VAR_0, int VAR_1)
{
 FUNC_0(&VAR_0->ports[VAR_1 - 1]->dev, "logical disconnect\n");
 FUNC_1(VAR_0, VAR_1, 1);
 FUNC_3(VAR_1, VAR_0->change_bits);
 FUNC_2(VAR_0);
}
