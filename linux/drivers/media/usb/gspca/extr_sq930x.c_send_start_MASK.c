
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sd {size_t sensor; } ;
struct TYPE_4__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {size_t curr_mode; TYPE_2__ cam; } ;
struct cap_s {int cc_sizeid; int cc_bytes; } ;
struct TYPE_3__ {int priv; } ;


 int VAR_0 ;
 struct cap_s** VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int,int,int ,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;
 const struct cap_s *VAR_4;
 int VAR_5;

 VAR_5 = VAR_2->cam.cam_mode[VAR_2->curr_mode].priv;
 VAR_4 = &VAR_1[VAR_3->sensor][VAR_5];
 FUNC_0(VAR_2, 0x0900 | VAR_0,
   0x0a00 | VAR_4->cc_sizeid,
   VAR_4->cc_bytes, 32);
}
