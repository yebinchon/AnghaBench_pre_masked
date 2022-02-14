
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dev; } ;
struct page {int dummy; } ;
struct netfront_queue {TYPE_1__* info; } ;
struct TYPE_2__ {int netdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_0 (int ,scalar_t__,int) ;
 struct page* FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ,struct page*,int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_6(struct netfront_queue *VAR_5)
{
 struct sk_buff *VAR_6;
 struct page *VAR_7;

 VAR_6 = FUNC_0(VAR_5->info->netdev,
     VAR_3 + VAR_1,
     VAR_0 | VAR_4);
 if (FUNC_5(!VAR_6))
  return ((void*)0);

 VAR_7 = FUNC_1(VAR_0 | VAR_4);
 if (!VAR_7) {
  FUNC_2(VAR_6);
  return ((void*)0);
 }
 FUNC_3(VAR_6, 0, VAR_7, 0, 0, VAR_2);


 FUNC_4(VAR_6, VAR_1);
 VAR_6->dev = VAR_5->info->netdev;

 return VAR_6;
}
