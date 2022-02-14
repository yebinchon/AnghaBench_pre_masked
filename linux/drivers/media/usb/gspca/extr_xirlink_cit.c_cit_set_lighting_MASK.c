
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int model; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;
 int FUNC_0 (struct gspca_dev*,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1, s32 VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_1;

 switch (VAR_3->model) {
 case 132:
 case 130:
 case 129:
 case 128:
 case 133:
  break;
 case 131: {
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
   FUNC_0(VAR_1, 0x0027, VAR_2);
  break;
 }
 }
}
