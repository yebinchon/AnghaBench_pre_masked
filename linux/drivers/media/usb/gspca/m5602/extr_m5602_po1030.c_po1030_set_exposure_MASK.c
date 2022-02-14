
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
 struct sd *VAR_5 = (struct sd *) VAR_3;
 u8 VAR_6;
 int VAR_7;

 FUNC_0(VAR_3, VAR_0, "Set exposure to %d\n", VAR_4 & 0xffff);

 VAR_6 = ((VAR_4 & 0xff00) >> 8);
 FUNC_0(VAR_3, VAR_0, "Set exposure to high byte to 0x%x\n",
    VAR_6);

 VAR_7 = FUNC_1(VAR_5, VAR_1,
      &VAR_6, 1);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6 = (VAR_4 & 0xff);
 FUNC_0(VAR_3, VAR_0, "Set exposure to low byte to 0x%x\n",
    VAR_6);
 VAR_7 = FUNC_1(VAR_5, VAR_2,
      &VAR_6, 1);

 return VAR_7;
}
