
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_htt {struct ath10k* ar; } ;
struct ath10k {int dummy; } ;


 int FUNC_0 (struct ath10k*,char*,int) ;
 int FUNC_1 (struct ath10k_htt*) ;
 int FUNC_2 (struct ath10k_htt*) ;
 int FUNC_3 (struct ath10k_htt*) ;
 int FUNC_4 (struct ath10k_htt*) ;
 int FUNC_5 (struct ath10k_htt*) ;
 int FUNC_6 (struct ath10k_htt*) ;
 int FUNC_7 (struct ath10k_htt*) ;

__attribute__((used)) static int FUNC_8(struct ath10k_htt *VAR_0)
{
 struct ath10k *VAR_1 = VAR_0->ar;
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2) {
  FUNC_0(VAR_1, "failed to alloc cont tx buffer: %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2) {
  FUNC_0(VAR_1, "failed to alloc cont frag desc: %d\n", VAR_2);
  goto free_txbuf;
 }

 VAR_2 = FUNC_6(VAR_0);
 if (VAR_2) {
  FUNC_0(VAR_1, "failed to alloc txq: %d\n", VAR_2);
  goto free_frag_desc;
 }

 VAR_2 = FUNC_5(VAR_0);
 if (VAR_2) {
  FUNC_0(VAR_1, "failed to alloc txdone fifo: %d\n", VAR_2);
  goto free_txq;
 }

 return 0;

free_txq:
 FUNC_7(VAR_0);

free_frag_desc:
 FUNC_3(VAR_0);

free_txbuf:
 FUNC_4(VAR_0);

 return VAR_2;
}
