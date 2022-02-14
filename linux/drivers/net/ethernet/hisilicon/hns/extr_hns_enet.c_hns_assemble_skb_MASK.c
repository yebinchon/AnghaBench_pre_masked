
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int queue_mapping; int * data; struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct ethhdr {int h_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_4(struct net_device *VAR_3)
{
 struct sk_buff *VAR_4;
 struct ethhdr *VAR_5;
 int VAR_6;


 VAR_4 = FUNC_0(64, VAR_1);
 if (!VAR_4)
  return ((void*)0);

 FUNC_3(VAR_4, 64);
 VAR_4->dev = VAR_3;
 FUNC_2(VAR_4->data, 0xFF, VAR_4->len);


 VAR_5 = (struct ethhdr *)VAR_4->data;
 VAR_5->h_proto = FUNC_1(VAR_0);

 VAR_6 = VAR_4->len & (~1ul);
 FUNC_2(&VAR_4->data[VAR_6 / 2], 0xAA,
        VAR_6 / 2 - 1);

 VAR_4->queue_mapping = VAR_2;

 return VAR_4;
}
