
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct peak_usb_device {int state; int netdev; int udev; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*,char,int) ;
 int FUNC_1 (int ,char*,int,int,int) ;
 int FUNC_2 (int ,unsigned int,int,int,int,int ,void*,int,int) ;
 unsigned int FUNC_3 (int ,int ) ;
 unsigned int FUNC_4 (int ,int ) ;

int FUNC_5(struct peak_usb_device *VAR_5, int VAR_6,
     int VAR_7, void *VAR_8, int VAR_9)
{
 int VAR_10;
 u8 VAR_11;
 unsigned int VAR_12;


 if (!(VAR_5->state & VAR_0))
  return 0;

 VAR_11 = VAR_4 | VAR_3;

 switch (VAR_6) {
 case 128:
  VAR_12 = FUNC_4(VAR_5->udev, 0);
  break;

 default:
  VAR_12 = FUNC_3(VAR_5->udev, 0);
  VAR_11 |= VAR_2;
  FUNC_0(VAR_8, '\0', VAR_9);
  break;
 }

 VAR_10 = FUNC_2(VAR_5->udev, VAR_12, VAR_6, VAR_11, VAR_7, 0,
         VAR_8, VAR_9, 2 * VAR_1);
 if (VAR_10 < 0) {
  FUNC_1(VAR_5->netdev,
       "unable to request usb[type=%d value=%d] err=%d\n",
       VAR_6, VAR_7, VAR_10);
  return VAR_10;
 }

 return 0;
}
