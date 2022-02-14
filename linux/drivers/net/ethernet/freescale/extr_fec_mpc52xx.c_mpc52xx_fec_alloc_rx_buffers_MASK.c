
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;
struct net_device {int dummy; } ;
struct bcom_task {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcom_task*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct net_device*,struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, struct bcom_task *VAR_3)
{
 struct sk_buff *VAR_4;

 while (!FUNC_0(VAR_3)) {
  VAR_4 = FUNC_3(VAR_2, VAR_1);
  if (!VAR_4)
   return -VAR_0;


  FUNC_1(VAR_4->data, 0, VAR_1);
  FUNC_2(VAR_2, VAR_4);
 }
 return 0;
}
