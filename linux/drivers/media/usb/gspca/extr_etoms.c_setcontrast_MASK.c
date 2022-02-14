
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dummy; } ;
typedef int s32 ;
typedef int __u8 ;
typedef int RGBG ;


 int VAR_0 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (struct gspca_dev*,int ,int*,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_1, s32 VAR_2)
{
 __u8 VAR_3[] = { 0x80, 0x80, 0x80, 0x80, 0x00, 0x00 };

 FUNC_0(VAR_3, VAR_2, sizeof(VAR_3) - 2);
 FUNC_1(VAR_1, VAR_0, VAR_3, 6);
}
