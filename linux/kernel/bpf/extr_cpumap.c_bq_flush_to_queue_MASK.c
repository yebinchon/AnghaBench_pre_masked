
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_frame {int dummy; } ;
struct xdp_bulk_queue {int count; int flush_node; struct xdp_frame** q; struct bpf_cpu_map_entry* obj; } ;
struct ptr_ring {int producer_lock; } ;
struct bpf_cpu_map_entry {int cpu; int map_id; struct ptr_ring* queue; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ptr_ring*,struct xdp_frame*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,unsigned int,unsigned int,int const) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct xdp_frame*) ;
 int FUNC_8 (struct xdp_frame*) ;

__attribute__((used)) static int FUNC_9(struct xdp_bulk_queue *VAR_0, bool VAR_1)
{
 struct bpf_cpu_map_entry *VAR_2 = VAR_0->obj;
 unsigned int VAR_3 = 0, VAR_4 = 0;
 const int VAR_5 = VAR_2->cpu;
 struct ptr_ring *VAR_6;
 int VAR_7;

 if (FUNC_6(!VAR_0->count))
  return 0;

 VAR_6 = VAR_2->queue;
 FUNC_3(&VAR_6->producer_lock);

 for (VAR_7 = 0; VAR_7 < VAR_0->count; VAR_7++) {
  struct xdp_frame *VAR_8 = VAR_0->q[VAR_7];
  int VAR_9;

  VAR_9 = FUNC_1(VAR_6, VAR_8);
  if (VAR_9) {
   VAR_4++;
   if (FUNC_2(VAR_1))
    FUNC_8(VAR_8);
   else
    FUNC_7(VAR_8);
  }
  VAR_3++;
 }
 VAR_0->count = 0;
 FUNC_4(&VAR_6->producer_lock);

 FUNC_0(&VAR_0->flush_node);


 FUNC_5(VAR_2->map_id, VAR_3, VAR_4, VAR_5);
 return 0;
}
