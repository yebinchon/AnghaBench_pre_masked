
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bonding {int dev; } ;
struct bond_opt_value {char* string; scalar_t__ value; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct bonding*,scalar_t__) ;
 int FUNC_1 (struct bonding*,scalar_t__) ;
 int FUNC_2 (char*,int,int *,int,int *) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int FUNC_4(struct bonding *VAR_1,
       const struct bond_opt_value *VAR_2)
{
 int VAR_3 = -VAR_0;
 __be32 VAR_4;

 if (VAR_2->string) {
  if (!FUNC_2(VAR_2->string+1, -1, (u8 *)&VAR_4, -1, ((void*)0))) {
   FUNC_3(VAR_1->dev, "invalid ARP target %pI4 specified\n",
       &VAR_4);
   return VAR_3;
  }
  if (VAR_2->string[0] == '+')
   VAR_3 = FUNC_0(VAR_1, VAR_4);
  else if (VAR_2->string[0] == '-')
   VAR_3 = FUNC_1(VAR_1, VAR_4);
  else
   FUNC_3(VAR_1->dev, "no command found in arp_ip_targets file - use +<addr> or -<addr>\n");
 } else {
  VAR_4 = VAR_2->value;
  VAR_3 = FUNC_0(VAR_1, VAR_4);
 }

 return VAR_3;
}
