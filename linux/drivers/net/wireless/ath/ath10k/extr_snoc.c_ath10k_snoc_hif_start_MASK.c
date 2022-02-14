
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_snoc {int flags; } ;
struct ath10k {int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,int ,char*) ;
 int FUNC_1 (struct ath10k*) ;
 struct ath10k_snoc* FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ath10k *VAR_2)
{
 struct ath10k_snoc *VAR_3 = FUNC_2(VAR_2);

 FUNC_5(&VAR_2->napi);
 FUNC_1(VAR_2);
 FUNC_3(VAR_2);

 FUNC_4(VAR_1, &VAR_3->flags);

 FUNC_0(VAR_2, VAR_0, "boot hif start\n");

 return 0;
}
