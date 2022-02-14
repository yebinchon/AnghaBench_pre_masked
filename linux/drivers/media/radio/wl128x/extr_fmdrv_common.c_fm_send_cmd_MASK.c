
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct fmdev {int tx_task; int tx_q; int flag; } ;
struct fm_cmd_msg_hdr {int len; int dlen; int rd_wr; scalar_t__ op; int hdr; } ;
struct completion {int dummy; } ;
typedef int __be16 ;
struct TYPE_2__ {struct completion* completion; scalar_t__ fm_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (char*,...) ;
 struct fm_cmd_msg_hdr* FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*,void*,int) ;
 int FUNC_6 (int *,struct sk_buff*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct fmdev *VAR_8, u8 VAR_9, u16 VAR_10, void *VAR_11,
  int VAR_12, struct completion *VAR_13)
{
 struct sk_buff *VAR_14;
 struct fm_cmd_msg_hdr *VAR_15;
 int VAR_16;

 if (VAR_9 >= VAR_4) {
  FUNC_3("Invalid fm opcode - %d\n", VAR_9);
  return -VAR_0;
 }
 if (FUNC_8(VAR_3, &VAR_8->flag) && VAR_11 == ((void*)0)) {
  FUNC_3("Payload data is NULL during fw download\n");
  return -VAR_0;
 }
 if (!FUNC_8(VAR_3, &VAR_8->flag))
  VAR_16 =
      VAR_2 + ((VAR_11 == ((void*)0)) ? 0 : VAR_12);
 else
  VAR_16 = VAR_12;

 VAR_14 = FUNC_0(VAR_16, VAR_7);
 if (!VAR_14) {
  FUNC_3("No memory to create new SKB\n");
  return -VAR_1;
 }




 if (!FUNC_8(VAR_3, &VAR_8->flag) ||
   FUNC_8(VAR_5, &VAR_8->flag)) {

  VAR_15 = FUNC_4(VAR_14, VAR_2);
  VAR_15->hdr = VAR_6;


  VAR_15->len = ((VAR_11 == ((void*)0)) ? 0 : VAR_12) + 3;


  VAR_15->op = VAR_9;


  VAR_15->rd_wr = VAR_10;
  VAR_15->dlen = VAR_12;
  FUNC_2(VAR_14)->fm_op = VAR_9;






  if (VAR_11 != ((void*)0))
   *(__be16 *)VAR_11 = FUNC_1(*(u16 *)VAR_11);

 } else if (VAR_11 != ((void*)0)) {
  FUNC_2(VAR_14)->fm_op = *((u8 *)VAR_11 + 2);
 }
 if (VAR_11 != ((void*)0))
  FUNC_5(VAR_14, VAR_11, VAR_12);

 FUNC_2(VAR_14)->completion = VAR_13;
 FUNC_6(&VAR_8->tx_q, VAR_14);
 FUNC_7(&VAR_8->tx_task);

 return 0;
}
