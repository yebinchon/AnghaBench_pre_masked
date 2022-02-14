
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct tsi721_omsg_desc {void* type_id; void* bufptr_hi; void* bufptr_lo; void* msg_info; } ;
struct tsi721_device {TYPE_1__* omsg_ring; scalar_t__ regs; int * omsg_init; } ;
struct rio_mport {int sys_size; struct tsi721_device* priv; } ;
struct rio_dev {int destid; } ;
struct TYPE_2__ {size_t tx_slot; scalar_t__ size; int lock; int wr_count; scalar_t__* omq_phys; struct tsi721_omsg_desc* omd_base; int * omq_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,void*,size_t) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_8(struct rio_mport *VAR_4, struct rio_dev *VAR_5, int VAR_6,
   void *VAR_7, size_t VAR_8)
{
 struct tsi721_device *VAR_9 = VAR_4->priv;
 struct tsi721_omsg_desc *VAR_10;
 u32 VAR_11;
 unsigned long VAR_12;

 if (!VAR_9->omsg_init[VAR_6] ||
     VAR_8 > VAR_2 || VAR_8 < 8)
  return -VAR_1;

 FUNC_6(&VAR_9->omsg_ring[VAR_6].lock, VAR_12);

 VAR_11 = VAR_9->omsg_ring[VAR_6].tx_slot;


 FUNC_5(VAR_9->omsg_ring[VAR_6].omq_base[VAR_11], VAR_7, VAR_8);

 if (VAR_8 & 0x7)
  VAR_8 += 8;


 VAR_10 = VAR_9->omsg_ring[VAR_6].omd_base;
 VAR_10[VAR_11].type_id = FUNC_1((VAR_0 << 29) | VAR_5->destid);





 VAR_10[VAR_11].msg_info =
  FUNC_1((VAR_4->sys_size << 26) | (VAR_6 << 22) |
       (0xe << 12) | (VAR_8 & 0xff8));
 VAR_10[VAR_11].bufptr_lo =
  FUNC_1((u64)VAR_9->omsg_ring[VAR_6].omq_phys[VAR_11] &
       0xffffffff);
 VAR_10[VAR_11].bufptr_hi =
  FUNC_1((u64)VAR_9->omsg_ring[VAR_6].omq_phys[VAR_11] >> 32);

 VAR_9->omsg_ring[VAR_6].wr_count++;


 if (++VAR_9->omsg_ring[VAR_6].tx_slot == VAR_9->omsg_ring[VAR_6].size) {
  VAR_9->omsg_ring[VAR_6].tx_slot = 0;

  VAR_9->omsg_ring[VAR_6].wr_count++;
 }

 FUNC_4();


 FUNC_3(VAR_9->omsg_ring[VAR_6].wr_count,
  VAR_9->regs + FUNC_0(VAR_6));
 FUNC_2(VAR_9->regs + FUNC_0(VAR_6));

 FUNC_7(&VAR_9->omsg_ring[VAR_6].lock, VAR_12);

 return 0;
}
