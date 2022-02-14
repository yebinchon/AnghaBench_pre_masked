
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct mwifiex_private {int dummy; } ;
struct mwifiex_ie_types_header {int dummy; } ;
struct mwifiex_ds_coalesce_cfg {size_t num_of_rules; TYPE_3__* rule; } ;
struct host_cmd_ds_coalesce_cfg {struct coalesce_receive_filt_rule* rule; void* num_of_rules; void* action; } ;
struct TYPE_5__ {struct host_cmd_ds_coalesce_cfg coalesce_cfg; } ;
struct host_cmd_ds_command {void* size; void* command; TYPE_1__ params; } ;
struct TYPE_8__ {void* len; void* type; } ;
struct coalesce_receive_filt_rule {size_t num_of_fields; struct coalesce_filt_field_param* params; TYPE_4__ header; int pkt_type; void* max_coalescing_delay; } ;
struct coalesce_filt_field_param {int operand_len; int operand_byte_stream; void* offset; int operation; } ;
struct TYPE_7__ {size_t max_coalescing_delay; size_t num_of_fields; TYPE_2__* params; int pkt_type; } ;
struct TYPE_6__ {size_t offset; int operand_byte_stream; int operand_len; int operation; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 void* FUNC_0 (size_t) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void**,int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct mwifiex_private *VAR_3,
    struct host_cmd_ds_command *VAR_4,
    u16 VAR_5, void *VAR_6)
{
 struct host_cmd_ds_coalesce_cfg *VAR_7 =
      &VAR_4->params.coalesce_cfg;
 struct mwifiex_ds_coalesce_cfg *VAR_8 = VAR_6;
 struct coalesce_filt_field_param *VAR_9;
 u16 VAR_10, VAR_11, VAR_12;
 struct coalesce_receive_filt_rule *VAR_13;

 VAR_4->command = FUNC_0(VAR_0);
 VAR_4->size = FUNC_0(VAR_1);

 VAR_7->action = FUNC_0(VAR_5);
 VAR_7->num_of_rules = FUNC_0(VAR_8->num_of_rules);
 VAR_13 = VAR_7->rule;

 for (VAR_10 = 0; VAR_10 < VAR_8->num_of_rules; VAR_10++) {
  VAR_13->header.type = FUNC_0(VAR_2);
  VAR_13->max_coalescing_delay =
   FUNC_0(VAR_8->rule[VAR_10].max_coalescing_delay);
  VAR_13->pkt_type = VAR_8->rule[VAR_10].pkt_type;
  VAR_13->num_of_fields = VAR_8->rule[VAR_10].num_of_fields;

  VAR_12 = 0;

  VAR_9 = VAR_13->params;
  for (VAR_11 = 0; VAR_11 < VAR_8->rule[VAR_10].num_of_fields; VAR_11++) {
   VAR_9->operation = VAR_8->rule[VAR_10].params[VAR_11].operation;
   VAR_9->operand_len =
     VAR_8->rule[VAR_10].params[VAR_11].operand_len;
   VAR_9->offset =
    FUNC_0(VAR_8->rule[VAR_10].params[VAR_11].offset);
   FUNC_3(VAR_9->operand_byte_stream,
          VAR_8->rule[VAR_10].params[VAR_11].operand_byte_stream,
          VAR_9->operand_len);

   VAR_12 += sizeof(struct coalesce_filt_field_param);

   VAR_9++;
  }





  VAR_13->header.len = FUNC_0(VAR_12 + sizeof(u16) +
            sizeof(u8) + sizeof(u8));


  FUNC_2(&VAR_4->size,
           FUNC_1(VAR_13->header.len) +
           sizeof(struct mwifiex_ie_types_header));

  VAR_13 = (void *)((u8 *)VAR_13->params + VAR_12);
 }


 FUNC_2(&VAR_4->size, sizeof(u16) + sizeof(u16));

 return 0;
}
