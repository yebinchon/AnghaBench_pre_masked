
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int dummy; } ;
struct gspca_dev {int dummy; } ;
typedef int __s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int) ;
 int FUNC_1 (struct sd*,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_3, __s32 VAR_4)
{
 int VAR_5;
 u8 VAR_6[2];
 struct sd *VAR_7 = (struct sd *) VAR_3;

 VAR_6[1] = (VAR_4 & 0xff);
 VAR_6[0] = (VAR_4 & 0xff00) >> 8;

 FUNC_0(VAR_3, VAR_0, "Set green balance %d\n", VAR_4);
 VAR_5 = FUNC_1(VAR_7, VAR_1,
     VAR_6, 2);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_1(VAR_7, VAR_2,
      VAR_6, 2);
}
