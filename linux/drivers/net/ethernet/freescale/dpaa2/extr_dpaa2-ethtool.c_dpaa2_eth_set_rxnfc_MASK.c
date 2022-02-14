
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int location; } ;
struct ethtool_rxnfc {int cmd; int data; TYPE_1__ fs; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2,
          struct ethtool_rxnfc *VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_3->cmd) {
 case 128:
  if ((VAR_3->data & VAR_0) != VAR_3->data)
   return -VAR_1;
  VAR_4 = FUNC_0(VAR_2, VAR_3->data);
  break;
 case 129:
  VAR_4 = FUNC_1(VAR_2, &VAR_3->fs, VAR_3->fs.location);
  break;
 case 130:
  VAR_4 = FUNC_1(VAR_2, ((void*)0), VAR_3->fs.location);
  break;
 default:
  VAR_4 = -VAR_1;
 }

 return VAR_4;
}
