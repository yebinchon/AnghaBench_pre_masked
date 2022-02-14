
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {scalar_t__ bridge; scalar_t__ sensor; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gspca_dev*) ;
 int FUNC_1 (struct gspca_dev*,int ,int) ;
 int FUNC_2 (struct gspca_dev*,int) ;
 int FUNC_3 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_4, s32 VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_4;
 u8 VAR_7;

 VAR_7 = FUNC_0(VAR_4);

 if (VAR_6->bridge == VAR_0) {
  FUNC_2(VAR_4, 0x7b);
  FUNC_3(VAR_4, 0x7b,
   VAR_6->sensor == VAR_2 ? 0x10 : 0x90);
  if (VAR_5 >= 128)
   VAR_7 = 0xf0;
 }

 FUNC_3(VAR_4, VAR_3, VAR_7);

 if (VAR_6->sensor == VAR_2)
  FUNC_1(VAR_4, VAR_1, 0x01);
}
