
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct adapter {int dummy; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,int,char*,int,...) ;
 int FUNC_2 (struct adapter*,int) ;
 int FUNC_3 (struct adapter*,int) ;
 int FUNC_4 (struct adapter*,int) ;

int FUNC_5(char *VAR_2, char **VAR_3,
     off_t VAR_4, int VAR_5,
     int *VAR_6, void *VAR_7)
{
 struct net_device *VAR_8 = VAR_7;
 struct adapter *VAR_9 = (struct adapter *)FUNC_0(VAR_8);

 int VAR_10 = 0;

 if (VAR_0 == 0xeeeeeeee) {
  *VAR_6 = 1;
  return VAR_10;
 }

 switch (VAR_1) {
 case 1:
  VAR_10 += FUNC_1(VAR_2 + VAR_10, VAR_5 - VAR_10, "usb_read8(0x%x)=0x%x\n", VAR_0, FUNC_4(VAR_9, VAR_0));
  break;
 case 2:
  VAR_10 += FUNC_1(VAR_2 + VAR_10, VAR_5 - VAR_10, "usb_read16(0x%x)=0x%x\n", VAR_0, FUNC_2(VAR_9, VAR_0));
  break;
 case 4:
  VAR_10 += FUNC_1(VAR_2 + VAR_10, VAR_5 - VAR_10, "usb_read32(0x%x)=0x%x\n", VAR_0, FUNC_3(VAR_9, VAR_0));
  break;
 default:
  VAR_10 += FUNC_1(VAR_2 + VAR_10, VAR_5 - VAR_10, "error read length=%d\n", VAR_1);
  break;
 }

 *VAR_6 = 1;
 return VAR_10;
}
