
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rt2x00_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rt2x00_dev*,int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (struct rt2x00_dev*,int ) ;

__attribute__((used)) static u8 FUNC_3(struct rt2x00_dev *VAR_4)
{
 u16 VAR_5;

 if (FUNC_2(VAR_4, VAR_2) ||
     FUNC_2(VAR_4, VAR_3))
  return 0;

 VAR_5 = FUNC_0(VAR_4, VAR_0);
 if ((VAR_5 & 0x00ff) != 0x00ff)
  return FUNC_1(VAR_5, VAR_1);

 return 0;
}
