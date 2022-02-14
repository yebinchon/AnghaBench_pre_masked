
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct orinoco_private {int dummy; } ;
struct net_device {int dummy; } ;
struct hermes_rx_descriptor {int silence; int signal; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct orinoco_private*) ;
 struct orinoco_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1,
    struct sk_buff *VAR_2,
    struct hermes_rx_descriptor *VAR_3)
{
 struct orinoco_private *VAR_4 = FUNC_1(VAR_1);
 if (FUNC_0(VAR_4)) {
  FUNC_2(VAR_1, FUNC_3(VAR_2) + VAR_0,
       VAR_3->signal, VAR_3->silence);
 }
}
