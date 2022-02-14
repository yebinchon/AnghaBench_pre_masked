
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct sk_buff {scalar_t__ data; int len; } ;
struct iscsi_tcp_task {int exp_datasn; } ;
struct iscsi_tcp_conn {int dummy; } ;
struct iscsi_task {struct iscsi_tcp_task* dd_data; scalar_t__ sc; } ;
struct iscsi_hdr {scalar_t__ opcode; } ;
struct iscsi_data {int datasn; int itt; } ;
struct iscsi_conn {scalar_t__ hdrdgst_en; struct iscsi_tcp_conn* dd_data; } ;
struct cxgbi_sock {int dummy; } ;
typedef int itt_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct cxgbi_sock*,int ) ;
 int FUNC_4 (struct iscsi_conn*,int ) ;
 struct iscsi_task* FUNC_5 (struct iscsi_conn*,int ) ;
 int FUNC_6 (struct iscsi_tcp_conn*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int,char*,struct iscsi_conn*,struct sk_buff*,int ,int ) ;
 int FUNC_9 (char*,struct iscsi_conn*,struct sk_buff*) ;
 int FUNC_10 (struct iscsi_conn*,struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int
FUNC_12(struct cxgbi_sock *VAR_10, struct iscsi_conn *VAR_11,
   struct sk_buff *VAR_12)
{
 struct iscsi_tcp_conn *VAR_13 = VAR_11->dd_data;
 int VAR_14;

 FUNC_8(1 << VAR_1,
  "conn 0x%p, skb 0x%p, len %u, flag 0x%lx.\n",
  VAR_11, VAR_12, VAR_12->len, FUNC_1(VAR_12));

 if (!FUNC_6(VAR_13)) {
  FUNC_9("conn 0x%p, skb 0x%p, not hdr.\n", VAR_11, VAR_12);
  FUNC_4(VAR_11, VAR_4);
  return -VAR_2;
 }

 if (VAR_11->hdrdgst_en &&
     FUNC_2(VAR_12, VAR_8)) {
  FUNC_9("conn 0x%p, skb 0x%p, hcrc.\n", VAR_11, VAR_12);
  FUNC_4(VAR_11, VAR_3);
  return -VAR_2;
 }

 if (FUNC_2(VAR_12, VAR_9) &&
     FUNC_2(VAR_12, VAR_7)) {






  itt_t VAR_15 = ((struct iscsi_data *)VAR_12->data)->itt;
  struct iscsi_task *VAR_16 = FUNC_5(VAR_11, VAR_15);
  u32 VAR_17 = FUNC_0(((struct iscsi_data *)
       VAR_12->data)->datasn);
  if (VAR_16 && VAR_16->sc) {
   struct iscsi_tcp_task *VAR_18 = VAR_16->dd_data;

   VAR_18->exp_datasn = VAR_17;
  }
 }

 VAR_14 = FUNC_10(VAR_11, VAR_12, 0, 0);
 if (FUNC_7(VAR_14 >= 0)) {
  struct iscsi_hdr *VAR_19 = (struct iscsi_hdr *)VAR_12->data;
  u8 VAR_20 = VAR_19->opcode & VAR_5;

  if (FUNC_11(VAR_20 == VAR_6))
   FUNC_3(VAR_10, VAR_0);
 }

 return VAR_14;
}
