
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int ,int*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_3,
   u8 *VAR_4,
   int VAR_5)
{







 if (VAR_4[0] == 0x00 && VAR_4[1] == 0x00
  && VAR_4[6] == 0xff && VAR_4[7] == 0xff) {
  FUNC_0(VAR_3, VAR_2, ((void*)0), 0);
  FUNC_0(VAR_3, VAR_0, VAR_4 + 8, VAR_5 - 8);
 } else {
  FUNC_0(VAR_3, VAR_1, VAR_4, VAR_5);
 }
}
