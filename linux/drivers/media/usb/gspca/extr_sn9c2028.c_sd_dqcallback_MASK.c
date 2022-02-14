
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int avg_lum; int * autogain; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;

 if (VAR_1->autogain == ((void*)0) || !FUNC_1(VAR_1->autogain))
  return;

 FUNC_0(VAR_0, VAR_1->avg_lum);
}
