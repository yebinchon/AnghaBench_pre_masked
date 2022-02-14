
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int dummy; } ;
struct gspca_dev {int dummy; } ;
typedef int __s32 ;


 int VAR_0 ;
 int FUNC_0 (struct sd*,int ,int *,int) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_1, __s32 VAR_2)
{
 int VAR_3;
 u8 VAR_4[1];
 struct sd *VAR_5 = (struct sd *) VAR_1;

 VAR_4[0] = VAR_2;
 VAR_3 = FUNC_0(VAR_5, VAR_0, VAR_4, 1);
 return VAR_3;
}
