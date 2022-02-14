
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct gspca_dev*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_1)
{
 int VAR_2 = 0;
 u8 VAR_3;

 do {
  VAR_3 = FUNC_1(VAR_1, VAR_0 + 1);
  if (VAR_2++ > 500) {
   FUNC_0("serial bus timeout: status=0x%02x\n", VAR_3);
   return -1;
  }

 } while ((VAR_3 & 0x10) || !(VAR_3 & 0x05));

 return 0;
}
