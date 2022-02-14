
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct sk_buff {int len; } ;
struct psample_group {int dummy; } ;
struct mlxsw_sp_port {TYPE_3__* sample; TYPE_2__* dev; } ;
struct mlxsw_sp {TYPE_1__* bus_info; struct mlxsw_sp_port** ports; } ;
struct TYPE_6__ {int rate; int psample_group; int trunc_size; scalar_t__ truncate; } ;
struct TYPE_5__ {int ifindex; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,char*,size_t) ;
 int FUNC_2 (struct psample_group*,struct sk_buff*,int ,int ,int ,int ) ;
 struct psample_group* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct sk_buff *VAR_0, u8 VAR_1,
          void *VAR_2)
{
 struct mlxsw_sp *VAR_3 = VAR_2;
 struct mlxsw_sp_port *VAR_4 = VAR_3->ports[VAR_1];
 struct psample_group *VAR_5;
 u32 VAR_6;

 if (FUNC_6(!VAR_4)) {
  FUNC_1(VAR_3->bus_info->dev, "Port %d: sample skb received for non-existent port\n",
         VAR_1);
  goto out;
 }
 if (FUNC_6(!VAR_4->sample)) {
  FUNC_1(VAR_3->bus_info->dev, "Port %d: sample skb received on unsupported port\n",
         VAR_1);
  goto out;
 }

 VAR_6 = VAR_4->sample->truncate ?
    VAR_4->sample->trunc_size : VAR_0->len;

 FUNC_4();
 VAR_5 = FUNC_3(VAR_4->sample->psample_group);
 if (!VAR_5)
  goto out_unlock;
 FUNC_2(VAR_5, VAR_0, VAR_6,
         VAR_4->dev->ifindex, 0,
         VAR_4->sample->rate);
out_unlock:
 FUNC_5();
out:
 FUNC_0(VAR_0);
}
