
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int u32 ;
struct sk_buff {scalar_t__ len; } ;
struct nlmsghdr {int nlmsg_len; int nlmsg_type; } ;
struct iscsi_uevent {scalar_t__ type; int iferror; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct sk_buff*,struct nlmsghdr*,scalar_t__*) ;
 int FUNC_3 (int ,int ,struct iscsi_uevent*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct iscsi_uevent* FUNC_6 (struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_7 (struct sk_buff*) ;
 int VAR_6 ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static void
FUNC_9(struct sk_buff *VAR_7)
{
 u32 VAR_8 = FUNC_0(VAR_7).portid;

 FUNC_4(&VAR_6);
 while (VAR_7->len >= VAR_5) {
  int VAR_9;
  uint32_t VAR_10;
  struct nlmsghdr *VAR_11;
  struct iscsi_uevent *VAR_12;
  uint32_t VAR_13;

  VAR_11 = FUNC_7(VAR_7);
  if (VAR_11->nlmsg_len < sizeof(*VAR_11) + sizeof(*VAR_12) ||
      VAR_7->len < VAR_11->nlmsg_len) {
   break;
  }

  VAR_12 = FUNC_6(VAR_11);
  VAR_10 = FUNC_1(VAR_11->nlmsg_len);
  if (VAR_10 > VAR_7->len)
   VAR_10 = VAR_7->len;

  VAR_9 = FUNC_2(VAR_7, VAR_11, &VAR_13);
  if (VAR_9) {
   VAR_12->type = VAR_2;
   VAR_12->iferror = VAR_9;
  }
  do {






   if (VAR_12->type == VAR_4 && !VAR_9)
    break;
   if (VAR_12->type == VAR_3 && !VAR_9)
    break;
   VAR_9 = FUNC_3(VAR_8, VAR_11->nlmsg_type,
        VAR_12, sizeof(*VAR_12));
  } while (VAR_9 < 0 && VAR_9 != -VAR_0 && VAR_9 != -VAR_1);
  FUNC_8(VAR_7, VAR_10);
 }
 FUNC_5(&VAR_6);
}
