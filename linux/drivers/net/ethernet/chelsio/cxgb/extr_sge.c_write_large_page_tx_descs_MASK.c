
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdQ_e {int dummy; } ;
struct cmdQ_ce {int * skb; } ;
struct cmdQ {unsigned int size; struct cmdQ_e* entries; struct cmdQ_ce* centries; } ;
typedef unsigned int dma_addr_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cmdQ_ce*,int ,int ) ;
 int FUNC_1 (struct cmdQ_e*,unsigned int,unsigned int,unsigned int,int) ;

__attribute__((used)) static inline unsigned int FUNC_2(unsigned int VAR_3,
           struct cmdQ_e **VAR_4,
           struct cmdQ_ce **VAR_5,
           unsigned int *VAR_6,
           dma_addr_t *VAR_7,
           unsigned int *VAR_8,
           unsigned int VAR_9,
           struct cmdQ *VAR_10)
{
 if (VAR_0 > VAR_1) {
  struct cmdQ_e *VAR_11 = *VAR_4;
  struct cmdQ_ce *VAR_12 = *VAR_5;

  while (*VAR_8 > VAR_1) {
   *VAR_8 -= VAR_1;
   FUNC_1(VAR_11, *VAR_7, VAR_1,
          *VAR_6, VAR_9 == 0 && *VAR_8 == 0);
   VAR_12->skb = ((void*)0);
   FUNC_0(VAR_12, VAR_2, 0);
   *VAR_7 += VAR_1;
   if (*VAR_8) {
    VAR_12++;
    VAR_11++;
    if (++VAR_3 == VAR_10->size) {
     VAR_3 = 0;
     *VAR_6 ^= 1;
     VAR_12 = VAR_10->centries;
     VAR_11 = VAR_10->entries;
    }
   }
  }
  *VAR_4 = VAR_11;
  *VAR_5 = VAR_12;
 }
 return VAR_3;
}
