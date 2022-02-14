
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (int const) ;
 int FUNC_1 (struct gspca_dev*,int const,int const) ;
 int FUNC_2 (struct gspca_dev*,int const,int const) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_0,
   const u16 (*VAR_1)[2])
{
 int VAR_2 = 0;

 while ((*VAR_1)[1] != 0) {
  if ((*VAR_1)[1] & 0x8000) {
   if ((*VAR_1)[1] == 0xdd00)
    FUNC_0((*VAR_1)[0]);
   else
    VAR_2 = FUNC_1(VAR_0, (*VAR_1)[1],
        (*VAR_1)[0]);
  } else {
   VAR_2 = FUNC_2(VAR_0, (*VAR_1)[1], (*VAR_1)[0]);
  }
  if (VAR_2 < 0)
   break;
  VAR_1++;
 }
 return VAR_2;
}
