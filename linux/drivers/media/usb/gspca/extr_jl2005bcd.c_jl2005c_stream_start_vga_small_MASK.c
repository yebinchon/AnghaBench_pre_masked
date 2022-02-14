
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; int member_1; } ;
typedef TYPE_1__ u8 ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (struct gspca_dev*,TYPE_1__*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_0)
{
 int VAR_1;
 int VAR_2 = -1;
 static u8 VAR_3[][2] = {
  {0x06, 0x00},
  {0x7c, 0x00},
  {0x7d, 0x1a},
  {0x02, 0x00},
  {0x01, 0x00},
  {0x04, 0x52},
 };

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_3); VAR_1++) {
  FUNC_2(60);
  VAR_2 = FUNC_1(VAR_0, VAR_3[VAR_1]);
  if (VAR_2 < 0)
   return VAR_2;
 }
 FUNC_2(60);
 return VAR_2;
}
