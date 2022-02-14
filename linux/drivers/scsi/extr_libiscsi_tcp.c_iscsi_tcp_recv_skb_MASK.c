
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct skb_seq_state {int dummy; } ;
struct sk_buff {int len; } ;
struct iscsi_segment {scalar_t__ total_copied; scalar_t__ total_size; scalar_t__ copied; scalar_t__ size; int (* done ) (struct iscsi_tcp_conn*,struct iscsi_segment*) ;} ;
struct TYPE_2__ {struct iscsi_segment segment; } ;
struct iscsi_tcp_conn {TYPE_1__ in; } ;
struct iscsi_conn {unsigned int rxdata_octets; int suspend_rx; int last_recv; struct iscsi_tcp_conn* dd_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct iscsi_conn*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct iscsi_conn*,int) ;
 int FUNC_3 (struct iscsi_tcp_conn*,struct iscsi_segment*,int const*,unsigned int) ;
 int VAR_4 ;
 int FUNC_4 (struct skb_seq_state*) ;
 int FUNC_5 (struct sk_buff*,unsigned int,int,struct skb_seq_state*) ;
 unsigned int FUNC_6 (unsigned int,int const**,struct skb_seq_state*) ;
 int FUNC_7 (struct iscsi_tcp_conn*,struct iscsi_segment*) ;
 scalar_t__ FUNC_8 (int ) ;

int FUNC_9(struct iscsi_conn *VAR_5, struct sk_buff *VAR_6,
         unsigned int VAR_7, bool VAR_8, int *VAR_9)
{
 struct iscsi_tcp_conn *VAR_10 = VAR_5->dd_data;
 struct iscsi_segment *VAR_11 = &VAR_10->in.segment;
 struct skb_seq_state VAR_12;
 unsigned int VAR_13 = 0;
 int VAR_14 = 0;

 FUNC_1(VAR_5, "in %d bytes\n", VAR_6->len - VAR_7);





 VAR_5->last_recv = VAR_4;

 if (FUNC_8(VAR_5->suspend_rx)) {
  FUNC_1(VAR_5, "Rx suspended!\n");
  *VAR_9 = VAR_3;
  return 0;
 }

 if (VAR_8) {
  VAR_11->total_copied = VAR_11->total_size;
  goto segment_done;
 }

 FUNC_5(VAR_6, VAR_7, VAR_6->len, &VAR_12);
 while (1) {
  unsigned int VAR_15;
  const u8 *VAR_16;

  VAR_15 = FUNC_6(VAR_13, &VAR_16, &VAR_12);
  if (VAR_15 == 0) {
   FUNC_1(VAR_5, "no more data avail. Consumed %d\n",
          VAR_13);
   *VAR_9 = VAR_2;
   goto skb_done;
  }
  FUNC_0(VAR_11->copied >= VAR_11->size);

  FUNC_1(VAR_5, "skb %p ptr=%p avail=%u\n", VAR_6, VAR_16,
         VAR_15);
  VAR_14 = FUNC_3(VAR_10, VAR_11, VAR_16, VAR_15);
  FUNC_0(VAR_14 == 0);
  VAR_13 += VAR_14;

  if (VAR_11->total_copied >= VAR_11->total_size) {
   FUNC_4(&VAR_12);
   goto segment_done;
  }
 }

segment_done:
 *VAR_9 = VAR_1;
 FUNC_1(VAR_5, "segment done\n");
 VAR_14 = VAR_11->done(VAR_10, VAR_11);
 if (VAR_14 != 0) {
  *VAR_9 = VAR_0;
  FUNC_1(VAR_5, "Error receiving PDU, errno=%d\n", VAR_14);
  FUNC_2(VAR_5, VAR_14);
  return 0;
 }


skb_done:
 VAR_5->rxdata_octets += VAR_13;
 return VAR_13;
}
