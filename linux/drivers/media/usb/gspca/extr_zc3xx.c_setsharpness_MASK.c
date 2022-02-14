
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; int member_1; } ;
typedef TYPE_1__ u8 ;
struct gspca_dev {int dummy; } ;
typedef size_t s32 ;


 int FUNC_0 (struct gspca_dev*,int) ;
 int FUNC_1 (struct gspca_dev*,TYPE_1__ const,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_0, s32 VAR_1)
{
 static const u8 VAR_2[][2] = {
  {0x02, 0x03},
  {0x04, 0x07},
  {0x08, 0x0f},
  {0x10, 0x1e}
 };

 FUNC_1(VAR_0, VAR_2[VAR_1][0], 0x01c6);
 FUNC_0(VAR_0, 0x01c8);
 FUNC_0(VAR_0, 0x01c9);
 FUNC_0(VAR_0, 0x01ca);
 FUNC_1(VAR_0, VAR_2[VAR_1][1], 0x01cb);
}
