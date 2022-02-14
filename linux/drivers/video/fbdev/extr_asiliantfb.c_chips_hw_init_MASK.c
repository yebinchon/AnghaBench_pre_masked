
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct fb_info {int dummy; } ;
struct TYPE_8__ {int addr; int data; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct fb_info *VAR_7)
{
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5); ++VAR_8)
  FUNC_6(VAR_5[VAR_8].addr, VAR_5[VAR_8].data);
 FUNC_6(0x81, 0x12);
 FUNC_6(0x82, 0x08);
 FUNC_6(0x20, 0x00);
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); ++VAR_8)
  FUNC_5(VAR_4[VAR_8].addr, VAR_4[VAR_8].data);
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); ++VAR_8)
  FUNC_4(VAR_3[VAR_8].addr, VAR_3[VAR_8].data);
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_0); ++VAR_8)
  FUNC_1(VAR_0[VAR_8].addr, VAR_0[VAR_8].data);

 FUNC_7(0x20, VAR_6 + 0x780);
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_1); ++VAR_8)
  FUNC_2(VAR_1[VAR_8].addr, VAR_1[VAR_8].data);
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2); ++VAR_8)
  FUNC_3(VAR_2[VAR_8].addr, VAR_2[VAR_8].data);
}
