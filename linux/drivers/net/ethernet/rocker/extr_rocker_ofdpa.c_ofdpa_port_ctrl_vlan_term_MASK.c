
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ofdpa_port {int dev; int pport; int internal_vlan_id; } ;
struct ofdpa_ctrl {int copy_to_cpu; int eth_dst_mask; int eth_dst; int eth_type; } ;
typedef int __be16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct ofdpa_port*,int ,int,int ,int ,int ,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct ofdpa_port *VAR_0, int VAR_1,
         const struct ofdpa_ctrl *VAR_2, __be16 VAR_3)
{
 u32 VAR_4 = 0xffffffff;
 __be16 VAR_5 = FUNC_0(0xffff);
 int VAR_6;

 if (FUNC_2(VAR_3) == 0)
  VAR_3 = VAR_0->internal_vlan_id;

 VAR_6 = FUNC_3(VAR_0, VAR_0->pport, VAR_4,
          VAR_2->eth_type, VAR_2->eth_dst,
          VAR_2->eth_dst_mask, VAR_3,
          VAR_5, VAR_2->copy_to_cpu,
          VAR_1);

 if (VAR_6)
  FUNC_1(VAR_0->dev, "Error (%d) ctrl term\n", VAR_6);

 return VAR_6;
}
