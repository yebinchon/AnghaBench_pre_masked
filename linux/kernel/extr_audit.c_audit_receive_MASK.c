
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct nlmsghdr {int nlmsg_flags; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_3 (struct sk_buff*,struct nlmsghdr*,int,int *) ;
 struct nlmsghdr* FUNC_4 (struct sk_buff*) ;
 struct nlmsghdr* FUNC_5 (struct nlmsghdr*,int*) ;
 scalar_t__ FUNC_6 (struct nlmsghdr*,int) ;

__attribute__((used)) static void FUNC_7(struct sk_buff *VAR_1)
{
 struct nlmsghdr *VAR_2;




 int VAR_3;
 int VAR_4;

 VAR_2 = FUNC_4(VAR_1);
 VAR_3 = VAR_1->len;

 FUNC_0();
 while (FUNC_6(VAR_2, VAR_3)) {
  VAR_4 = FUNC_2(VAR_1, VAR_2);

  if (VAR_4 || (VAR_2->nlmsg_flags & VAR_0))
   FUNC_3(VAR_1, VAR_2, VAR_4, ((void*)0));

  VAR_2 = FUNC_5(VAR_2, &VAR_3);
 }
 FUNC_1();
}
