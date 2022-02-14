
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath10k_htc_lookahead_report {int pre_valid; int post_valid; int lookahead; } ;
struct ath10k_htc {struct ath10k* ar; } ;
struct ath10k {int dummy; } ;
typedef enum ath10k_htc_ep_id { ____Placeholder_ath10k_htc_ep_id } ath10k_htc_ep_id ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*,int,int) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct ath10k_htc *VAR_1,
        const struct ath10k_htc_lookahead_report *VAR_2,
        int VAR_3,
        enum ath10k_htc_ep_id VAR_4,
        void *VAR_5,
        int *VAR_6)
{
 struct ath10k *VAR_7 = VAR_1->ar;






 if (VAR_2->pre_valid != ((~VAR_2->post_valid) & 0xFF))
  return 0;

 if (VAR_5 && VAR_6) {
  FUNC_0(VAR_7, VAR_0,
      "htc rx lookahead found pre_valid 0x%x post_valid 0x%x\n",
      VAR_2->pre_valid, VAR_2->post_valid);


  FUNC_1((u8 *)VAR_5, VAR_2->lookahead, 4);

  *VAR_6 = 1;
 }

 return 0;
}
