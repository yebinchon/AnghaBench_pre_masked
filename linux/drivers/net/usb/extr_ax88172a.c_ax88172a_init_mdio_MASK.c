
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usbnet {int net; TYPE_2__* udev; struct ax88172a_private* driver_priv; } ;
struct ax88172a_private {TYPE_3__* mdio; } ;
struct TYPE_8__ {char* name; int id; int * write; int * read; void* priv; } ;
struct TYPE_7__ {int devnum; TYPE_1__* bus; } ;
struct TYPE_6__ {int busnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ,int ,char*,int,int) ;

__attribute__((used)) static int FUNC_6(struct usbnet *VAR_4)
{
 struct ax88172a_private *VAR_5 = VAR_4->driver_priv;
 int VAR_6;

 VAR_5->mdio = FUNC_0();
 if (!VAR_5->mdio) {
  FUNC_3(VAR_4->net, "Could not allocate MDIO bus\n");
  return -VAR_0;
 }

 VAR_5->mdio->priv = (void *)VAR_4;
 VAR_5->mdio->read = &VAR_2;
 VAR_5->mdio->write = &VAR_3;
 VAR_5->mdio->name = "Asix MDIO Bus";

 FUNC_5(VAR_5->mdio->id, VAR_1, "usb-%03d:%03d",
   VAR_4->udev->bus->busnum, VAR_4->udev->devnum);

 VAR_6 = FUNC_2(VAR_5->mdio);
 if (VAR_6) {
  FUNC_3(VAR_4->net, "Could not register MDIO bus\n");
  goto mfree;
 }

 FUNC_4(VAR_4->net, "registered mdio bus %s\n", VAR_5->mdio->id);
 return 0;

mfree:
 FUNC_1(VAR_5->mdio);
 return VAR_6;
}
