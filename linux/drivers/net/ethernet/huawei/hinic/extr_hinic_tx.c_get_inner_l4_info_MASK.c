
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union hinic_l4 {int hdr; TYPE_1__* tcp; } ;
typedef int u8 ;
typedef int u32 ;
struct udphdr {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sctphdr {int dummy; } ;
typedef enum hinic_offload_type { ____Placeholder_hinic_offload_type } hinic_offload_type ;
typedef enum hinic_l4_offload_type { ____Placeholder_hinic_l4_offload_type } hinic_l4_offload_type ;
struct TYPE_2__ {int doff; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(struct sk_buff *VAR_5, union hinic_l4 *VAR_6,
         enum hinic_offload_type VAR_7, u8 VAR_8,
         enum hinic_l4_offload_type *VAR_9,
         u32 *VAR_10, u32 *VAR_11)
{
 *VAR_9 = VAR_0;
 *VAR_11 = 0;
 *VAR_10 = 0;

 switch (VAR_8) {
 case 129:
  *VAR_9 = VAR_2;

  *VAR_10 = VAR_6->tcp->doff * 4;
  *VAR_11 = *VAR_10 + FUNC_0(VAR_6->hdr, VAR_5);
  break;

 case 128:
  *VAR_9 = VAR_4;
  *VAR_10 = sizeof(struct udphdr);
  *VAR_11 = FUNC_0(VAR_6->hdr, VAR_5);
  break;

 case 130:

  if (VAR_7 != VAR_3)
   break;

  *VAR_9 = VAR_1;
  *VAR_10 = sizeof(struct sctphdr);
  *VAR_11 = FUNC_0(VAR_6->hdr, VAR_5);
  break;

 default:
  break;
 }
}
