
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*) ;
 int FUNC_1 (struct gspca_dev*,int*) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_0, unsigned char VAR_1)
{
 int VAR_2;

 static u8 VAR_3[2] = {0x95, 0x00};

 VAR_3[1] = VAR_1;

 VAR_2 = FUNC_1(VAR_0, VAR_3);
 if (VAR_2 < 0)
  return VAR_2;
 VAR_2 = FUNC_0(VAR_0);

 return VAR_2;
}
