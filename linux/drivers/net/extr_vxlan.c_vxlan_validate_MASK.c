
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct ifla_vxlan_port_range {int low; int high; } ;
typedef enum ifla_vxlan_df { ____Placeholder_ifla_vxlan_df } ifla_vxlan_df ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (struct netlink_ext_ack*,struct nlattr*,char*) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (struct ifla_vxlan_port_range*) ;
 struct ifla_vxlan_port_range* FUNC_3 (struct nlattr*) ;
 scalar_t__ FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr*) ;
 scalar_t__ FUNC_6 (struct nlattr*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct nlattr *VAR_13[], struct nlattr *VAR_14[],
     struct netlink_ext_ack *VAR_15)
{
 if (VAR_13[VAR_6]) {
  if (FUNC_6(VAR_13[VAR_6]) != VAR_3) {
   FUNC_1(VAR_15, VAR_13[VAR_6],
         "Provided link layer address is not Ethernet");
   return -VAR_1;
  }

  if (!FUNC_2(FUNC_3(VAR_13[VAR_6]))) {
   FUNC_1(VAR_15, VAR_13[VAR_6],
         "Provided Ethernet address is not unicast");
   return -VAR_0;
  }
 }

 if (VAR_13[VAR_7]) {
  u32 VAR_16 = FUNC_4(VAR_13[VAR_7]);

  if (VAR_16 < VAR_5 || VAR_16 > VAR_4) {
   FUNC_1(VAR_15, VAR_13[VAR_7],
         "MTU must be between 68 and 65535");
   return -VAR_1;
  }
 }

 if (!VAR_14) {
  FUNC_0(VAR_15,
          "Required attributes not provided to perform the operation");
  return -VAR_1;
 }

 if (VAR_14[VAR_9]) {
  u32 VAR_17 = FUNC_4(VAR_14[VAR_9]);

  if (VAR_17 >= VAR_12) {
   FUNC_1(VAR_15, VAR_13[VAR_9],
         "VXLAN ID must be lower than 16777216");
   return -VAR_2;
  }
 }

 if (VAR_14[VAR_10]) {
  const struct ifla_vxlan_port_range *VAR_18
   = FUNC_3(VAR_14[VAR_10]);

  if (FUNC_7(VAR_18->high) < FUNC_7(VAR_18->low)) {
   FUNC_1(VAR_15, VAR_13[VAR_10],
         "Invalid source port range");
   return -VAR_1;
  }
 }

 if (VAR_14[VAR_8]) {
  enum ifla_vxlan_df VAR_19 = FUNC_5(VAR_14[VAR_8]);

  if (VAR_19 < 0 || VAR_19 > VAR_11) {
   FUNC_1(VAR_15, VAR_13[VAR_8],
         "Invalid DF attribute");
   return -VAR_1;
  }
 }

 return 0;
}
