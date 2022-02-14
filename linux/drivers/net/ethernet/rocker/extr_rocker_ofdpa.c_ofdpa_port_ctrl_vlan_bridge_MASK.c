
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ofdpa_port {int dev; } ;
struct ofdpa_ctrl {int copy_to_cpu; int eth_dst_mask; int eth_dst; } ;
typedef enum rocker_of_dpa_table_id { ____Placeholder_rocker_of_dpa_table_id } rocker_of_dpa_table_id ;
typedef int __be16 ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct ofdpa_port*,int,int ,int ,int ,int ,int,int ,int ) ;
 int FUNC_3 (struct ofdpa_port*) ;

__attribute__((used)) static int FUNC_4(struct ofdpa_port *VAR_1,
           int VAR_2, const struct ofdpa_ctrl *VAR_3,
           __be16 VAR_4)
{
 enum rocker_of_dpa_table_id VAR_5 =
   VAR_0;
 u32 VAR_6 = FUNC_0(VAR_4, 0);
 u32 VAR_7 = 0;
 int VAR_8;

 if (!FUNC_3(VAR_1))
  return 0;

 VAR_8 = FUNC_2(VAR_1, VAR_2,
        VAR_3->eth_dst, VAR_3->eth_dst_mask,
        VAR_4, VAR_7,
        VAR_5, VAR_6, VAR_3->copy_to_cpu);

 if (VAR_8)
  FUNC_1(VAR_1->dev, "Error (%d) ctrl FLOOD\n", VAR_8);

 return VAR_8;
}
