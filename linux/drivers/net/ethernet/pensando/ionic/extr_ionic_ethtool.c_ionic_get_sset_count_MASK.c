
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ionic_lif {int dummy; } ;




 int VAR_0 ;
 int FUNC_0 (struct ionic_lif*) ;
 struct ionic_lif* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, int VAR_2)
{
 struct ionic_lif *VAR_3 = FUNC_1(VAR_1);
 int VAR_4 = 0;

 switch (VAR_2) {
 case 128:
  VAR_4 = FUNC_0(VAR_3);
  break;
 case 129:
  VAR_4 = VAR_0;
  break;
 }
 return VAR_4;
}
