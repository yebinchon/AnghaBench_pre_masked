
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1)
{
 u8 VAR_2;


 if (VAR_0)
  VAR_2 = 0x02;
 else
  VAR_2 = 0x00;
 FUNC_0(VAR_1, 0x40, 0x00);
 FUNC_0(VAR_1, 0x41, VAR_2);
 FUNC_0(VAR_1, 0x0f, 0x00);
}
