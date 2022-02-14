
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlmsghdr {scalar_t__ nlmsg_type; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (char*,scalar_t__,char*) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_1)
{
 struct nlmsghdr *VAR_2 = FUNC_1(VAR_1);
 char *VAR_3 = FUNC_0(VAR_2);

 if (VAR_2->nlmsg_type != VAR_0 && FUNC_3())
  FUNC_2("type=%d %s\n", VAR_2->nlmsg_type, VAR_3);
}
