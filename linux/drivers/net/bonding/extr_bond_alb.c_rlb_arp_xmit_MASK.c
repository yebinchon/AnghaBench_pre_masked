
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct slave {TYPE_2__* dev; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int rlb_update_delay_counter; } ;
struct bonding {int dev; TYPE_1__ alb_info; } ;
struct arp_pkt {scalar_t__ op_code; int ip_src; int mac_src; } ;
struct TYPE_4__ {char* name; int addr_len; int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct arp_pkt* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct bonding*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,char*) ;
 struct slave* FUNC_5 (struct sk_buff*,struct bonding*) ;
 int FUNC_6 (struct bonding*,int ) ;

__attribute__((used)) static struct slave *FUNC_7(struct sk_buff *VAR_3, struct bonding *VAR_4)
{
 struct arp_pkt *VAR_5 = FUNC_0(VAR_3);
 struct slave *VAR_6 = ((void*)0);




 if (!FUNC_2(VAR_4, VAR_5->mac_src))
  return ((void*)0);

 if (VAR_5->op_code == FUNC_3(VAR_0)) {

  VAR_6 = FUNC_5(VAR_3, VAR_4);
  if (VAR_6)
   FUNC_1(VAR_5->mac_src, VAR_6->dev->dev_addr,
       VAR_6->dev->addr_len);
  FUNC_4(VAR_4->dev, "(slave %s): Server sent ARP Reply packet\n",
      VAR_6 ? VAR_6->dev->name : "NULL");
 } else if (VAR_5->op_code == FUNC_3(VAR_1)) {





  VAR_6 = FUNC_5(VAR_3, VAR_4);




  VAR_4->alb_info.rlb_update_delay_counter = VAR_2;






  FUNC_6(VAR_4, VAR_5->ip_src);
  FUNC_4(VAR_4->dev, "(slave %s): Server sent ARP Request packet\n",
      VAR_6 ? VAR_6->dev->name : "NULL");
 }

 return VAR_6;
}
