
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct bcma_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bcma_device*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct bcma_device *VAR_1, u16 VAR_2, u32 VAR_3,
     int VAR_4)
{
 int VAR_5;
 u32 VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_6 = FUNC_0(VAR_1, VAR_2);
  if ((VAR_6 & VAR_3) == VAR_3)
   return 0;
  FUNC_1(10);
 }

 return -VAR_0;
}
