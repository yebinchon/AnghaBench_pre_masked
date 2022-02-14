
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usb_serial_port {int dev; TYPE_1__* serial; } ;
typedef int __u16 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*) ;
 unsigned long FUNC_4 (int ) ;
 int* FUNC_5 (int,int ) ;
 int FUNC_6 (int ,int ,int ,int,int ,int ,int*,int,int) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct usb_serial_port *VAR_7,
       unsigned long *VAR_8)
{
 int VAR_9;
 u8 *VAR_10;
 __u16 VAR_11;

 VAR_10 = FUNC_5(VAR_4, VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10[0] = 0xff;
 VAR_10[1] = 0xff;
 VAR_9 = FUNC_6(VAR_7->serial->dev,
        FUNC_7(VAR_7->serial->dev, 0),
        VAR_3,
        VAR_6 | VAR_5,
        0,
        0,
        VAR_10, VAR_4,
        10000
        );
 if (VAR_9 != VAR_4) {
  FUNC_1(&VAR_7->dev, "reading line status failed: %d\n", VAR_9);
  if (VAR_9 >= 0)
   VAR_9 = -VAR_0;
 } else {
  VAR_11 = FUNC_2(VAR_10);

  FUNC_0(&VAR_7->dev, "read status %02x %02x\n",
   VAR_10[0], VAR_10[1]);

  *VAR_8 = FUNC_4(VAR_11);
 }

 FUNC_3(VAR_10);
 return VAR_9;
}
