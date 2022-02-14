
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
 int VAR_3 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int) ;
 int FUNC_1 (struct sd*,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_4, __s32 VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_4;
 u8 VAR_7 = VAR_3;
 int VAR_8;

 FUNC_0(VAR_4, VAR_0, "Set gain to %d\n", VAR_5);
 VAR_8 = FUNC_1(VAR_6, VAR_2, &VAR_7, 1);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = VAR_5 & 0xff;
 VAR_8 = FUNC_1(VAR_6, VAR_1, &VAR_7, 1);

 return VAR_8;
}
