
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct freelQ_e {int len_gen; int gen2; int addr_hi; int addr_lo; } ;
struct freelQ {size_t pidx; int genbit; size_t size; int credits; int * centries; struct freelQ_e* entries; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct freelQ *VAR_0, int VAR_1)
{
 struct freelQ_e *VAR_2 = &VAR_0->entries[VAR_1];
 struct freelQ_e *VAR_3 = &VAR_0->entries[VAR_0->pidx];

 VAR_0->centries[VAR_0->pidx] = VAR_0->centries[VAR_1];
 VAR_3->addr_lo = VAR_2->addr_lo;
 VAR_3->addr_hi = VAR_2->addr_hi;
 VAR_3->len_gen = FUNC_0(VAR_2->len_gen) | FUNC_1(VAR_0->genbit);
 FUNC_3();
 VAR_3->gen2 = FUNC_2(VAR_0->genbit);
 VAR_0->credits++;

 if (++VAR_0->pidx == VAR_0->size) {
  VAR_0->pidx = 0;
  VAR_0->genbit ^= 1;
 }
}
