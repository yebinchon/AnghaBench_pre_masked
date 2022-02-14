
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nmodes; int cam_mode; } ;
struct TYPE_4__ {TYPE_1__ cam; } ;
struct sd {scalar_t__ bridge; TYPE_2__ gspca_dev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct sd *VAR_3)
{
 if (VAR_3->bridge != VAR_0)
  return -VAR_1;

 FUNC_1("st6422 sensor detected\n");

 VAR_3->gspca_dev.cam.cam_mode = VAR_2;
 VAR_3->gspca_dev.cam.nmodes = FUNC_0(VAR_2);
 return 0;
}
