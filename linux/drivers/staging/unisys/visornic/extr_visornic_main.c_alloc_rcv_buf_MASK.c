
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data_len; int len; struct net_device* dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_1(struct net_device *VAR_2)
{
 struct sk_buff *VAR_3;





 VAR_3 = FUNC_0(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);
 VAR_3->dev = VAR_2;




 VAR_3->len = VAR_1;

 VAR_3->data_len = 0;
 return VAR_3;
}
