
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct pcpu_lstats {int bytes; int syncp; int packets; } ;
struct net_device {int lstats; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 struct pcpu_lstats* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static netdev_tx_t FUNC_4(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 int VAR_3 = VAR_1->len;
 struct pcpu_lstats *VAR_4 = FUNC_1(VAR_2->lstats);

 FUNC_2(&VAR_4->syncp);
 VAR_4->bytes += VAR_3;
 VAR_4->packets++;
 FUNC_3(&VAR_4->syncp);

 FUNC_0(VAR_1);

 return VAR_0;
}
