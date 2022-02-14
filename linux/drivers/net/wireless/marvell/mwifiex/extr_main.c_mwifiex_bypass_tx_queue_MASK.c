
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct mwifiex_private {TYPE_1__* adapter; } ;
struct ethhdr {int h_proto; } ;
struct TYPE_2__ {int fw_cap_info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct mwifiex_private*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_1__*,int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static bool
FUNC_5(struct mwifiex_private *VAR_4,
   struct sk_buff *VAR_5)
{
 struct ethhdr *VAR_6 = (struct ethhdr *)VAR_5->data;

 if (FUNC_4(VAR_6->h_proto) == VAR_1 ||
     FUNC_3(VAR_5) ||
     (FUNC_0(VAR_4) == VAR_3 &&
      FUNC_1(VAR_4->adapter->fw_cap_info) &&
      (FUNC_4(VAR_6->h_proto) == VAR_2))) {
  FUNC_2(VAR_4->adapter, VAR_0,
       "bypass txqueue; eth type %#x, mgmt %d\n",
        FUNC_4(VAR_6->h_proto),
        FUNC_3(VAR_5));
  return 1;
 }

 return 0;
}
