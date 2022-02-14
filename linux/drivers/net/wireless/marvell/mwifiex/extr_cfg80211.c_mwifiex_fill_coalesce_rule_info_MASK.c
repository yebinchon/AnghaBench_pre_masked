
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct mwifiex_private {int adapter; } ;
struct mwifiex_coalesce_rule {void* pkt_type; int num_of_fields; struct filt_field_param* params; int max_coalescing_delay; } ;
struct filt_field_param {scalar_t__ offset; void* operand_len; int operand_byte_stream; int operation; } ;
struct cfg80211_coalesce_rules {int n_patterns; scalar_t__ condition; TYPE_1__* patterns; int delay; } ;
typedef int byte_seq ;
struct TYPE_2__ {scalar_t__ pkt_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,void**,void*) ;
 int FUNC_1 (void**,int ,int) ;
 int FUNC_2 (int ,int ,char*) ;
 void* FUNC_3 (void**) ;
 int FUNC_4 (TYPE_1__*,void**,int) ;

__attribute__((used)) static int
FUNC_5(struct mwifiex_private *VAR_6,
    struct cfg80211_coalesce_rules *VAR_7,
    struct mwifiex_coalesce_rule *VAR_8)
{
 u8 VAR_9[VAR_2 + 1];
 struct filt_field_param *VAR_10;
 int VAR_11;

 VAR_8->max_coalescing_delay = VAR_7->delay;

 VAR_10 = VAR_8->params;

 for (VAR_11 = 0; VAR_11 < VAR_7->n_patterns; VAR_11++) {
  FUNC_1(VAR_9, 0, sizeof(VAR_9));
  if (!FUNC_4(&VAR_7->patterns[VAR_11],
        VAR_9,
      VAR_2)) {
   FUNC_2(VAR_6->adapter, VAR_1,
        "Pattern not supported\n");
   return -VAR_0;
  }

  if (!VAR_7->patterns[VAR_11].pkt_offset) {
   u8 VAR_12;

   VAR_12 = FUNC_3(VAR_9);
   if (VAR_12 && VAR_8->pkt_type) {
    FUNC_2(VAR_6->adapter, VAR_1,
         "Multiple packet types not allowed\n");
    return -VAR_0;
   } else if (VAR_12) {
    VAR_8->pkt_type = VAR_12;
    continue;
   }
  }

  if (VAR_7->condition == VAR_3)
   VAR_10->operation = VAR_4;
  else
   VAR_10->operation = VAR_5;

  VAR_10->operand_len = VAR_9[VAR_2];
  FUNC_0(VAR_10->operand_byte_stream, VAR_9,
         VAR_10->operand_len);
  VAR_10->offset = VAR_7->patterns[VAR_11].pkt_offset;
  VAR_10++;

  VAR_8->num_of_fields++;
 }

 if (!VAR_8->pkt_type) {
  FUNC_2(VAR_6->adapter, VAR_1,
       "Packet type can not be determined\n");
  return -VAR_0;
 }

 return 0;
}
