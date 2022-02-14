
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {TYPE_1__* chip_info; } ;
struct TYPE_3__ {int gfx_chip_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned char FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 unsigned char FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,unsigned char) ;
 int FUNC_4 (int ,int ,int,int ) ;
 TYPE_2__* VAR_9 ;

void FUNC_5(unsigned int *VAR_10)
{
 unsigned char VAR_11, VAR_12, VAR_13;
 unsigned char VAR_14 = 0;
 int VAR_15;


 switch (VAR_9->chip_info->gfx_chip_name) {
 case 136:
 case 133:
  FUNC_4(VAR_5, VAR_8, 0x80, VAR_1);
  break;

 case 132:
 case 128:
 case 135:
 case 134:
 case 131:
 case 130:
 case 129:
  FUNC_4(VAR_2, VAR_7, 0x80, VAR_1);
  break;
 }
 VAR_14 = FUNC_2(VAR_8, VAR_6);
 FUNC_4(VAR_6, VAR_8, 0x0, VAR_0);


 FUNC_1(0, VAR_4);
 for (VAR_15 = 0; VAR_15 < 256; VAR_15++) {
  VAR_11 = FUNC_0(VAR_3);
  VAR_12 = FUNC_0(VAR_3);
  VAR_13 = FUNC_0(VAR_3);
  VAR_10[VAR_15] =
      ((((u32) VAR_11) << 16) |
       (((u16) VAR_12) << 8)) | VAR_13;
 }
 FUNC_3(VAR_6, VAR_8, VAR_14);
}
