
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ag71xx {struct net_device* ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ag71xx*,int ) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ag71xx*,int ,struct net_device*,char*) ;

__attribute__((used)) static void FUNC_3(struct ag71xx *VAR_7)
{
 struct net_device *VAR_8 = VAR_7->ndev;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  u32 VAR_10, VAR_11;

  FUNC_1(VAR_0);

  VAR_10 = FUNC_0(VAR_7, VAR_2) & VAR_4;
  VAR_11 = FUNC_0(VAR_7, VAR_3) & VAR_5;
  if (!VAR_10 && !VAR_11)
   return;
 }

 FUNC_2(VAR_7, VAR_6, VAR_8, "DMA stop operation timed out\n");
}
