
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct nlmsghdr {int dummy; } ;
struct ndmsg {int ndm_state; int ndm_ifindex; scalar_t__ ndm_type; int ndm_flags; scalar_t__ ndm_pad2; scalar_t__ ndm_pad1; int ndm_family; } ;
struct fdb_dump_entry {int type; int mac_addr; } ;
struct ethsw_dump_ctx {scalar_t__ idx; int skb; TYPE_3__* dev; TYPE_2__* cb; } ;
struct TYPE_8__ {int portid; } ;
struct TYPE_7__ {int ifindex; } ;
struct TYPE_6__ {scalar_t__* args; TYPE_1__* nlh; int skb; } ;
struct TYPE_5__ {int nlmsg_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,struct nlmsghdr*) ;
 struct ndmsg* FUNC_3 (struct nlmsghdr*) ;
 int FUNC_4 (int ,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_5 (int ,int ,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct fdb_dump_entry *VAR_10,
        struct ethsw_dump_ctx *VAR_11)
{
 int VAR_12 = VAR_10->type & VAR_1;
 u32 VAR_13 = FUNC_0(VAR_11->cb->skb).portid;
 u32 VAR_14 = VAR_11->cb->nlh->nlmsg_seq;
 struct nlmsghdr *VAR_15;
 struct ndmsg *VAR_16;

 if (VAR_11->idx < VAR_11->cb->args[2])
  goto skip;

 VAR_15 = FUNC_5(VAR_11->skb, VAR_13, VAR_14, VAR_9,
   sizeof(*VAR_16), VAR_5);
 if (!VAR_15)
  return -VAR_2;

 VAR_16 = FUNC_3(VAR_15);
 VAR_16->ndm_family = VAR_0;
 VAR_16->ndm_pad1 = 0;
 VAR_16->ndm_pad2 = 0;
 VAR_16->ndm_flags = VAR_6;
 VAR_16->ndm_type = 0;
 VAR_16->ndm_ifindex = VAR_11->dev->ifindex;
 VAR_16->ndm_state = VAR_12 ? VAR_8 : VAR_7;

 if (FUNC_1(VAR_11->skb, VAR_4, VAR_3, VAR_10->mac_addr))
  goto nla_put_failure;

 FUNC_4(VAR_11->skb, VAR_15);

skip:
 VAR_11->idx++;
 return 0;

nla_put_failure:
 FUNC_2(VAR_11->skb, VAR_15);
 return -VAR_2;
}
