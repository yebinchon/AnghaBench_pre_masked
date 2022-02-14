
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slave {int dev; } ;
struct sk_buff {scalar_t__ protocol; } ;
struct bonding {int dev; } ;
struct arp_pkt {scalar_t__ op_code; } ;
typedef int _arp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct bonding*,struct arp_pkt*) ;
 int FUNC_3 (struct bonding*,struct arp_pkt*) ;
 struct arp_pkt* FUNC_4 (struct sk_buff const*,int ,int,struct arp_pkt*) ;
 int FUNC_5 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_6(const struct sk_buff *VAR_3, struct bonding *VAR_4,
   struct slave *VAR_5)
{
 struct arp_pkt *VAR_6, VAR_7;

 if (VAR_3->protocol != FUNC_0(VAR_1))
  goto out;

 VAR_6 = FUNC_4(VAR_3, 0, sizeof(VAR_7), &VAR_7);
 if (!VAR_6)
  goto out;
 FUNC_2(VAR_4, VAR_6);

 if (VAR_6->op_code == FUNC_1(VAR_0)) {

  FUNC_3(VAR_4, VAR_6);
  FUNC_5(VAR_4->dev, VAR_5->dev, "Server received an ARP Reply from client\n");
 }
out:
 return VAR_2;
}
