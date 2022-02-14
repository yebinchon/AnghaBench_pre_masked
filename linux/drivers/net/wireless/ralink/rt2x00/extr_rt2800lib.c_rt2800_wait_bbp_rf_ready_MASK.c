
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rt2x00_dev*,int ) ;
 int FUNC_1 (struct rt2x00_dev*,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct rt2x00_dev *VAR_5)
{
 unsigned int VAR_6;
 u32 VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_7 = FUNC_0(VAR_5, VAR_1);
  if (!FUNC_2(VAR_7, VAR_2))
   return 0;

  FUNC_3(VAR_4);
 }

 FUNC_1(VAR_5, "BBP/RF register access failed, aborting\n");
 return -VAR_0;
}
