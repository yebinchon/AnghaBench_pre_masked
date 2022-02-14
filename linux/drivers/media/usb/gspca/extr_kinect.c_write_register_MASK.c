
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct gspca_dev {int dummy; } ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct gspca_dev*,int ,char*,int ,int ) ;
 int FUNC_2 (char*,int,int ,int ) ;
 int FUNC_3 (struct gspca_dev*,int,int *,int,int *,int) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_1, uint16_t VAR_2,
   uint16_t VAR_3)
{
 uint16_t VAR_4[2];
 __le16 VAR_5[2];
 int VAR_6;

 VAR_5[0] = FUNC_0(VAR_2);
 VAR_5[1] = FUNC_0(VAR_3);

 FUNC_1(VAR_1, VAR_0, "Write Reg 0x%04x <= 0x%02x\n", VAR_2, VAR_3);
 VAR_6 = FUNC_3(VAR_1, 0x03, VAR_5, 4, VAR_4, 4);
 if (VAR_6 < 0)
  return VAR_6;
 if (VAR_6 != 2) {
  FUNC_2("send_cmd returned %d [%04x %04x], 0000 expected\n",
   VAR_6, VAR_4[0], VAR_4[1]);
 }
 return 0;
}
