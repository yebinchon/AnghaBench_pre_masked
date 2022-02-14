
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt2x00_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct rt2x00_dev*,char*) ;
 int FUNC_1 (struct rt2x00_dev*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct rt2x00_dev *VAR_3)
{
 unsigned int VAR_4;
 u8 VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_5 = FUNC_1(VAR_3, 0);
  if ((VAR_5 != 0xff) && (VAR_5 != 0x00))
   return 0;
  FUNC_2(VAR_1);
 }

 FUNC_0(VAR_3, "BBP register access failed, aborting\n");
 return -VAR_0;
}
