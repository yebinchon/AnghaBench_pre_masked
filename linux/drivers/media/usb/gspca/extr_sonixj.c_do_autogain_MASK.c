
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {scalar_t__ ag_cnt; int sensor; int exposure; int avg_lum; } ;
struct gspca_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (struct gspca_dev*,unsigned int) ;
 int FUNC_2 (struct gspca_dev*,int ,char*,int) ;
 int FUNC_3 (struct gspca_dev*,int,int,int,int,int) ;
 int FUNC_4 (struct gspca_dev*) ;

__attribute__((used)) static void FUNC_5(struct gspca_dev *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_3;
 int VAR_5;
 int VAR_6;
 u8 VAR_7 = 130;
 u8 VAR_8 = 20;


 if (VAR_4->ag_cnt < 0)
  return;
 if (--VAR_4->ag_cnt >= 0)
  return;
 VAR_4->ag_cnt = VAR_0;

 VAR_5 = FUNC_0(&VAR_4->avg_lum);
 FUNC_2(VAR_3, VAR_1, "mean lum %d\n", VAR_5);

 if (VAR_4->sensor == VAR_2) {
  FUNC_3(VAR_3, VAR_5, VAR_7, VAR_8,
     15, 1024);
  return;
 }

 if (VAR_5 < VAR_7 - VAR_8 ||
     VAR_5 > VAR_7 + VAR_8) {
  switch (VAR_4->sensor) {
  case 131:
   VAR_6 = VAR_4->exposure;
   VAR_6 += (VAR_7 - VAR_5) >> 6;
   if (VAR_6 < 0)
    VAR_6 = 0;
   VAR_4->exposure = FUNC_1(VAR_3,
         (unsigned int) VAR_6);
   break;
  case 130:
   VAR_6 = VAR_4->exposure >> 8;
   VAR_6 += (VAR_7 - VAR_5) >> 4;
   if (VAR_6 < 0)
    VAR_6 = 0;
   VAR_4->exposure = FUNC_1(VAR_3,
     (unsigned int) (VAR_6 << 8));
   break;
  case 128:
  case 129:
   VAR_6 = VAR_4->exposure;
   VAR_6 += (VAR_7 - VAR_5) >> 2;
   if (VAR_6 < 0)
    VAR_6 = 0;
   VAR_4->exposure = FUNC_1(VAR_3,
         (unsigned int) VAR_6);
   FUNC_4(VAR_3);
   break;
  default:



   VAR_6 = VAR_4->exposure;
   VAR_6 += (VAR_7 - VAR_5) >> 6;
   if (VAR_6 < 0)
    VAR_6 = 0;
   VAR_4->exposure = FUNC_1(VAR_3,
         (unsigned int) VAR_6);
   FUNC_4(VAR_3);
   break;
  }
 }
}
