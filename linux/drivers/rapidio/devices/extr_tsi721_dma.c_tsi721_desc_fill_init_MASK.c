
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct tsi721_tx_desc {int rtype; int destid; int rio_addr; int rio_addr_u; } ;
struct TYPE_2__ {scalar_t__ s_size; scalar_t__ s_dist; void* bufptr_hi; void* bufptr_lo; } ;
struct tsi721_dma_desc {TYPE_1__ t1; void* raddr_hi; void* raddr_lo; void* bcount; void* type_id; } ;
struct scatterlist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct scatterlist*) ;

__attribute__((used)) static int
FUNC_2(struct tsi721_tx_desc *VAR_2,
        struct tsi721_dma_desc *VAR_3,
        struct scatterlist *VAR_4, u32 VAR_5)
{
 u64 VAR_6;

 if (!VAR_3)
  return -VAR_1;


 VAR_3->type_id = FUNC_0((VAR_0 << 29) |
          (VAR_2->rtype << 19) | VAR_2->destid);
 VAR_3->bcount = FUNC_0(((VAR_2->rio_addr & 0x3) << 30) |
         (VAR_5 << 26));
 VAR_6 = (VAR_2->rio_addr >> 2) |
    ((u64)(VAR_2->rio_addr_u & 0x3) << 62);
 VAR_3->raddr_lo = FUNC_0(VAR_6 & 0xffffffff);
 VAR_3->raddr_hi = FUNC_0(VAR_6 >> 32);
 VAR_3->t1.bufptr_lo = FUNC_0(
     (u64)FUNC_1(VAR_4) & 0xffffffff);
 VAR_3->t1.bufptr_hi = FUNC_0((u64)FUNC_1(VAR_4) >> 32);
 VAR_3->t1.s_dist = 0;
 VAR_3->t1.s_size = 0;

 return 0;
}
