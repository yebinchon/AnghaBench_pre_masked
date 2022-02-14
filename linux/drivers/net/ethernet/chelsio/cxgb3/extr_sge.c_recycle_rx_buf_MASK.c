
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_fl {size_t pidx; int gen; size_t size; int pend_cred; int credits; int * sdesc; struct rx_desc* desc; } ;
struct rx_desc {void* gen2; void* len_gen; int addr_hi; int addr_lo; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct adapter*,struct sge_fl*) ;

__attribute__((used)) static void FUNC_5(struct adapter *VAR_0, struct sge_fl *VAR_1,
      unsigned int VAR_2)
{
 struct rx_desc *VAR_3 = &VAR_1->desc[VAR_2];
 struct rx_desc *VAR_4 = &VAR_1->desc[VAR_1->pidx];

 VAR_1->sdesc[VAR_1->pidx] = VAR_1->sdesc[VAR_2];
 VAR_4->addr_lo = VAR_3->addr_lo;
 VAR_4->addr_hi = VAR_3->addr_hi;
 FUNC_3();
 VAR_4->len_gen = FUNC_2(FUNC_0(VAR_1->gen));
 VAR_4->gen2 = FUNC_2(FUNC_1(VAR_1->gen));

 if (++VAR_1->pidx == VAR_1->size) {
  VAR_1->pidx = 0;
  VAR_1->gen ^= 1;
 }

 VAR_1->credits++;
 VAR_1->pend_cred++;
 FUNC_4(VAR_0, VAR_1);
}
