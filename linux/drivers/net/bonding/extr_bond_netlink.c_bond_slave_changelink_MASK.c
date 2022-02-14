
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {char* name; } ;
struct bonding {int dummy; } ;
struct bond_opt_value {int dummy; } ;
typedef int queue_id_str ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bonding*,int ,struct bond_opt_value*) ;
 int FUNC_1 (struct bond_opt_value*,char*) ;
 struct bonding* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (char*,int,char*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3,
     struct net_device *VAR_4,
     struct nlattr *VAR_5[], struct nlattr *VAR_6[],
     struct netlink_ext_ack *VAR_7)
{
 struct bonding *VAR_8 = FUNC_2(VAR_3);
 struct bond_opt_value VAR_9;
 int VAR_10;

 if (!VAR_6)
  return 0;

 if (VAR_6[VAR_1]) {
  u16 VAR_11 = FUNC_3(VAR_6[VAR_1]);
  char VAR_12[VAR_2 + 7];


  FUNC_4(VAR_12, sizeof(VAR_12), "%s:%u\n",
    VAR_4->name, VAR_11);
  FUNC_1(&VAR_9, VAR_12);
  VAR_10 = FUNC_0(VAR_8, VAR_0, &VAR_9);
  if (VAR_10)
   return VAR_10;
 }

 return 0;
}
