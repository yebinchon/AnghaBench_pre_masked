
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sqe_submit {unsigned int index; unsigned int sequence; int * sqe; } ;
struct TYPE_2__ {int tail; } ;
struct io_rings {int sq_dropped; TYPE_1__ sq; } ;
struct io_ring_ctx {unsigned int cached_sq_head; unsigned int sq_mask; unsigned int sq_entries; int cached_sq_dropped; int * sq_sqes; int * sq_array; struct io_rings* rings; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 unsigned int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct io_ring_ctx *VAR_0, struct sqe_submit *VAR_1)
{
 struct io_rings *VAR_2 = VAR_0->rings;
 u32 *VAR_3 = VAR_0->sq_array;
 unsigned VAR_4;
 VAR_4 = VAR_0->cached_sq_head;

 if (VAR_4 == FUNC_2(&VAR_2->sq.tail))
  return 0;

 VAR_4 = FUNC_0(VAR_3[VAR_4 & VAR_0->sq_mask]);
 if (VAR_4 < VAR_0->sq_entries) {
  VAR_1->index = VAR_4;
  VAR_1->sqe = &VAR_0->sq_sqes[VAR_4];
  VAR_1->sequence = VAR_0->cached_sq_head;
  VAR_0->cached_sq_head++;
  return 1;
 }


 VAR_0->cached_sq_head++;
 VAR_0->cached_sq_dropped++;
 FUNC_1(VAR_2->sq_dropped, VAR_0->cached_sq_dropped);
 return 0;
}
