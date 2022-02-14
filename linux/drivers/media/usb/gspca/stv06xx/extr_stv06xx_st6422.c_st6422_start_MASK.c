
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cam {TYPE_1__* cam_mode; } ;
struct TYPE_4__ {size_t curr_mode; struct cam cam; } ;
struct sd {TYPE_2__ gspca_dev; } ;
struct TYPE_3__ {scalar_t__ priv; } ;


 int FUNC_0 (struct sd*,int,int) ;

__attribute__((used)) static int FUNC_1(struct sd *VAR_0)
{
 int VAR_1;
 struct cam *VAR_2 = &VAR_0->gspca_dev.cam;

 if (VAR_2->cam_mode[VAR_0->gspca_dev.curr_mode].priv)
  VAR_1 = FUNC_0(VAR_0, 0x1505, 0x0f);
 else
  VAR_1 = FUNC_0(VAR_0, 0x1505, 0x02);
 if (VAR_1 < 0)
  return VAR_1;


 VAR_1 = FUNC_0(VAR_0, 0x143f, 0x01);
 return (VAR_1 < 0) ? VAR_1 : 0;
}
