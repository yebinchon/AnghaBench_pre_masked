
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct usb_serial {TYPE_2__* dev; } ;
struct edgeport_serial {scalar_t__ fw_version; int use_heartbeat; struct usb_serial* serial; int heartbeat_work; int es_lock; } ;
struct TYPE_3__ {int idProduct; } ;
struct TYPE_4__ {TYPE_1__ descriptor; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct edgeport_serial*) ;
 int FUNC_2 (struct edgeport_serial*) ;
 int VAR_5 ;
 int FUNC_3 (struct edgeport_serial*) ;
 struct edgeport_serial* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct usb_serial*,struct edgeport_serial*) ;

__attribute__((used)) static int FUNC_8(struct usb_serial *VAR_6)
{
 struct edgeport_serial *VAR_7;
 int VAR_8;
 u16 VAR_9;


 VAR_7 = FUNC_4(sizeof(struct edgeport_serial), VAR_2);
 if (!VAR_7)
  return -VAR_0;

 FUNC_6(&VAR_7->es_lock);
 VAR_7->serial = VAR_6;
 FUNC_0(&VAR_7->heartbeat_work, VAR_5);
 FUNC_7(VAR_6, VAR_7);

 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8 < 0) {
  FUNC_3(VAR_7);
  return VAR_8;
 }

 if (VAR_8 > 0)
  return 1;

 VAR_9 = FUNC_5(
   VAR_7->serial->dev->descriptor.idProduct);


 if (VAR_7->fw_version > VAR_1) {
  if (VAR_9 == VAR_3 ||
   VAR_9 == VAR_4) {
   VAR_7->use_heartbeat = 1;
  }
 }

 FUNC_2(VAR_7);

 return 0;
}
