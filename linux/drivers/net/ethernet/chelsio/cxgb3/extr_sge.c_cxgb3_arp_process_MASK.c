
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tip ;
struct sk_buff {struct net_device* dev; } ;
struct TYPE_2__ {int mac_addr; } ;
struct port_info {scalar_t__ iscsi_ipv4addr; TYPE_1__ iscsic; } ;
struct net_device {int addr_len; } ;
struct arphdr {scalar_t__ ar_op; } ;
typedef int sip ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct arphdr* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,scalar_t__,struct net_device*,scalar_t__,unsigned char*,int ,unsigned char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__*,unsigned char*,int) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct port_info *VAR_3, struct sk_buff *VAR_4)
{
 struct net_device *VAR_5 = VAR_4->dev;
 struct arphdr *VAR_6;
 unsigned char *VAR_7;
 unsigned char *VAR_8;
 __be32 VAR_9, VAR_10;

 if (!VAR_5)
  return;

 FUNC_4(VAR_4);
 VAR_6 = FUNC_0(VAR_4);

 if (VAR_6->ar_op != FUNC_2(VAR_1))
  return;

 VAR_7 = (unsigned char *)(VAR_6 + 1);
 VAR_8 = VAR_7;
 VAR_7 += VAR_5->addr_len;
 FUNC_3(&VAR_9, VAR_7, sizeof(VAR_9));
 VAR_7 += sizeof(VAR_9);
 VAR_7 += VAR_5->addr_len;
 FUNC_3(&VAR_10, VAR_7, sizeof(VAR_10));

 if (VAR_10 != VAR_3->iscsi_ipv4addr)
  return;

 FUNC_1(VAR_0, VAR_2, VAR_9, VAR_5, VAR_10, VAR_8,
   VAR_3->iscsic.mac_addr, VAR_8);

}
