
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * arp_targets; } ;
struct bonding {int dev; TYPE_1__ params; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct bonding*,int,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,int *) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static int FUNC_5(struct bonding *VAR_2, __be32 VAR_3)
{
 __be32 *VAR_4 = VAR_2->params.arp_targets;
 int VAR_5;

 if (!FUNC_2(VAR_3)) {
  FUNC_4(VAR_2->dev, "invalid ARP target %pI4 specified for addition\n",
      &VAR_3);
  return -VAR_0;
 }

 if (FUNC_1(VAR_4, VAR_3) != -1) {
  FUNC_4(VAR_2->dev, "ARP target %pI4 is already present\n",
      &VAR_3);
  return -VAR_0;
 }

 VAR_5 = FUNC_1(VAR_4, 0);
 if (VAR_5 == -1) {
  FUNC_4(VAR_2->dev, "ARP target table is full!\n");
  return -VAR_0;
 }

 FUNC_3(VAR_2->dev, "Adding ARP target %pI4\n", &VAR_3);

 FUNC_0(VAR_2, VAR_5, VAR_3, VAR_1);

 return 0;
}
