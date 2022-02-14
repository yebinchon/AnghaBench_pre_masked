
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {size_t curr_mode; TYPE_2__ cam; } ;
struct TYPE_3__ {int priv; } ;


 int FUNC_0 (struct gspca_dev*,int *,int) ;
 int FUNC_1 (struct gspca_dev*,int *,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_0, u8 *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_0->cam.cam_mode[VAR_0->curr_mode].priv;

 if (VAR_2 == 0)
  return;

 if (VAR_3 == 1)
  FUNC_0(VAR_0, VAR_1, VAR_2);
 else
  FUNC_1(VAR_0, VAR_1, VAR_2);
}
