
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct usb_port {int dev; } ;
struct usb_hub {int hdev; struct usb_port** ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int *,char*,int,int,unsigned int) ;
 int FUNC_1 (struct usb_hub*,int,unsigned int*,unsigned int*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int,int ) ;

int FUNC_4(struct usb_hub *VAR_7, int VAR_8, bool VAR_9)
{
 int VAR_10;
 u16 VAR_11, VAR_12;
 unsigned VAR_13 = 0xffff;
 int VAR_14, VAR_15 = 0;
 struct usb_port *VAR_16 = VAR_7->ports[VAR_8 - 1];

 for (VAR_14 = 0; ; VAR_14 += VAR_2) {
  VAR_10 = FUNC_1(VAR_7, VAR_8, &VAR_12, &VAR_11);
  if (VAR_10 < 0)
   return VAR_10;

  if (!(VAR_11 & VAR_6) &&
       (VAR_12 & VAR_5) == VAR_13) {
   if (!VAR_9 ||
        (VAR_13 == VAR_5))
    VAR_15 += VAR_2;
   if (VAR_15 >= VAR_1)
    break;
  } else {
   VAR_15 = 0;
   VAR_13 = VAR_12 & VAR_5;
  }

  if (VAR_11 & VAR_6) {
   FUNC_3(VAR_7->hdev, VAR_8,
     VAR_4);
  }

  if (VAR_14 >= VAR_3)
   break;
  FUNC_2(VAR_2);
 }

 FUNC_0(&VAR_16->dev, "debounce total %dms stable %dms status 0x%x\n",
   VAR_14, VAR_15, VAR_12);

 if (VAR_15 < VAR_1)
  return -VAR_0;
 return VAR_12;
}
