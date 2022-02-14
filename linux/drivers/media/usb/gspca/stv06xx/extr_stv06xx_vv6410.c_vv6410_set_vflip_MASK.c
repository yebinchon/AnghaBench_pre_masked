
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sd {int dummy; } ;
struct gspca_dev {int dummy; } ;
typedef scalar_t__ __s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,scalar_t__) ;
 int FUNC_1 (struct sd*,int ,int *) ;
 int FUNC_2 (struct sd*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_3, __s32 VAR_4)
{
 int VAR_5;
 u16 VAR_6;
 struct sd *VAR_7 = (struct sd *) VAR_3;

 VAR_5 = FUNC_1(VAR_7, VAR_1, &VAR_6);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_4)
  VAR_6 |= VAR_2;
 else
  VAR_6 &= ~VAR_2;

 FUNC_0(VAR_3, VAR_0, "Set vertical flip to %d\n", VAR_4);
 VAR_5 = FUNC_2(VAR_7, VAR_1, VAR_6);

 return (VAR_5 < 0) ? VAR_5 : 0;
}
