
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct tcphdr {int seq; } ;
struct sk_buff {int dummy; } ;
struct ipv6hdr {scalar_t__ payload_len; } ;
struct iphdr {int version; int id; scalar_t__ check; scalar_t__ tot_len; } ;
struct efx_tx_queue {int tso_version; int insert_count; } ;
struct efx_tx_buffer {int option; scalar_t__ unmap_len; scalar_t__ len; void* flags; } ;
struct TYPE_2__ {int gso_size; } ;


 int FUNC_0 (int ,int ,int,int ,int ,int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int,int ,int ,int ,int ,int ,scalar_t__,int ,int) ;
 void* VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int,char*,int) ;
 struct efx_tx_buffer* FUNC_4 (struct efx_tx_queue*) ;
 struct iphdr* FUNC_5 (struct sk_buff*) ;
 struct ipv6hdr* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 (struct sk_buff*) ;
 struct tcphdr* FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct efx_tx_queue *VAR_11,
    struct sk_buff *VAR_12,
    bool *VAR_13)
{
 struct efx_tx_buffer *VAR_14;
 struct tcphdr *VAR_15;
 struct iphdr *VAR_16;

 u16 VAR_17;
 u32 VAR_18;
 u32 VAR_19;

 FUNC_2(VAR_11->tso_version != 2);

 VAR_19 = FUNC_9(VAR_12)->gso_size;

 if (FUNC_11(VAR_19 < 4)) {
  FUNC_3(1, "MSS of %u is too small for TSO v2\n", VAR_19);
  return -VAR_1;
 }

 VAR_16 = FUNC_5(VAR_12);
 if (VAR_16->version == 4) {

  VAR_16->tot_len = 0;
  VAR_16->check = 0;
  VAR_17 = FUNC_8(VAR_16->id);
 } else {

  struct ipv6hdr *VAR_20 = FUNC_6(VAR_12);

  VAR_20->payload_len = 0;
  VAR_17 = 0;
 }

 VAR_15 = FUNC_10(VAR_12);
 VAR_18 = FUNC_7(VAR_15->seq);

 VAR_14 = FUNC_4(VAR_11);

 VAR_14->flags = VAR_0;
 VAR_14->len = 0;
 VAR_14->unmap_len = 0;
 FUNC_1(VAR_14->option,
   VAR_5, 1,
   VAR_6, VAR_2,
   VAR_8,
   VAR_3,
   VAR_7, VAR_17,
   VAR_10, VAR_18
   );
 ++VAR_11->insert_count;

 VAR_14 = FUNC_4(VAR_11);

 VAR_14->flags = VAR_0;
 VAR_14->len = 0;
 VAR_14->unmap_len = 0;
 FUNC_0(VAR_14->option,
   VAR_5, 1,
   VAR_6, VAR_2,
   VAR_8,
   VAR_4,
   VAR_9, VAR_19
   );
 ++VAR_11->insert_count;

 return 0;
}
