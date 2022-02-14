
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm501_devdata {int dev; } ;
struct platform_device {int id; int dev; } ;
struct plat_serial8250_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct plat_serial8250_port* FUNC_0 (int *) ;
 struct platform_device* FUNC_1 (struct sm501_devdata*,char*,int ,int) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (struct sm501_devdata*,struct platform_device*) ;
 int FUNC_4 (struct sm501_devdata*,int ,int) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct sm501_devdata *VAR_8, int VAR_9)
{
 struct platform_device *VAR_10;
 struct plat_serial8250_port *VAR_11;

 VAR_10 = FUNC_1(VAR_8, "serial8250", 0,
       sizeof(struct plat_serial8250_port) * 3);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_0(&VAR_10->dev);

 if (VAR_9 & VAR_6) {
  FUNC_4(VAR_8, VAR_11++, 0x30000);
  FUNC_5(VAR_8->dev, VAR_2, 1);
  FUNC_2(VAR_8->dev, VAR_5, 1 << 12, 0);
  FUNC_2(VAR_8->dev, VAR_4, 0x01e0, 0);
 }
 if (VAR_9 & VAR_7) {
  FUNC_4(VAR_8, VAR_11++, 0x30020);
  FUNC_5(VAR_8->dev, VAR_3, 1);
  FUNC_2(VAR_8->dev, VAR_5, 1 << 13, 0);
  FUNC_2(VAR_8->dev, VAR_4, 0x1e00, 0);
 }

 VAR_10->id = VAR_1;

 return FUNC_3(VAR_8, VAR_10);
}
