
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gspca_dev {TYPE_1__* gain; } ;
typedef int s32 ;
struct TYPE_2__ {int maximum; } ;


 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0, s32 VAR_1)
{
 FUNC_0(VAR_0, 0xff, 0x04);
 FUNC_0(VAR_0, 0x0e, 0x00);
 FUNC_0(VAR_0, 0x0f, VAR_0->gain->maximum - VAR_1 + 1);


 FUNC_0(VAR_0, 0x11, 0x01);
}
