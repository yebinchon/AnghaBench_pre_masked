
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,unsigned char*) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_0, unsigned char VAR_1,
          unsigned char VAR_2)
{
 int VAR_3;
 u8 VAR_4[2];

 VAR_4[0] = VAR_1;
 VAR_4[1] = VAR_2;

 VAR_3 = FUNC_0(VAR_0, VAR_4);
 if (VAR_3 < 0)
   return VAR_3;

 return VAR_3;
}
