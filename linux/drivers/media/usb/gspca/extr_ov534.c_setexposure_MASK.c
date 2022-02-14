
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ sensor; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1, s32 VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_1;

 if (VAR_3->sensor == VAR_0) {


  FUNC_0(VAR_1, 0x10, VAR_2);
 } else {







  FUNC_0(VAR_1, 0x08, VAR_2 >> 7);
  FUNC_0(VAR_1, 0x10, VAR_2 << 1);
 }
}
