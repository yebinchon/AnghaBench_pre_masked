
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int nmodes; int cam_mode; } ;
struct TYPE_4__ {TYPE_1__ cam; } ;
struct sd {TYPE_2__ gspca_dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct sd*,int ,int*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct sd *VAR_3)
{
 u16 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_1, &VAR_4);
 if (VAR_5 < 0)
  return -VAR_0;

 if (VAR_4 != 0x19)
  return -VAR_0;

 FUNC_1("vv6410 sensor detected\n");

 VAR_3->gspca_dev.cam.cam_mode = VAR_2;
 VAR_3->gspca_dev.cam.nmodes = FUNC_0(VAR_2);
 return 0;
}
