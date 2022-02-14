
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct velocity_info {int netdev; } ;
struct sk_buff {int data; int ip_summed; } ;


 struct sk_buff* FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct sk_buff **VAR_1, int VAR_2,
       struct velocity_info *VAR_3)
{
 int VAR_4 = -1;
 if (VAR_2 < VAR_0) {
  struct sk_buff *VAR_5;

  VAR_5 = FUNC_0(VAR_3->netdev, VAR_2);
  if (VAR_5) {
   VAR_5->ip_summed = VAR_1[0]->ip_summed;
   FUNC_1(*VAR_1, VAR_5->data, VAR_2);
   *VAR_1 = VAR_5;
   VAR_4 = 0;
  }

 }
 return VAR_4;
}
