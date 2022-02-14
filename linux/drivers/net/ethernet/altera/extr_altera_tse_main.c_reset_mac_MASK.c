
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct altera_tse_private {int mac_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct altera_tse_private *VAR_6)
{
 int VAR_7;
 u32 VAR_8;

 VAR_8 = FUNC_0(VAR_6->mac_dev, FUNC_3(VAR_5));
 VAR_8 &= ~(VAR_4 | VAR_2);
 VAR_8 |= VAR_3 | VAR_1;
 FUNC_1(VAR_8, VAR_6->mac_dev, FUNC_3(VAR_5));

 VAR_7 = 0;
 while (VAR_7++ < VAR_0) {
  if (FUNC_2(VAR_6->mac_dev, FUNC_3(VAR_5),
         VAR_3))
   break;
  FUNC_4(1);
 }

 if (VAR_7 >= VAR_0) {
  VAR_8 = FUNC_0(VAR_6->mac_dev, FUNC_3(VAR_5));
  VAR_8 &= ~VAR_3;
  FUNC_1(VAR_8, VAR_6->mac_dev, FUNC_3(VAR_5));
  return -1;
 }
 return 0;
}
