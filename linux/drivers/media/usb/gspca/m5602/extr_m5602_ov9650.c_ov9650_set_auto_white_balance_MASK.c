
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
 int FUNC_2 (struct sd*,int ,int*,int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_2,
      __s32 VAR_3)
{
 int VAR_4;
 u8 VAR_5;
 struct sd *VAR_6 = (struct sd *) VAR_2;

 FUNC_0(VAR_2, VAR_0, "Set auto white balance to %d\n", VAR_3);

 VAR_4 = FUNC_1(VAR_6, VAR_1, &VAR_5, 1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_5 = ((VAR_5 & 0xfd) | ((VAR_3 & 0x01) << 1));
 VAR_4 = FUNC_2(VAR_6, VAR_1, &VAR_5, 1);

 return VAR_4;
}
