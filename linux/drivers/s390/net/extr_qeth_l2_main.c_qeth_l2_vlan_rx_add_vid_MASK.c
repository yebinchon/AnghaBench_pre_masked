
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qeth_card {int dummy; } ;
struct net_device {struct qeth_card* ml_priv; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_card*,int,char*,int ) ;
 int FUNC_1 (struct qeth_card*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
       __be16 VAR_2, u16 VAR_3)
{
 struct qeth_card *VAR_4 = VAR_1->ml_priv;

 FUNC_0(VAR_4, 4, "aid:%d", VAR_3);
 if (!VAR_3)
  return 0;

 return FUNC_1(VAR_4, VAR_3, VAR_0);
}
