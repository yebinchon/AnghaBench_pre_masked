
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_3, short VAR_4)
{
 u8 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_0, &VAR_5);
 if (VAR_6)
  return;
 if (VAR_4)

  FUNC_3(VAR_3, VAR_0, VAR_5 | VAR_1);
 else

  FUNC_3(VAR_3, VAR_0, VAR_5 & ~VAR_1);

 FUNC_0(VAR_3);
 FUNC_2(VAR_2);
}
