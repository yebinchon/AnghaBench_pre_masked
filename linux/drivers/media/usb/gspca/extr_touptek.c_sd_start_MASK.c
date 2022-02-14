
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ this_f; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*) ;
 int FUNC_1 (struct gspca_dev*,char*) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 int VAR_2;

 VAR_1->this_f = 0;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 < 0) {
  FUNC_1(VAR_0, "Failed configure\n");
  return VAR_2;
 }


 return 0;
}
