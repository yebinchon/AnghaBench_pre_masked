
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct nlmsghdr {int dummy; } ;
struct genlmsghdr {int dummy; } ;


 void* FUNC_0 (struct genlmsghdr*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (int *,struct sk_buff*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct genlmsghdr* FUNC_3 (struct nlmsghdr*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_2)
{
 struct genlmsghdr *VAR_3 = FUNC_3((struct nlmsghdr *)VAR_2->data);
 void *VAR_4 = FUNC_0(VAR_3);

 FUNC_1(VAR_2, VAR_4);

 return FUNC_2(&VAR_0, VAR_2, VAR_1);
}
