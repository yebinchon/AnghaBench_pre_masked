
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int member_0; int member_1; } ;
typedef TYPE_1__ u8 ;
struct gspca_dev {int dummy; } ;
typedef TYPE_1__ s32 ;


 int FUNC_0 (struct gspca_dev*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0, s32 VAR_1)
{
 u8 VAR_2[][2] = {
  {0x94, 0x02},
  {0xe7, 0x00}
 };

 VAR_2[1][1] = VAR_1;

 FUNC_0(VAR_0, VAR_2[0]);
 FUNC_0(VAR_0, VAR_2[1]);
}
