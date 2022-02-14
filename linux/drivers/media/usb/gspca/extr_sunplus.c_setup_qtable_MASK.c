
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int,int,int const) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0,
   const u8 VAR_1[2][64])
{
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < 64; VAR_2++)
  FUNC_0(VAR_0, 0x00, 0x2800 + VAR_2, VAR_1[0][VAR_2]);


 for (VAR_2 = 0; VAR_2 < 64; VAR_2++)
  FUNC_0(VAR_0, 0x00, 0x2840 + VAR_2, VAR_1[1][VAR_2]);
}
