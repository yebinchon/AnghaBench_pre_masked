
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mac_bits; } ;
struct qeth_card {TYPE_1__ info; } ;
struct net_device {struct qeth_card* ml_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2)
{
 struct qeth_card *VAR_3 = VAR_2->ml_priv;

 if (VAR_3->info.mac_bits & VAR_1)
  return FUNC_1(VAR_2);

 FUNC_0(VAR_3, 4, "nomacadr");
 return -VAR_0;
}
