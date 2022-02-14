
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct usb_ctrlrequest {int wIndex; int wValue; } ;
struct cdns3_endpoint {int flags; } ;
struct cdns3_device {struct cdns3_endpoint** eps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct cdns3_endpoint*) ;
 int FUNC_1 (struct cdns3_endpoint*) ;
 size_t FUNC_2 (int) ;
 int FUNC_3 (struct cdns3_device*,int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct cdns3_device *VAR_4,
          struct usb_ctrlrequest *VAR_5,
          int VAR_6)
{
 struct cdns3_endpoint *VAR_7;
 int VAR_8 = 0;
 u8 VAR_9;

 if (FUNC_4(VAR_5->wValue) != VAR_3)
  return -VAR_0;

 if (!(VAR_5->wIndex & ~VAR_2))
  return 0;

 VAR_9 = FUNC_2(VAR_5->wIndex);
 VAR_7 = VAR_4->eps[VAR_9];

 FUNC_3(VAR_4, VAR_5->wIndex);

 if (VAR_6)
  FUNC_1(VAR_7);
 else if (!(VAR_7->flags & VAR_1))
  VAR_8 = FUNC_0(VAR_7);

 FUNC_3(VAR_4, 0x00);

 return VAR_8;
}
