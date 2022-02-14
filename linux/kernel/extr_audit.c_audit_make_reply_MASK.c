
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (void*,void const*,int) ;
 void* FUNC_2 (struct nlmsghdr*) ;
 struct sk_buff* FUNC_3 (int,int ) ;
 struct nlmsghdr* FUNC_4 (struct sk_buff*,int ,int,int,int,int) ;

struct sk_buff *FUNC_5(int VAR_3, int VAR_4, int VAR_5,
     int VAR_6, const void *VAR_7, int VAR_8)
{
 struct sk_buff *VAR_9;
 struct nlmsghdr *VAR_10;
 void *VAR_11;
 int VAR_12 = VAR_6 ? VAR_2 : 0;
 int VAR_13 = VAR_5 ? VAR_1 : VAR_4;

 VAR_9 = FUNC_3(VAR_8, VAR_0);
 if (!VAR_9)
  return ((void*)0);

 VAR_10 = FUNC_4(VAR_9, 0, VAR_3, VAR_13, VAR_8, VAR_12);
 if (!VAR_10)
  goto out_kfree_skb;
 VAR_11 = FUNC_2(VAR_10);
 FUNC_1(VAR_11, VAR_7, VAR_8);
 return VAR_9;

out_kfree_skb:
 FUNC_0(VAR_9);
 return ((void*)0);
}
