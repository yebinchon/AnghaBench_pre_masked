
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*,int) ;
 int FUNC_1 (int const) ;

__attribute__((used)) static void FUNC_2(struct ath10k *VAR_1,
         const __le32 *VAR_2,
         int VAR_3)
{
 int VAR_4;
 u32 VAR_5;

 FUNC_0(VAR_1, VAR_0, "htt rx tx fetch confirm num_resp_ids %d\n",
     VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_5 = FUNC_1(VAR_2[VAR_4]);

  FUNC_0(VAR_1, VAR_0, "htt rx tx fetch confirm resp_id %u\n",
      VAR_5);


 }
}
