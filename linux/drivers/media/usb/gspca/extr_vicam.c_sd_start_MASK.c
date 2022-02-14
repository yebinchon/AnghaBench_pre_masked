
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int work_struct; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct gspca_dev*,int) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *)VAR_0;
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, 1);
 if (VAR_2 < 0)
  return VAR_2;

 FUNC_0(&VAR_1->work_struct);

 return 0;
}
