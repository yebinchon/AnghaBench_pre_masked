
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ushc_data {int caps; TYPE_1__* usb_dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ,int ,int ,int*,int,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_4(struct ushc_data *VAR_4)
{
 int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_4->usb_dev, FUNC_3(VAR_4->usb_dev, 0),
         VAR_1, VAR_2,
         0, 0, &VAR_4->caps, sizeof(VAR_4->caps), 100);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4->caps = FUNC_1(VAR_4->caps);

 VAR_6 = VAR_4->caps & VAR_3;
 if (VAR_6 != 0x02) {
  FUNC_0(&VAR_4->usb_dev->dev, "controller version %d is not supported\n", VAR_6);
  return -VAR_0;
 }

 return 0;
}
