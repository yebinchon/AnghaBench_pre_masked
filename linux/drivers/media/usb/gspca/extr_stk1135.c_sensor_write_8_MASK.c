
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct gspca_dev*,scalar_t__,int) ;
 scalar_t__ FUNC_2 (struct gspca_dev*) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_2, u8 VAR_3, u8 VAR_4)
{

 FUNC_1(VAR_2, VAR_0, VAR_3);
 FUNC_1(VAR_2, VAR_0 + 1, VAR_4);

 FUNC_1(VAR_2, VAR_1, 0x01);

 if (FUNC_2(VAR_2)) {
  FUNC_0("Sensor write failed\n");
  return;
 }
}
