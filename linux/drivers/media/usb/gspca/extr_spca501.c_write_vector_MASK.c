
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dummy; } ;
typedef scalar_t__ __u16 ;


 int FUNC_0 (struct gspca_dev*,char*,scalar_t__ const,scalar_t__ const,scalar_t__ const) ;
 int FUNC_1 (struct gspca_dev*,scalar_t__ const,scalar_t__ const,scalar_t__ const) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_0, const __u16 VAR_1[][3])
{
 int VAR_2, VAR_3 = 0;

 while (VAR_1[VAR_3][0] != 0 || VAR_1[VAR_3][1] != 0 || VAR_1[VAR_3][2] != 0) {
  VAR_2 = FUNC_1(VAR_0, VAR_1[VAR_3][0], VAR_1[VAR_3][2],
        VAR_1[VAR_3][1]);
  if (VAR_2 < 0) {
   FUNC_0(VAR_0, "Reg write failed for 0x%02x,0x%02x,0x%02x\n",
      VAR_1[VAR_3][0], VAR_1[VAR_3][1], VAR_1[VAR_3][2]);
   return VAR_2;
  }
  VAR_3++;
 }
 return 0;
}
