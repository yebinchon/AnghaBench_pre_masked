
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct il_tfd_tb {int hi_n_len; int lo; } ;
struct il_tfd {size_t num_tbs; struct il_tfd_tb* tbs; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static inline void
FUNC_2(struct il_tfd *VAR_0, u8 VAR_1, dma_addr_t VAR_2, u16 VAR_3)
{
 struct il_tfd_tb *VAR_4 = &VAR_0->tbs[VAR_1];
 u16 VAR_5 = VAR_3 << 4;

 FUNC_1(VAR_2, &VAR_4->lo);
 if (sizeof(dma_addr_t) > sizeof(u32))
  VAR_5 |= ((VAR_2 >> 16) >> 16) & 0xF;

 VAR_4->hi_n_len = FUNC_0(VAR_5);

 VAR_0->num_tbs = VAR_1 + 1;
}
