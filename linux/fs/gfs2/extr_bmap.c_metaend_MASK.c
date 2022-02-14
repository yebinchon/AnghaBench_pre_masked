
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct metapath {struct buffer_head** mp_bh; } ;
struct buffer_head {scalar_t__ b_size; scalar_t__ b_data; } ;
typedef int __be64 ;



__attribute__((used)) static inline const __be64 *FUNC_0(unsigned int VAR_0, const struct metapath *VAR_1)
{
 const struct buffer_head *VAR_2 = VAR_1->mp_bh[VAR_0];
 return (const __be64 *)(VAR_2->b_data + VAR_2->b_size);
}
