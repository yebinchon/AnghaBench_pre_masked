
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ bridge; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct gspca_dev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_3, s32 VAR_4)
{
 struct sd *VAR_5 = (struct sd *) VAR_3;

 if (VAR_4 != 16)
  VAR_4 = 15 - VAR_4;

 FUNC_1(VAR_3, VAR_2, 0x00);
 FUNC_1(VAR_3, VAR_1, 0x04);
 FUNC_1(VAR_3, VAR_1, VAR_4);


 if (VAR_4 == 15 && VAR_5->bridge == VAR_0) {
  FUNC_0(4);
  FUNC_1(VAR_3, VAR_2, 0x19);
 }
}
