
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ionic_lif {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct ionic_lif*,int *) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int) ;
 struct ionic_lif* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3,
         u32 VAR_4, u8 *VAR_5)
{
 struct ionic_lif *VAR_6 = FUNC_2(VAR_3);

 switch (VAR_4) {
 case 128:
  FUNC_0(VAR_6, VAR_5);
  break;
 case 129:
  FUNC_1(VAR_5, VAR_2,
         VAR_1 * VAR_0);
  break;
 }
}
