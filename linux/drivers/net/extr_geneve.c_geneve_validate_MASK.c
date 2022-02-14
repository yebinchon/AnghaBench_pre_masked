
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
typedef enum ifla_geneve_df { ____Placeholder_ifla_geneve_df } ifla_geneve_df ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (struct netlink_ext_ack*,struct nlattr*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nlattr*) ;
 scalar_t__ FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr*) ;
 scalar_t__ FUNC_6 (struct nlattr*) ;

__attribute__((used)) static int FUNC_7(struct nlattr *VAR_9[], struct nlattr *VAR_10[],
      struct netlink_ext_ack *VAR_11)
{
 if (VAR_9[VAR_6]) {
  if (FUNC_6(VAR_9[VAR_6]) != VAR_3) {
   FUNC_1(VAR_11, VAR_9[VAR_6],
         "Provided link layer address is not Ethernet");
   return -VAR_1;
  }

  if (!FUNC_2(FUNC_3(VAR_9[VAR_6]))) {
   FUNC_1(VAR_11, VAR_9[VAR_6],
         "Provided Ethernet address is not unicast");
   return -VAR_0;
  }
 }

 if (!VAR_10) {
  FUNC_0(VAR_11,
          "Not enough attributes provided to perform the operation");
  return -VAR_1;
 }

 if (VAR_10[VAR_8]) {
  __u32 VAR_12 = FUNC_4(VAR_10[VAR_8]);

  if (VAR_12 >= VAR_5) {
   FUNC_1(VAR_11, VAR_10[VAR_8],
         "Geneve ID must be lower than 16777216");
   return -VAR_2;
  }
 }

 if (VAR_10[VAR_7]) {
  enum ifla_geneve_df VAR_13 = FUNC_5(VAR_10[VAR_7]);

  if (VAR_13 < 0 || VAR_13 > VAR_4) {
   FUNC_1(VAR_11, VAR_9[VAR_7],
         "Invalid DF attribute");
   return -VAR_1;
  }
 }

 return 0;
}
