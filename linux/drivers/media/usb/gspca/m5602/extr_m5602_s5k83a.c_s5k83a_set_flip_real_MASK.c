
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int dummy; } ;
struct gspca_dev {int dummy; } ;
typedef scalar_t__ __s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sd*,int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_5,
    __s32 VAR_6, __s32 VAR_7)
{
 int VAR_8;
 u8 VAR_9[1];
 struct sd *VAR_10 = (struct sd *) VAR_5;

 VAR_9[0] = 0x05;
 VAR_8 = FUNC_0(VAR_10, VAR_3, VAR_9, 1);
 if (VAR_8 < 0)
  return VAR_8;


 VAR_9[0] = VAR_1;
 VAR_9[0] = (VAR_6) ? VAR_9[0] | 0x40 : VAR_9[0];
 VAR_9[0] = (VAR_7) ? VAR_9[0] | 0x80 : VAR_9[0];

 VAR_8 = FUNC_0(VAR_10, VAR_0, VAR_9, 1);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_9[0] = (VAR_6) ? 0x0b : 0x0a;
 VAR_8 = FUNC_0(VAR_10, VAR_4, VAR_9, 1);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_9[0] = (VAR_7) ? 0x0a : 0x0b;
 VAR_8 = FUNC_0(VAR_10, VAR_2, VAR_9, 1);
 return VAR_8;
}
