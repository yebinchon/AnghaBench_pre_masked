
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dummy; } ;
typedef int __u8 ;


 int FUNC_0 (struct gspca_dev*,char*) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (struct gspca_dev*,int*) ;
 int FUNC_3 (struct gspca_dev*) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_0)
{
 int VAR_1;
 __u8 VAR_2[6];

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1 < 0)
  FUNC_0(VAR_0, "Camera Stop read failed\n");

 FUNC_1(VAR_2, 0, 6);
 VAR_2[0] = 0x14;
 VAR_1 = FUNC_2(VAR_0, VAR_2);
 if (VAR_1 < 0)
  FUNC_0(VAR_0, "Camera Stop command failed\n");
}
