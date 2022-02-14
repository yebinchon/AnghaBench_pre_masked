
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_bmap {void* b_last_allocated_ptr; void* b_last_allocated_key; } ;
typedef void* __u64 ;



__attribute__((used)) static inline void FUNC_0(struct nilfs_bmap *VAR_0, __u64 VAR_1,
        __u64 VAR_2)
{
 VAR_0->b_last_allocated_key = VAR_1;
 VAR_0->b_last_allocated_ptr = VAR_2;
}
