
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {void* b_data; } ;
struct block_head {int dummy; } ;



__attribute__((used)) static inline void *FUNC_0(const struct buffer_head *VAR_0)
{
 return VAR_0->b_data + sizeof(struct block_head);
}
