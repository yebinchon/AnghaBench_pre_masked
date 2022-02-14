
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_dump {int len; int flag; int version; } ;
struct bnx2x {int dump_preset_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct net_device*,int ) ;
 struct bnx2x* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
          struct ethtool_dump *VAR_3)
{
 struct bnx2x *VAR_4 = FUNC_2(VAR_2);

 VAR_3->version = VAR_0;
 VAR_3->flag = VAR_4->dump_preset_idx;

 VAR_3->len = FUNC_1(VAR_2, VAR_4->dump_preset_idx);
 FUNC_0(VAR_1, "Get dump preset %d length=%d\n",
    VAR_4->dump_preset_idx, VAR_3->len);
 return 0;
}
