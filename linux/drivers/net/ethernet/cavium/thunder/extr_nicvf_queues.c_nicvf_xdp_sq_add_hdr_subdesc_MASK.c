
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct sq_hdr_subdesc {int subdesc_cnt; int tot_len; int post_cqe; int subdesc_type; } ;
struct snd_queue {scalar_t__* xdp_page; } ;


 scalar_t__ FUNC_0 (struct snd_queue*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sq_hdr_subdesc*,int ,int ) ;
 scalar_t__ FUNC_2 (void*) ;

__attribute__((used)) static inline void
FUNC_3(struct snd_queue *VAR_2, int VAR_3,
        int VAR_4, u64 VAR_5, int VAR_6)
{
 struct sq_hdr_subdesc *VAR_7;

 VAR_7 = (struct sq_hdr_subdesc *)FUNC_0(VAR_2, VAR_3);
 FUNC_1(VAR_7, 0, VAR_0);
 VAR_7->subdesc_type = VAR_1;
 VAR_7->subdesc_cnt = VAR_4;
 VAR_7->tot_len = VAR_6;
 VAR_7->post_cqe = 1;
 VAR_2->xdp_page[VAR_3] = (u64)FUNC_2((void *)VAR_5);
}
