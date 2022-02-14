
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,int,int*) ;
 int FUNC_2 (struct net_device*,int,int) ;

void FUNC_3(struct net_device *VAR_1, u32 VAR_2, u32 VAR_3,
        u32 VAR_4)
{

 u32 VAR_5, VAR_6;

 if (VAR_3 != VAR_0) {
  FUNC_1(VAR_1, VAR_2, &VAR_5);
  VAR_6 = FUNC_0(VAR_3) - 1;
  VAR_5 &= ~VAR_3;
  VAR_5 |= VAR_4 << VAR_6;
  FUNC_2(VAR_1, VAR_2, VAR_5);
 } else {
  FUNC_2(VAR_1, VAR_2, VAR_4);
 }
}
