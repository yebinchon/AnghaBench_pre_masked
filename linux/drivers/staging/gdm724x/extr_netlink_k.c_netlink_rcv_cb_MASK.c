
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct nlmsghdr {scalar_t__ nlmsg_len; int nlmsg_type; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (struct nlmsghdr*) ;
 int FUNC_1 (struct nlmsghdr*) ;
 int FUNC_2 (struct nlmsghdr*) ;
 scalar_t__ VAR_2 ;
 struct net_device* FUNC_3 (int *,int) ;
 int FUNC_4 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_5 (int*,int ,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct net_device*,int ,void*,int ) ;

__attribute__((used)) static void FUNC_8(struct sk_buff *VAR_4)
{
 struct nlmsghdr *VAR_5;
 struct net_device *VAR_6;
 u32 VAR_7;
 void *VAR_8;
 int VAR_9;

 if (!&FUNC_7) {
  FUNC_6("nl cb - unregistered\n");
  return;
 }

 if (VAR_4->len < VAR_2) {
  FUNC_6("nl cb - invalid skb length\n");
  return;
 }

 VAR_5 = (struct nlmsghdr *)VAR_4->data;

 if (VAR_4->len < VAR_5->nlmsg_len || VAR_5->nlmsg_len > VAR_1) {
  FUNC_6("nl cb - invalid length (%d,%d)\n",
         VAR_4->len, VAR_5->nlmsg_len);
  return;
 }

 FUNC_5(&VAR_9, FUNC_1(VAR_5), VAR_0);
 VAR_8 = FUNC_0(VAR_5);
 VAR_7 = FUNC_2(VAR_5);

 VAR_6 = FUNC_3(&VAR_3, VAR_9);
 if (VAR_6) {
  FUNC_7(VAR_6, VAR_5->nlmsg_type, VAR_8, VAR_7);
  FUNC_4(VAR_6);
 } else {
  FUNC_6("nl cb - dev (%d) not found\n", VAR_9);
 }
}
