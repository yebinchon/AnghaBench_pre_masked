
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rt2x00_dev*,int ) ;
 int FUNC_2 (struct rt2x00_dev*,char*) ;

int FUNC_3(struct rt2x00_dev *VAR_3)
{
 unsigned int VAR_4 = 0;
 u32 VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_5 = FUNC_1(VAR_3, VAR_1);
  if (VAR_5 && VAR_5 != ~0)
   return 0;
  FUNC_0(1);
 }

 FUNC_2(VAR_3, "Unstable hardware\n");
 return -VAR_0;
}
