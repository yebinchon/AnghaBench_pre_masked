
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct gspca_dev*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0, s32 VAR_1)
{
 int VAR_2;

 VAR_2 = 0x08000000
  + (VAR_1 << 16);
 FUNC_0(VAR_0, VAR_2);
}
