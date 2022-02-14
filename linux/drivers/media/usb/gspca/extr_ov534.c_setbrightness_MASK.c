
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ sensor; } ;
struct gspca_dev {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1, s32 VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_1;

 if (VAR_3->sensor == VAR_0) {
  if (VAR_2 < 0)
   VAR_2 = 0x80 - VAR_2;
  FUNC_0(VAR_1, 0x55, VAR_2);
 } else {
  FUNC_0(VAR_1, 0x9b, VAR_2);
 }
}
