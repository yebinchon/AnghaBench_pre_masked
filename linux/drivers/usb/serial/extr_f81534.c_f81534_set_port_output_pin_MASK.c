
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct usb_serial_port {int dev; struct usb_serial* serial; } ;
struct usb_serial {int dummy; } ;
struct f81534_serial_private {size_t* conf_data; } ;
struct f81534_port_private {size_t phy_num; } ;
struct f81534_port_out_pin {TYPE_1__* pin; } ;
struct TYPE_2__ {int reg_mask; int reg_addr; } ;


 int FUNC_0 (TYPE_1__*) ;
 size_t FUNC_1 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (int *,char*,size_t) ;
 struct f81534_port_out_pin* VAR_4 ;
 int FUNC_3 (struct usb_serial*,int ,int ,int ) ;
 struct f81534_serial_private* FUNC_4 (struct usb_serial*) ;
 struct f81534_port_private* FUNC_5 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_6(struct usb_serial_port *VAR_5)
{
 struct f81534_serial_private *VAR_6;
 struct f81534_port_private *VAR_7;
 struct usb_serial *VAR_8;
 const struct f81534_port_out_pin *VAR_9;
 int VAR_10;
 int VAR_11;
 u8 VAR_12;
 u8 VAR_13;

 VAR_8 = VAR_5->serial;
 VAR_6 = FUNC_4(VAR_8);
 VAR_7 = FUNC_5(VAR_5);

 VAR_13 = VAR_2 + VAR_7->phy_num;
 VAR_12 = VAR_6->conf_data[VAR_13];
 if (VAR_12 >= VAR_1) {




  VAR_13 = VAR_3 + VAR_7->phy_num;
  VAR_12 = VAR_6->conf_data[VAR_13];
  if (VAR_12 >= VAR_1)
   VAR_12 = VAR_0;
 }

 VAR_9 = &VAR_4[VAR_7->phy_num];

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_9->pin); ++VAR_11) {
  VAR_10 = FUNC_3(VAR_8,
    VAR_9->pin[VAR_11].reg_addr, VAR_9->pin[VAR_11].reg_mask,
    VAR_12 & FUNC_1(VAR_11) ? VAR_9->pin[VAR_11].reg_mask : 0);
  if (VAR_10)
   return VAR_10;
 }

 FUNC_2(&VAR_5->dev, "Output pin (M0/M1/M2): %d\n", VAR_12);
 return 0;
}
