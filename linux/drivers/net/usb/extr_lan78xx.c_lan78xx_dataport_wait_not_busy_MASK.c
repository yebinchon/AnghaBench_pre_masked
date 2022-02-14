
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lan78xx_net {int net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lan78xx_net*,int ,int*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct lan78xx_net *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < 100; VAR_4++) {
  u32 VAR_6;

  VAR_5 = FUNC_0(VAR_3, VAR_0, &VAR_6);
  if (FUNC_2(VAR_5 < 0))
   return -VAR_2;

  if (VAR_6 & VAR_1)
   return 0;

  FUNC_3(40, 100);
 }

 FUNC_1(VAR_3->net, "lan78xx_dataport_wait_not_busy timed out");

 return -VAR_2;
}
