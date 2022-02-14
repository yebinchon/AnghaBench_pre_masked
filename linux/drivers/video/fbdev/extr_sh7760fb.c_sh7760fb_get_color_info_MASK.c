
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_2,
       u16 VAR_3, int *VAR_4, int *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_7 = VAR_6 = 0;

 switch (VAR_3 & VAR_1) {
 case 133:
  VAR_7 = 1;
  VAR_6 = 1;
  break;
 case 132:
  VAR_7 = 1;
  VAR_6 = 2;
  break;
 case 130:
  VAR_7 = 1;
 case 131:
  VAR_6 = 4;
  break;
 case 129:
  VAR_7 = 1;
 case 128:
  VAR_6 = 8;
  break;
 case 135:
 case 134:
  VAR_6 = 16;
  VAR_7 = 0;
  break;
 default:
  FUNC_0(VAR_2, "unsupported LDDFR bit depth.\n");
  return -VAR_0;
 }

 if (VAR_4)
  *VAR_4 = VAR_6;
 if (VAR_5)
  *VAR_5 = VAR_7;

 return 0;
}
