
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dummy; } ;
typedef scalar_t__ s32 ;
typedef int __u8 ;


 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0, s32 VAR_1, s32 VAR_2)
{
 __u8 VAR_3;

 FUNC_0(VAR_0, 0xff, 0x04);
 VAR_3 = (VAR_1 ? 0x04 : 0x00) |
        (VAR_2 ? 0x08 : 0x00);
 FUNC_0(VAR_0, 0x21, VAR_3);


 FUNC_0(VAR_0, 0x11, 0x01);
}
