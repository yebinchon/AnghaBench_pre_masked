
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int protocol; scalar_t__ tstamp; } ;
struct pcpu_lstats {int bytes; int syncp; int packets; } ;
struct net_device {int lstats; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 struct pcpu_lstats* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static netdev_tx_t FUNC_9(struct sk_buff *VAR_2,
     struct net_device *VAR_3)
{
 struct pcpu_lstats *VAR_4;
 int VAR_5;

 FUNC_5(VAR_2);


 VAR_2->tstamp = 0;

 FUNC_4(VAR_2);




 FUNC_3(VAR_2);

 VAR_2->protocol = FUNC_0(VAR_2, VAR_3);


 VAR_4 = FUNC_6(VAR_3->lstats);

 VAR_5 = VAR_2->len;
 if (FUNC_1(FUNC_2(VAR_2) == VAR_1)) {
  FUNC_7(&VAR_4->syncp);
  VAR_4->bytes += VAR_5;
  VAR_4->packets++;
  FUNC_8(&VAR_4->syncp);
 }

 return VAR_0;
}
