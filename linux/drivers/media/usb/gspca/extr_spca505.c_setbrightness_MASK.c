
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct gspca_dev*,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0, s32 VAR_1)
{
 FUNC_0(VAR_0, 0x05, 0x00, (255 - VAR_1) >> 6);
 FUNC_0(VAR_0, 0x05, 0x01, (255 - VAR_1) << 2);
}
