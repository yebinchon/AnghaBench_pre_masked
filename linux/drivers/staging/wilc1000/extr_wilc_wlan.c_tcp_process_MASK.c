
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcp_ack_filter {int tcp_session; TYPE_1__* ack_session_info; } ;
struct wilc_vif {struct tcp_ack_filter ack_filter; struct wilc* wilc; } ;
struct wilc {int txq_spinlock; } ;
struct txq_entry_t {void* buffer; } ;
struct tcphdr {int doff; int ack_seq; int seq; } ;
struct net_device {int dummy; } ;
struct iphdr {scalar_t__ protocol; int ihl; int tot_len; } ;
struct ethhdr {scalar_t__ h_proto; } ;
struct TYPE_2__ {int seq_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wilc_vif*,int,int,struct txq_entry_t*) ;
 int FUNC_1 (struct wilc_vif*,int ,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 struct wilc_vif* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct wilc_vif*,int,int) ;

__attribute__((used)) static inline void FUNC_9(struct net_device *VAR_4, struct txq_entry_t *VAR_5)
{
 void *VAR_6 = VAR_5->buffer;
 const struct ethhdr *VAR_7 = VAR_6;
 int VAR_8;
 unsigned long VAR_9;
 struct wilc_vif *VAR_10 = FUNC_3(VAR_4);
 struct wilc *VAR_11 = VAR_10->wilc;
 struct tcp_ack_filter *VAR_12 = &VAR_10->ack_filter;
 const struct iphdr *VAR_13;
 const struct tcphdr *VAR_14;
 u32 VAR_15, VAR_16, VAR_17;

 FUNC_6(&VAR_11->txq_spinlock, VAR_9);

 if (VAR_7->h_proto != FUNC_2(VAR_1))
  goto out;

 VAR_13 = VAR_6 + VAR_0;

 if (VAR_13->protocol != VAR_2)
  goto out;

 VAR_15 = VAR_13->ihl << 2;
 VAR_14 = VAR_6 + VAR_0 + VAR_15;
 VAR_16 = FUNC_5(VAR_13->tot_len);

 VAR_17 = VAR_14->doff << 2;
 if (VAR_16 == (VAR_15 + VAR_17)) {
  u32 VAR_18, VAR_19;

  VAR_18 = FUNC_4(VAR_14->seq);
  VAR_19 = FUNC_4(VAR_14->ack_seq);
  for (VAR_8 = 0; VAR_8 < VAR_12->tcp_session; VAR_8++) {
   u32 VAR_20 = VAR_12->ack_session_info[VAR_8].seq_num;

   if (VAR_8 < 2 * VAR_3 &&
       VAR_20 == VAR_18) {
    FUNC_8(VAR_10, VAR_8, VAR_19);
    break;
   }
  }
  if (VAR_8 == VAR_12->tcp_session)
   FUNC_1(VAR_10, 0, 0, VAR_18);

  FUNC_0(VAR_10, VAR_19, VAR_8, VAR_5);
 }

out:
 FUNC_7(&VAR_11->txq_spinlock, VAR_9);
}
