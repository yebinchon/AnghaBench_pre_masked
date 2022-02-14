
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sd {scalar_t__ packet; } ;
struct TYPE_4__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {scalar_t__ empty_packet; scalar_t__ curr_mode; TYPE_2__ cam; } ;
struct TYPE_3__ {scalar_t__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct gspca_dev*,int ,int) ;
 int FUNC_2 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_10)
{
 struct sd *VAR_11 = (struct sd *) VAR_10;

 FUNC_1(VAR_10, VAR_0, 0xe8);
 FUNC_1(VAR_10, VAR_1, 0x03);


 FUNC_1(VAR_10, VAR_2, 0x90);

 if (VAR_10->cam.cam_mode[(int) VAR_10->curr_mode].priv) {

  FUNC_1(VAR_10, VAR_3, 0x41);

 } else {

  FUNC_1(VAR_10, VAR_3, 0x81);

 }

 FUNC_1(VAR_10, VAR_4, 0x10);
 FUNC_1(VAR_10, VAR_5, 0x14);
 FUNC_1(VAR_10, VAR_6, 0x01);
 FUNC_1(VAR_10, VAR_7, 0x12);
 FUNC_1(VAR_10, VAR_8, 0x01);

 FUNC_2(VAR_10);


 FUNC_1(VAR_10, VAR_9, 0x01);
 FUNC_0(200);
 FUNC_1(VAR_10, VAR_9, 0x00);

 VAR_10->empty_packet = 0;
 VAR_11->packet = 0;

 return 0;
}
