
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {struct mceusb_dev* priv; } ;
struct mceusb_dev {int wideband_rx_enabled; int dev; } ;
typedef int cmdbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (struct mceusb_dev*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(struct rc_dev *VAR_2, int VAR_3)
{
 struct mceusb_dev *VAR_4 = VAR_2->priv;
 unsigned char VAR_5[3] = { VAR_0,
        VAR_1, 0x00 };

 FUNC_0(VAR_4->dev, "select %s-range receive sensor",
  VAR_3 ? "short" : "long");
 if (VAR_3) {
  VAR_4->wideband_rx_enabled = 1;
  VAR_5[2] = 2;
 } else {
  VAR_4->wideband_rx_enabled = 0;
  VAR_5[2] = 1;
 }
 FUNC_1(VAR_4, VAR_5, sizeof(VAR_5));


 return 0;
}
