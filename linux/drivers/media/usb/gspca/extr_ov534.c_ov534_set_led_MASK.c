
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int) ;
 int FUNC_1 (struct gspca_dev*,int) ;
 int FUNC_2 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_1, int VAR_2)
{
 u8 VAR_3;

 FUNC_0(VAR_1, VAR_0, "led status: %d\n", VAR_2);

 VAR_3 = FUNC_1(VAR_1, 0x21);
 VAR_3 |= 0x80;
 FUNC_2(VAR_1, 0x21, VAR_3);

 VAR_3 = FUNC_1(VAR_1, 0x23);
 if (VAR_2)
  VAR_3 |= 0x80;
 else
  VAR_3 &= ~0x80;

 FUNC_2(VAR_1, 0x23, VAR_3);

 if (!VAR_2) {
  VAR_3 = FUNC_1(VAR_1, 0x21);
  VAR_3 &= ~0x80;
  FUNC_2(VAR_1, 0x21, VAR_3);
 }
}
