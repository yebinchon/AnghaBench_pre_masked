
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath10k_htc_lookahead_bundle {int lookahead; } ;
struct ath10k_htc {struct ath10k* ar; } ;
struct ath10k {int dummy; } ;
typedef enum ath10k_htc_ep_id { ____Placeholder_ath10k_htc_ep_id } ath10k_htc_ep_id ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,char*,int) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct ath10k_htc *VAR_2,
        const struct ath10k_htc_lookahead_bundle *VAR_3,
        int VAR_4,
        enum ath10k_htc_ep_id VAR_5,
        void *VAR_6,
        int *VAR_7)
{
 struct ath10k *VAR_8 = VAR_2->ar;
 int VAR_9 = VAR_4 / sizeof(*VAR_3);

 if (!VAR_9 || (VAR_9 > VAR_1)) {
  FUNC_0(VAR_8, "Invalid lookahead bundle count: %d\n",
       VAR_9);
  return -VAR_0;
 }

 if (VAR_6 && VAR_7) {
  int VAR_10;

  for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
   FUNC_1(((u8 *)VAR_6) + 4 * VAR_10,
          VAR_3->lookahead, 4);
   VAR_3++;
  }

  *VAR_7 = VAR_9;
 }

 return 0;
}
