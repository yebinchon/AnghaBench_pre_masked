
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_1, const char *VAR_2, int VAR_3)
{
 if (VAR_3 < 0) {
  FUNC_0(VAR_1, "reply has error %d\n", VAR_3);
  return -VAR_0;
 }
 if (VAR_3 != 1) {
  FUNC_0(VAR_1, "Bad reply size %d\n", VAR_3);
  return -VAR_0;
 }
 if (VAR_2[0] != 0x08) {
  FUNC_0(VAR_1, "Bad reply 0x%02x\n", (int)VAR_2[0]);
  return -VAR_0;
 }
 return 0;
}
