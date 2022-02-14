
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct sq_imm_subdesc {int post_cqe; int dont_send; int tot_len; int rsvd2; int len; int subdesc_type; scalar_t__ subdesc_cnt; } ;
struct sq_hdr_subdesc {int post_cqe; int dont_send; int tot_len; int rsvd2; int len; int subdesc_type; scalar_t__ subdesc_cnt; } ;
struct snd_queue {scalar_t__* skbuff; } ;
struct sk_buff {int dummy; } ;


 scalar_t__ FUNC_0 (struct snd_queue*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sq_imm_subdesc*,int ,int ) ;
 int FUNC_2 (struct snd_queue*,int) ;

__attribute__((used)) static inline void FUNC_3(struct snd_queue *VAR_4, int VAR_5,
         int VAR_6, struct sk_buff *VAR_7)
{
 struct sq_imm_subdesc *VAR_8;
 struct sq_hdr_subdesc *VAR_9;

 VAR_4->skbuff[VAR_5] = (u64)VAR_7;

 VAR_9 = (struct sq_hdr_subdesc *)FUNC_0(VAR_4, VAR_5);
 FUNC_1(VAR_9, 0, VAR_1);
 VAR_9->subdesc_type = VAR_2;

 VAR_9->post_cqe = 1;

 VAR_9->dont_send = 1;
 VAR_9->subdesc_cnt = VAR_0 - 1;
 VAR_9->tot_len = 1;

 VAR_9->rsvd2 = VAR_6;

 VAR_5 = FUNC_2(VAR_4, VAR_5);
 VAR_8 = (struct sq_imm_subdesc *)FUNC_0(VAR_4, VAR_5);
 FUNC_1(VAR_8, 0, VAR_1);
 VAR_8->subdesc_type = VAR_3;
 VAR_8->len = 1;
}
