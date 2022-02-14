
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ cam_type; scalar_t__ sof_read; } ;
struct gspca_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gspca_dev*) ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct gspca_dev*) ;
 int FUNC_3 (struct gspca_dev*) ;
 int FUNC_4 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;
 int VAR_3;

 VAR_2->sof_read = 0;





 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 if (VAR_2->cam_type == VAR_0) {
  VAR_3 = FUNC_1(VAR_1);
 } else {
  VAR_3 = FUNC_2(VAR_1);
 }
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_0(VAR_1);
}
