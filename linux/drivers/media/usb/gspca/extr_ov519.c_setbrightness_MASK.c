
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sd {int sensor; } ;
struct TYPE_14__ {int member_0; int member_1; } ;
struct TYPE_13__ {int member_0; int member_1; } ;
struct TYPE_12__ {int member_0; int member_1; } ;
struct TYPE_11__ {int member_0; int member_1; } ;
struct TYPE_10__ {int member_0; int member_1; } ;
struct TYPE_9__ {int member_0; int member_1; } ;
struct TYPE_8__ {int member_0; int member_1; } ;
struct ov_i2c_regvals {TYPE_7__ member_6; TYPE_6__ member_5; TYPE_5__ member_4; TYPE_4__ member_3; TYPE_3__ member_2; TYPE_2__ member_1; TYPE_1__ member_0; } ;
struct gspca_dev {int dummy; } ;
typedef size_t s32 ;


 int FUNC_0 (struct ov_i2c_regvals const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sd*,int ,size_t) ;
 size_t FUNC_2 (size_t) ;
 int FUNC_3 (struct sd*,struct ov_i2c_regvals const*,int ) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_2, s32 VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_2;
 static const struct ov_i2c_regvals VAR_5[][7] = {
  {{0x0f, 0x6a}, {0x24, 0x40}, {0x25, 0x2b}, {0x26, 0x90},
   {0x27, 0xe0}, {0x28, 0xe0}, {0x2c, 0xe0}},
  {{0x0f, 0x6a}, {0x24, 0x50}, {0x25, 0x40}, {0x26, 0xa1},
   {0x27, 0xc0}, {0x28, 0xc0}, {0x2c, 0xc0}},
  {{0x0f, 0x6a}, {0x24, 0x68}, {0x25, 0x58}, {0x26, 0xc2},
   {0x27, 0xa0}, {0x28, 0xa0}, {0x2c, 0xa0}},
  {{0x0f, 0x6a}, {0x24, 0x70}, {0x25, 0x68}, {0x26, 0xd3},
   {0x27, 0x80}, {0x28, 0x80}, {0x2c, 0x80}},
  {{0x0f, 0x6a}, {0x24, 0x80}, {0x25, 0x70}, {0x26, 0xd3},
   {0x27, 0x20}, {0x28, 0x20}, {0x2c, 0x20}},
  {{0x0f, 0x6a}, {0x24, 0x88}, {0x25, 0x78}, {0x26, 0xd3},
   {0x27, 0x40}, {0x28, 0x40}, {0x2c, 0x40}},
  {{0x0f, 0x6a}, {0x24, 0x90}, {0x25, 0x80}, {0x26, 0xd4},
   {0x27, 0x60}, {0x28, 0x60}, {0x2c, 0x60}}
 };

 switch (VAR_4->sensor) {
 case 128:
 case 136:
 case 129:
 case 139:
 case 138:
 case 137:
 case 133:
 case 132:
  FUNC_1(VAR_4, VAR_0, VAR_3);
  break;
 case 135:
 case 134:
  FUNC_1(VAR_4, VAR_0, VAR_3);
  break;
 case 131:
  FUNC_3(VAR_4, VAR_5[VAR_3],
    FUNC_0(VAR_5[0]));
  break;
 case 130:


  FUNC_1(VAR_4, VAR_1, FUNC_2(VAR_3));
  break;
 }
}
