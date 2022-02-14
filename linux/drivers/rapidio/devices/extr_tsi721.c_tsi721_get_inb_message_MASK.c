
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct tsi721_imsg_desc {int msg_info; int bufptr_lo; int bufptr_hi; } ;
struct tsi721_device {scalar_t__ regs; TYPE_1__* imsg_ring; int * imsg_init; } ;
struct rio_mport {struct tsi721_device* priv; } ;
struct TYPE_2__ {size_t desc_rdptr; size_t rx_slot; size_t size; int* imfq_base; size_t fq_wrptr; int ** imq_base; scalar_t__ buf_phys; void* buf_base; struct tsi721_imsg_desc* imd_base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (size_t,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (void*,void*,int) ;

__attribute__((used)) static void *FUNC_7(struct rio_mport *VAR_3, int VAR_4)
{
 struct tsi721_device *VAR_5 = VAR_3->priv;
 struct tsi721_imsg_desc *VAR_6;
 u32 VAR_7;
 void *VAR_8 = ((void*)0);
 u64 VAR_9;
 void *VAR_10 = ((void*)0);
 u64 *VAR_11;
 int VAR_12 = VAR_4 + 4;
 int VAR_13;

 if (!VAR_5->imsg_init[VAR_4])
  return ((void*)0);

 VAR_6 = VAR_5->imsg_ring[VAR_4].imd_base;
 VAR_6 += VAR_5->imsg_ring[VAR_4].desc_rdptr;

 if (!(FUNC_5(VAR_6->msg_info) & VAR_2))
  goto out;

 VAR_7 = VAR_5->imsg_ring[VAR_4].rx_slot;
 while (VAR_5->imsg_ring[VAR_4].imq_base[VAR_7] == ((void*)0)) {
  if (++VAR_7 == VAR_5->imsg_ring[VAR_4].size)
   VAR_7 = 0;
 }

 VAR_9 = ((u64)FUNC_5(VAR_6->bufptr_hi) << 32) |
   FUNC_5(VAR_6->bufptr_lo);

 VAR_8 = VAR_5->imsg_ring[VAR_4].buf_base +
    (VAR_9 - (u64)VAR_5->imsg_ring[VAR_4].buf_phys);

 VAR_10 = VAR_5->imsg_ring[VAR_4].imq_base[VAR_7];
 VAR_13 = FUNC_5(VAR_6->msg_info) & VAR_1;
 if (VAR_13 == 0)
  VAR_13 = VAR_0;

 FUNC_6(VAR_10, VAR_8, VAR_13);
 VAR_5->imsg_ring[VAR_4].imq_base[VAR_7] = ((void*)0);

 VAR_6->msg_info &= FUNC_2(~VAR_2);
 if (++VAR_5->imsg_ring[VAR_4].desc_rdptr == VAR_5->imsg_ring[VAR_4].size)
  VAR_5->imsg_ring[VAR_4].desc_rdptr = 0;

 FUNC_4(VAR_5->imsg_ring[VAR_4].desc_rdptr,
  VAR_5->regs + FUNC_0(VAR_12));


 VAR_11 = VAR_5->imsg_ring[VAR_4].imfq_base;
 VAR_11[VAR_5->imsg_ring[VAR_4].fq_wrptr] = FUNC_3(VAR_9);

 if (++VAR_5->imsg_ring[VAR_4].fq_wrptr == VAR_5->imsg_ring[VAR_4].size)
  VAR_5->imsg_ring[VAR_4].fq_wrptr = 0;

 FUNC_4(VAR_5->imsg_ring[VAR_4].fq_wrptr,
  VAR_5->regs + FUNC_1(VAR_12));
out:
 return VAR_10;
}
