
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct usbnet {int net; TYPE_2__* udev; } ;
struct TYPE_4__ {int devpath; TYPE_1__* bus; } ;
struct TYPE_3__ {int bus_name; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct usbnet*,int) ;
 int FUNC_3 (struct usbnet*,int) ;
 int FUNC_4 (struct usbnet*,int ,int*) ;
 int FUNC_5 (struct usbnet*,int ,int) ;
 int FUNC_6 (int ,char*,int,...) ;
 int FUNC_7 (struct usbnet*,int ,int ,char*,char,char*) ;

__attribute__((used)) static int FUNC_8(struct usbnet *VAR_9)
{
 u16 VAR_10, VAR_11, VAR_12;
 u16 VAR_13;
 int VAR_14;



 if ((VAR_14 = FUNC_4(VAR_9, VAR_1, &VAR_13)) < 0) {
  FUNC_6(VAR_9->net, "can't read %s-%s status: %d\n",
      VAR_9->udev->bus->bus_name, VAR_9->udev->devpath, VAR_14);
  goto done;
 }
 VAR_11 = VAR_13;
 FUNC_2(VAR_9, VAR_11);

 if ((VAR_14 = FUNC_4(VAR_9, VAR_3, &VAR_13)) < 0) {
  FUNC_6(VAR_9->net, "can't read USBCTL, %d\n", VAR_14);
  goto done;
 }
 VAR_10 = VAR_13;
 FUNC_3(VAR_9, VAR_10);

 FUNC_5(VAR_9, VAR_3,
   VAR_7 | VAR_6);

 if ((VAR_14 = FUNC_4(VAR_9, VAR_2, &VAR_13)) < 0) {
  FUNC_6(VAR_9->net, "can't read TTL, %d\n", VAR_14);
  goto done;
 }
 VAR_12 = VAR_13;

 FUNC_5(VAR_9, VAR_2,
   FUNC_0(VAR_0, FUNC_1(VAR_12)) );
 FUNC_6(VAR_9->net, "assigned TTL, %d ms\n", VAR_0);

 FUNC_7(VAR_9, VAR_8, VAR_9->net, "port %c, peer %sconnected\n",
     (VAR_11 & VAR_5) ? 'A' : 'B',
     (VAR_11 & VAR_4) ? "" : "dis");
 VAR_14 = 0;

done:
 return VAR_14;
}
