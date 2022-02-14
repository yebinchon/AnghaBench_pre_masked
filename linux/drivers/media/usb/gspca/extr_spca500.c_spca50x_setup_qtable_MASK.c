
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dummy; } ;
typedef int __u8 ;


 int FUNC_0 (struct gspca_dev*,unsigned int,unsigned int,int const) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_0,
    unsigned int VAR_1,
    unsigned int VAR_2,
    unsigned int VAR_3,
    const __u8 VAR_4[2][64])
{
 int VAR_5, VAR_6;


 for (VAR_5 = 0; VAR_5 < 64; VAR_5++) {
  VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2 + VAR_5, VAR_4[0][VAR_5]);
  if (VAR_6 < 0)
   return VAR_6;
 }


 for (VAR_5 = 0; VAR_5 < 64; VAR_5++) {
  VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_3 + VAR_5, VAR_4[1][VAR_5]);
  if (VAR_6 < 0)
   return VAR_6;
 }
 return 0;
}
