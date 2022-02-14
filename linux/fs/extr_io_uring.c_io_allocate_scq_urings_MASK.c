
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct io_uring_sqe {int dummy; } ;
struct io_uring_params {scalar_t__ sq_entries; scalar_t__ cq_entries; } ;
struct io_rings {scalar_t__ cq_ring_entries; scalar_t__ sq_ring_entries; scalar_t__ cq_ring_mask; scalar_t__ sq_ring_mask; } ;
struct io_ring_ctx {void* sq_sqes; scalar_t__ cq_entries; scalar_t__ sq_entries; scalar_t__ cq_mask; scalar_t__ sq_mask; int * sq_array; struct io_rings* rings; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (int,scalar_t__) ;
 void* FUNC_1 (size_t) ;
 size_t FUNC_2 (scalar_t__,scalar_t__,size_t*) ;

__attribute__((used)) static int FUNC_3(struct io_ring_ctx *VAR_3,
      struct io_uring_params *VAR_4)
{
 struct io_rings *VAR_5;
 size_t VAR_6, VAR_7;

 VAR_6 = FUNC_2(VAR_4->sq_entries, VAR_4->cq_entries, &VAR_7);
 if (VAR_6 == VAR_2)
  return -VAR_1;

 VAR_5 = FUNC_1(VAR_6);
 if (!VAR_5)
  return -VAR_0;

 VAR_3->rings = VAR_5;
 VAR_3->sq_array = (u32 *)((char *)VAR_5 + VAR_7);
 VAR_5->sq_ring_mask = VAR_4->sq_entries - 1;
 VAR_5->cq_ring_mask = VAR_4->cq_entries - 1;
 VAR_5->sq_ring_entries = VAR_4->sq_entries;
 VAR_5->cq_ring_entries = VAR_4->cq_entries;
 VAR_3->sq_mask = VAR_5->sq_ring_mask;
 VAR_3->cq_mask = VAR_5->cq_ring_mask;
 VAR_3->sq_entries = VAR_5->sq_ring_entries;
 VAR_3->cq_entries = VAR_5->cq_ring_entries;

 VAR_6 = FUNC_0(sizeof(struct io_uring_sqe), VAR_4->sq_entries);
 if (VAR_6 == VAR_2)
  return -VAR_1;

 VAR_3->sq_sqes = FUNC_1(VAR_6);
 if (!VAR_3->sq_sqes)
  return -VAR_0;

 return 0;
}
