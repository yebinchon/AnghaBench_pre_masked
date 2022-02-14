
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int alt; int iface; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int ) ;
 int FUNC_1 (struct gspca_dev*,char*) ;
 int FUNC_2 (struct gspca_dev*,int,int) ;
 int FUNC_3 (struct gspca_dev*) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_2)
{
 if (FUNC_4(VAR_2->dev, VAR_2->iface, 0) < 0) {
  FUNC_1(VAR_2, "Set packet size: set interface error\n");
  goto error;
 }
 FUNC_3(VAR_2);

 FUNC_2(VAR_2, 0x0d00, 1);


 FUNC_0(VAR_2, VAR_0, "ClickSmart310 sync alt: %d\n",
    VAR_2->alt);


 if (FUNC_4(VAR_2->dev,
    VAR_2->iface,
    VAR_2->alt) < 0) {
  FUNC_1(VAR_2, "Set packet size: set interface error\n");
  goto error;
 }
 return 0;
error:
 return -VAR_1;
}
