
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ usb_buf; } ;
struct sd {int sensor_addr; TYPE_1__ gspca_dev; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int,int) ;
 int FUNC_1 (struct sd*,int*) ;

__attribute__((used)) static void FUNC_2(struct sd *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct gspca_dev *VAR_4 = (struct gspca_dev *)VAR_1;
 u16* VAR_5 = (u16 *)VAR_1->gspca_dev.usb_buf;

 VAR_5[0] = 0x082f | ((VAR_1->sensor_addr & 0x80) ? 0x1500 : 0x0);
 VAR_5[0] |= (VAR_1->sensor_addr & 0x40) ? 0x4000 : 0x0;
 VAR_5[1] = 0x2082 | ((VAR_1->sensor_addr & 0x40) ? 0x0005 : 0x0);
 VAR_5[1] |= (VAR_1->sensor_addr & 0x20) ? 0x0150 : 0x0;
 VAR_5[1] |= (VAR_1->sensor_addr & 0x10) ? 0x5400 : 0x0;
 VAR_5[2] = 0x8208 | ((VAR_1->sensor_addr & 0x08) ? 0x0015 : 0x0);
 VAR_5[2] |= (VAR_1->sensor_addr & 0x04) ? 0x0540 : 0x0;
 VAR_5[2] |= (VAR_1->sensor_addr & 0x02) ? 0x5000 : 0x0;
 VAR_5[3] = 0x1d20 | ((VAR_1->sensor_addr & 0x02) ? 0x0001 : 0x0);
 VAR_5[3] |= (VAR_1->sensor_addr & 0x01) ? 0x0054 : 0x0;

 FUNC_1(VAR_1, VAR_5);

 VAR_5[0] = 0x8208 | ((VAR_2 & 0x80) ? 0x0015 : 0x0);
 VAR_5[0] |= (VAR_2 & 0x40) ? 0x0540 : 0x0;
 VAR_5[0] |= (VAR_2 & 0x20) ? 0x5000 : 0x0;
 VAR_5[1] = 0x0820 | ((VAR_2 & 0x20) ? 0x0001 : 0x0);
 VAR_5[1] |= (VAR_2 & 0x10) ? 0x0054 : 0x0;
 VAR_5[1] |= (VAR_2 & 0x08) ? 0x1500 : 0x0;
 VAR_5[1] |= (VAR_2 & 0x04) ? 0x4000 : 0x0;
 VAR_5[2] = 0x2082 | ((VAR_2 & 0x04) ? 0x0005 : 0x0);
 VAR_5[2] |= (VAR_2 & 0x02) ? 0x0150 : 0x0;
 VAR_5[2] |= (VAR_2 & 0x01) ? 0x5400 : 0x0;
 VAR_5[3] = 0x001d;

 FUNC_1(VAR_1, VAR_5);

 VAR_5[0] = 0x8208 | ((VAR_3 & 0x80) ? 0x0015 : 0x0);
 VAR_5[0] |= (VAR_3 & 0x40) ? 0x0540 : 0x0;
 VAR_5[0] |= (VAR_3 & 0x20) ? 0x5000 : 0x0;
 VAR_5[1] = 0x0820 | ((VAR_3 & 0x20) ? 0x0001 : 0x0);
 VAR_5[1] |= (VAR_3 & 0x10) ? 0x0054 : 0x0;
 VAR_5[1] |= (VAR_3 & 0x08) ? 0x1500 : 0x0;
 VAR_5[1] |= (VAR_3 & 0x04) ? 0x4000 : 0x0;
 VAR_5[2] = 0x2082 | ((VAR_3 & 0x04) ? 0x0005 : 0x0);
 VAR_5[2] |= (VAR_3 & 0x02) ? 0x0150 : 0x0;
 VAR_5[2] |= (VAR_3 & 0x01) ? 0x5400 : 0x0;
 VAR_5[3] = 0xfe1d;

 FUNC_1(VAR_1, VAR_5);

 FUNC_0(VAR_4, VAR_0, "i2c 0x%02x -> [0x%02x]\n", VAR_3, VAR_2);
}
