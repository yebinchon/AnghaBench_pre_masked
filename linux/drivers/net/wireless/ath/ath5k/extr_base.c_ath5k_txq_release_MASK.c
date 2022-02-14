
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_txq {int setup; int qnum; } ;
struct ath5k_hw {struct ath5k_txq* txqs; } ;


 unsigned int FUNC_0 (struct ath5k_txq*) ;
 int FUNC_1 (struct ath5k_hw*,int ) ;

__attribute__((used)) static void
FUNC_2(struct ath5k_hw *VAR_0)
{
 struct ath5k_txq *VAR_1 = VAR_0->txqs;
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->txqs); VAR_2++, VAR_1++)
  if (VAR_1->setup) {
   FUNC_1(VAR_0, VAR_1->qnum);
   VAR_1->setup = 0;
  }
}
