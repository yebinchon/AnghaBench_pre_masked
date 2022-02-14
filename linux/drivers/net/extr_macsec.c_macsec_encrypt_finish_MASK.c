
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int protocol; int dev; } ;
struct net_device {int dummy; } ;
struct macsec_dev {int real_dev; } ;
struct TYPE_2__ {int h_proto; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 struct macsec_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_0, struct net_device *VAR_1)
{
 struct macsec_dev *VAR_2 = FUNC_1(VAR_1);

 VAR_0->dev = VAR_2->real_dev;
 FUNC_2(VAR_0);
 VAR_0->protocol = FUNC_0(VAR_0)->h_proto;
}
