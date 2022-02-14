
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int ,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_2, int *VAR_3)
{
 int VAR_4;
 u8 VAR_5 = 0;

 VAR_4 = FUNC_0(VAR_2, VAR_0,
   VAR_1, &VAR_5);
 if (VAR_4 >= 0) {





  if (VAR_5 & 0x80)
   *VAR_3 = 0 - (VAR_5 & 0x7F);
  else
   *VAR_3 = 0x7F & VAR_5;
 }

 return VAR_4;
}
