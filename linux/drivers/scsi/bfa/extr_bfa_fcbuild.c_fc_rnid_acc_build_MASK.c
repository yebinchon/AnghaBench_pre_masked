
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct fchs_s {int dummy; } ;
struct fc_rnid_general_topology_data_s {int dummy; } ;
struct fc_rnid_common_id_data_s {int dummy; } ;
struct TYPE_2__ {int els_code; } ;
struct fc_rnid_acc_s {int common_id_data_length; int specific_id_data_length; struct fc_rnid_general_topology_data_s gen_topology_data; struct fc_rnid_common_id_data_s common_id_data; scalar_t__ node_id_data_format; TYPE_1__ els_cmd; } ;
typedef int __be16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct fchs_s*,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (struct fc_rnid_acc_s*,int ,int) ;

u16
FUNC_2(struct fchs_s *VAR_2, struct fc_rnid_acc_s *VAR_3, u32 VAR_4,
    u32 VAR_5, __be16 VAR_6, u32 VAR_7,
    struct fc_rnid_common_id_data_s *VAR_8,
    struct fc_rnid_general_topology_data_s *VAR_9)
{
 FUNC_1(VAR_3, 0, sizeof(struct fc_rnid_acc_s));

 FUNC_0(VAR_2, VAR_4, VAR_5, VAR_6);

 VAR_3->els_cmd.els_code = VAR_0;
 VAR_3->node_id_data_format = VAR_7;
 VAR_3->common_id_data_length =
   sizeof(struct fc_rnid_common_id_data_s);
 VAR_3->common_id_data = *VAR_8;

 if (VAR_7 == VAR_1) {
  VAR_3->specific_id_data_length =
   sizeof(struct fc_rnid_general_topology_data_s);
  VAR_3->gen_topology_data = *VAR_9;
  return sizeof(struct fc_rnid_acc_s);
 } else {
  return sizeof(struct fc_rnid_acc_s) -
   sizeof(struct fc_rnid_general_topology_data_s);
 }

}
