
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0, u8 VAR_1, u16 VAR_2)
{
 FUNC_0(VAR_0, VAR_1, VAR_2 >> 8);
 FUNC_0(VAR_0, 0xf1, VAR_2 & 0xff);
}
