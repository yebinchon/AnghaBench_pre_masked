
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int norme; int channel; } ;
struct gspca_dev {int dev; } ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,...) ;
 int FUNC_1 (int ,int,int,int) ;
 int FUNC_2 (struct gspca_dev*) ;
 int FUNC_3 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_3,
     __u16 VAR_4,
     __u16 VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_3;

 __u8 VAR_7 = 0x00;
 __u8 VAR_8 = 0x00;
 __u8 VAR_9 = 0x00;

 FUNC_0(VAR_3, VAR_0, "** Open Set Norme **\n");
 FUNC_2(VAR_3);



 if (VAR_4 & VAR_1)
  VAR_7 = 0x01;
 if (VAR_5 == 4 || VAR_5 == 5 || VAR_5 > 9)
  VAR_5 = 0;
 if (VAR_5 < 4)
  VAR_8 = 0x02;
 VAR_9 = (0x48 | VAR_7 | VAR_8);
 FUNC_1(VAR_3->dev, 0x08, VAR_9, 0x0000);
 FUNC_3(VAR_3, (0xc0 | (VAR_5 & 0x0F)), 0x02);

 if (VAR_4 & VAR_1)
  FUNC_3(VAR_3, 0x33, 0x0e);

 else if (VAR_4 & VAR_2)
  FUNC_3(VAR_3, 0x53, 0x0e);

 else
  FUNC_3(VAR_3, 0x03, 0x0e);


 VAR_6->norme = VAR_4;
 VAR_6->channel = VAR_5;
 FUNC_0(VAR_3, VAR_0, "Set Video Byte to 0x%2x\n", VAR_9);
 FUNC_0(VAR_3, VAR_0, "Set Norme: %08x Channel %d",
    VAR_4, VAR_5);
}
