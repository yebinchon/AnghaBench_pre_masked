
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int * usb_buf; } ;
struct sd {TYPE_2__* sensor; TYPE_1__ gspca_dev; } ;
struct gspca_dev {int dev; } ;
typedef int buffer ;
typedef int __u8 ;
struct TYPE_4__ {int (* start ) (struct sd*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int ,char*) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (struct sd*) ;
 int FUNC_3 (int ,int ,int,int,int,int,int *,int,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;
 __u8 *VAR_4 = VAR_3->gspca_dev.usb_buf;
 int VAR_5;


 const u8 VAR_6[4] = {0x13, 0xf9, 0x0f, 0x01};

 if (VAR_3->sensor->start)
  VAR_3->sensor->start(VAR_3);

 FUNC_1(VAR_4, VAR_6, sizeof(VAR_6));
 VAR_5 = FUNC_3(VAR_2->dev,
         FUNC_4(VAR_2->dev, 0),
         0x04, 0x40, 0x19, 0x0000, VAR_4,
         sizeof(VAR_6), VAR_1);

 FUNC_0(VAR_2, VAR_0, "Transfer started\n");
 return (VAR_5 < 0) ? VAR_5 : 0;
}
