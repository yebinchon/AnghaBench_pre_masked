
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sd {scalar_t__ pkt_seq; } ;
struct TYPE_2__ {int width; int height; } ;
struct gspca_dev {scalar_t__ usb_err; int alt; TYPE_1__ pixfmt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int ) ;
 int FUNC_1 (struct gspca_dev*,scalar_t__,int) ;
 int FUNC_2 (struct gspca_dev*,scalar_t__,int,int) ;
 int FUNC_3 (struct gspca_dev*) ;
 int FUNC_4 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_5;
 u16 VAR_7, VAR_8;


 FUNC_1(VAR_5, VAR_3, (1 << 5));

 FUNC_3(VAR_5);


 FUNC_1(VAR_5, VAR_2 + 0, 0x00);
 FUNC_1(VAR_5, VAR_2 + 1, 0x00);
 FUNC_1(VAR_5, VAR_2 + 2, 0x00);
 FUNC_1(VAR_5, VAR_2 + 3, 0x00);


 VAR_7 = VAR_5->pixfmt.width;
 VAR_8 = VAR_5->pixfmt.height;
 FUNC_1(VAR_5, VAR_1 + 0, VAR_7 & 0xff);
 FUNC_1(VAR_5, VAR_1 + 1, VAR_7 >> 8);
 FUNC_1(VAR_5, VAR_1 + 2, VAR_8 & 0xff);
 FUNC_1(VAR_5, VAR_1 + 3, VAR_8 >> 8);


 FUNC_1(VAR_5, VAR_4, 0x20);

 FUNC_4(VAR_5);


 FUNC_2(VAR_5, VAR_4, 0x80, 0x80);

 if (VAR_5->usb_err >= 0)
  FUNC_0(VAR_5, VAR_0, "camera started alt: 0x%02x\n",
     VAR_5->alt);

 VAR_6->pkt_seq = 0;

 return VAR_5->usb_err;
}
