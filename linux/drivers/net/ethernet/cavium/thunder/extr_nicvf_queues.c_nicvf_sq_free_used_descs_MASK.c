
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sq_hdr_subdesc {scalar_t__ subdesc_type; int tot_len; int subdesc_cnt; } ;
struct snd_queue {int head; scalar_t__* skbuff; } ;
struct sk_buff {int dummy; } ;
struct nicvf {int dummy; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
typedef int atomic64_t ;


 scalar_t__ FUNC_0 (struct snd_queue*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct sk_buff*) ;
 struct nicvf* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct snd_queue*,int) ;
 int FUNC_5 (struct nicvf*,int ,int) ;

void FUNC_6(struct net_device *VAR_3, struct snd_queue *VAR_4,
         int VAR_5)
{
 u64 VAR_6, VAR_7;
 struct sk_buff *VAR_8;
 struct nicvf *VAR_9 = FUNC_3(VAR_3);
 struct sq_hdr_subdesc *VAR_10;

 VAR_6 = FUNC_5(VAR_9, VAR_0, VAR_5) >> 4;
 VAR_7 = FUNC_5(VAR_9, VAR_1, VAR_5) >> 4;
 while (VAR_4->head != VAR_6) {
  VAR_10 = (struct sq_hdr_subdesc *)FUNC_0(VAR_4, VAR_4->head);
  if (VAR_10->subdesc_type != VAR_2) {
   FUNC_4(VAR_4, 1);
   continue;
  }
  VAR_8 = (struct sk_buff *)VAR_4->skbuff[VAR_4->head];
  if (VAR_8)
   FUNC_2(VAR_8);
  FUNC_1(1, (atomic64_t *)&VAR_3->stats.tx_packets);
  FUNC_1(VAR_10->tot_len,
        (atomic64_t *)&VAR_3->stats.tx_bytes);
  FUNC_4(VAR_4, VAR_10->subdesc_cnt + 1);
 }
}
