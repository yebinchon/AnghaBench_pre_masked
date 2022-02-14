
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_composite_dev {int dummy; } ;
struct TYPE_8__ {int iConfiguration; } ;
struct TYPE_7__ {int iSerialNumber; int iProduct; int iManufacturer; } ;
struct TYPE_6__ {int id; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct usb_composite_dev*,TYPE_3__*,int ) ;
 int FUNC_1 (struct usb_composite_dev*,int *) ;
 int FUNC_2 (struct usb_composite_dev*,TYPE_1__*) ;
 TYPE_3__ VAR_6 ;
 TYPE_2__ VAR_7 ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static int FUNC_3(struct usb_composite_dev *VAR_9)
{
 int VAR_10;

 VAR_10 = FUNC_2(VAR_9, VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_7.iManufacturer =
  VAR_8[VAR_0].id;
 VAR_7.iProduct = VAR_8[VAR_1].id;
 VAR_7.iSerialNumber =
  VAR_8[VAR_2].id;
 VAR_6.iConfiguration =
  VAR_8[VAR_3].id;

 VAR_10 = FUNC_0(VAR_9, &VAR_6, VAR_5);
 if (VAR_10)
  return VAR_10;
 FUNC_1(VAR_9, &VAR_4);
 return 0;
}
