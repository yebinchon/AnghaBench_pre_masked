
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
 int FUNC_0 (struct gspca_dev*,int ,char*,int) ;
 int FUNC_1 (struct sd*,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_2, __s32 VAR_3)
{
 int VAR_4;
 u8 VAR_5;
 struct sd *VAR_6 = (struct sd *) VAR_2;

 FUNC_0(VAR_2, VAR_0, "Set red gain to %d\n", VAR_3);

 VAR_5 = VAR_3 & 0xff;
 VAR_4 = FUNC_1(VAR_6, VAR_1, &VAR_5, 1);
 return VAR_4;
}
